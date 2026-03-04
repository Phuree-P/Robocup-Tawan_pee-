#include "ired_bringup/odom.hpp"

ODOM::ODOM()
: Node("odom_node"){
    /* Initialise Variables and Parameters */
    init_parameters();
    init_variables();

    /* Initialise ROS Publisher and Subscriber */
    auto qos = rclcpp::QoS(rclcpp::KeepLast(10));
    odom_data_pub_ = this->create_publisher<nav_msgs::msg::Odometry>(odom_topic_, qos);
    joint_states_pub_ = this->create_publisher<sensor_msgs::msg::JointState>(joint_state_topic_, qos);
    tf_pub_ = this->create_publisher<tf2_msgs::msg::TFMessage>("/tf", qos);
    motor_data_sub_ = this->create_subscription<ired_msgs::msg::MotorData>(motor_data_topic_, qos, \
        std::bind(&ODOM::fetchMotorDataCallback, this, std::placeholders::_1));
    rpy_sub_ = this->create_subscription<ired_msgs::msg::IMUData>(rpy_topic_, qos, \
        std::bind(&ODOM::fetchIMUCallback, this, std::placeholders::_1));
    robot_speed_sub_ = this->create_subscription<geometry_msgs::msg::TwistStamped>(robot_speed_topic_, qos, \
        std::bind(&ODOM::fetchRobotSpeedCallback, this, std::placeholders::_1));

    /* Initialise ROS Timers*/
    update_timer_ = this->create_wall_timer(10ms, std::bind(&ODOM::update_calback, this));

    /* ROS Logger */
    RCLCPP_INFO(this->get_logger(), "ODOM : ROS publisher on %s [nav_msgs/Odometry]", odom_topic_.c_str());
    RCLCPP_INFO(this->get_logger(), "ODOM : ROS publisher on %s [sensor_msgs/JointState]", joint_state_topic_.c_str());
    RCLCPP_INFO(this->get_logger(), "ODOM : ROS subscriber on %s [ired_msgs/MotorData]", motor_data_topic_.c_str());
    RCLCPP_INFO(this->get_logger(), "ODOM : ROS subscriber on %s [ired_msgs/IMUData]", rpy_topic_.c_str());
    RCLCPP_INFO(this->get_logger(), "ODOM : ROS subscriber on %s [geometry_msgs/TwistStamped]", robot_speed_topic_.c_str());
    
}

ODOM::~ODOM(){
    RCLCPP_WARN(this->get_logger(), "ODOM : iRED odometry node has been terminated");
}

void ODOM::init_parameters(){
    
    /* Declare parameters */
    this->declare_parameter<std::string>("odom_topic");
    this->declare_parameter<std::string>("joint_state_topic");
    this->declare_parameter<std::string>("motor_data_topic");
    this->declare_parameter<std::string>("rpy_topic");
    this->declare_parameter<std::string>("robot_speed_topic");
    this->declare_parameter<bool>("odom_tf_publish");
    this->declare_parameter<double>("rpm_to_mps");
    this->declare_parameter<double>("wheel_radius");

    /* ROS parameters */
    this->get_parameter_or<std::string>("odom_topic", odom_topic_, "/odom");
    this->get_parameter_or<std::string>("joint_state_topic", joint_state_topic_, "/joint_states");
    this->get_parameter_or<std::string>("motor_data_topic", motor_data_topic_, "/ired/motor/data");
    this->get_parameter_or<std::string>("rpy_topic", rpy_topic_, "/ired/imu/rollpitchyaw");
    this->get_parameter_or<std::string>("robot_speed_topic", robot_speed_topic_, "/ired/speed");
    this->get_parameter_or<bool>("odom_tf_publish", odom_tf_publish_, false);
    this->get_parameter_or<double>("rpm_to_mps", rpm_to_mps_, 0.003560471674);
    this->get_parameter_or<double>("wheel_radius", wheel_radius_, 0.34);
}

void ODOM::init_variables(){
    double pcov[36] = { 0.1, 0,   0,   0,   0, 0,
                        0, 0.1,   0,   0,   0, 0,
                        0,   0, 1e6,   0,   0, 0,
                        0,   0,   0, 1e6,   0, 0,
                        0,   0,   0,   0, 1e6, 0,
                        0,   0,   0,   0,   0, 0.2};
    memcpy(&(odom_data_.pose.covariance),pcov,sizeof(double)*36);
    memcpy(&(odom_data_.twist.covariance),pcov,sizeof(double)*36);

    odom_data_.header.frame_id = "odom";
    odom_data_.child_frame_id = "base_footprint";

    joint_states_.header.frame_id = "base_footprint";
    joint_states_.name.push_back("wheel_front_left_joint");
    joint_states_.name.push_back("wheel_front_right_joint");
    joint_states_.name.push_back("wheel_rear_left_joint");
    joint_states_.name.push_back("wheel_rear_right_joint");
    joint_states_.position.resize(4,0.0);
    joint_states_.velocity.resize(4,0.0);
    joint_states_.effort.resize(4,0.0);

    prev_update_time_ = this->now();
    last_time_motor_data_ = this->now();
    last_time_imu_ = this->now();
    last_time_robot_speed_ = this->now();
}

void ODOM::fetchMotorDataCallback(const ired_msgs::msg::MotorData::SharedPtr msg_){
    last_time_motor_data_ = this->now();

    wheel_speed_cmd_[FLEFT] = msg_->speed_fb[FLEFT];
    wheel_speed_cmd_[FRIGHT] = msg_->speed_fb[FRIGHT];
    wheel_speed_cmd_[RLEFT] = msg_->speed_fb[RLEFT];
    wheel_speed_cmd_[RRIGHT] = msg_->speed_fb[RRIGHT];
}

void ODOM::fetchIMUCallback(const ired_msgs::msg::IMUData::SharedPtr msg_){
    last_time_imu_ = this->now();

    rpy_[ROLL] = msg_->roll;
    rpy_[PITCH] = msg_->pitch;
    rpy_[YAW] = msg_->yaw;
}

void ODOM::fetchRobotSpeedCallback(const geometry_msgs::msg::TwistStamped::SharedPtr msg_){
    last_time_robot_speed_ = this->now();

    linear_x_ = msg_->twist.linear.x;
    linear_y_ = msg_->twist.linear.y;
    angular_z_ = msg_->twist.angular.z;
}
void ODOM::updateOdometry(const rclcpp::Duration &diff_time){
    double wheel_fl, wheel_fr, wheel_rl, wheel_rr = 0.0;
    double delta_x, delta_y, theta = 0.0;
    double v[2], w[2] = {0.0, 0.0};
    double step_time = diff_time.nanoseconds() / 1e9;

    theta = rpy_[YAW];
    delta_x = ((linear_x_ * cos(theta)) - (linear_y_ * sin(theta))) * step_time;
    delta_y = ((linear_x_ * sin(theta)) + (linear_y_ * cos(theta))) * step_time;

    odom_pose_[X] += delta_x;
    odom_pose_[Y] += delta_y;

    tf2::Quaternion q;
    q.setRPY(0, 0, rpy_[YAW]);

    odom_data_.pose.pose.position.x = odom_pose_[X];
    odom_data_.pose.pose.position.y = odom_pose_[Y];
    odom_data_.pose.pose.position.z = 0;
    odom_data_.pose.pose.orientation.x = q.x();
    odom_data_.pose.pose.orientation.y = q.y();
    odom_data_.pose.pose.orientation.z = q.z();
    odom_data_.pose.pose.orientation.w = q.w();
    odom_data_.twist.twist.linear.x  = linear_x_;
    odom_data_.twist.twist.linear.y  = linear_y_;
    odom_data_.twist.twist.angular.z = angular_z_;

    v[FLEFT]  = wheel_speed_cmd_[FLEFT] * rpm_to_mps_;
    v[FRIGHT] = wheel_speed_cmd_[FRIGHT] * rpm_to_mps_;
    v[RLEFT]  = wheel_speed_cmd_[RLEFT] * rpm_to_mps_;
    v[RRIGHT] = wheel_speed_cmd_[RRIGHT] * rpm_to_mps_;

    w[FLEFT]  = v[FLEFT] / wheel_radius_;
    w[FRIGHT] = v[FRIGHT] / wheel_radius_;
    w[RLEFT]  = v[RLEFT] / wheel_radius_;
    w[RRIGHT] = v[RRIGHT] / wheel_radius_;

    wheel_fl = w[FLEFT]   * step_time;
    wheel_fr = w[FRIGHT]  * step_time;
    wheel_rl = w[RLEFT]   * step_time;
    wheel_rr = w[RRIGHT]  * step_time;

    if(isnan(wheel_fl))  wheel_fl = 0.0;
    if(isnan(wheel_fr))  wheel_fr = 0.0;
    if(isnan(wheel_rl))  wheel_rl = 0.0;
    if(isnan(wheel_rr))  wheel_rr = 0.0;

    last_velocity_[FLEFT]  = w[FLEFT];
    last_velocity_[FRIGHT] = w[FRIGHT];
    last_velocity_[RLEFT]  = w[RLEFT];
    last_velocity_[RRIGHT] = w[RRIGHT];
    last_position_[FLEFT]  += wheel_fl;
    last_position_[FRIGHT] += wheel_fr;
    last_position_[RLEFT]  += wheel_rl;
    last_position_[RRIGHT] += wheel_rr;
}

void ODOM::updateJoint(void){
    joint_states_.position[FLEFT]    = last_position_[FLEFT];
    joint_states_.position[FRIGHT]   = last_position_[FRIGHT];
    joint_states_.position[RLEFT]    = last_position_[RLEFT];
    joint_states_.position[RRIGHT]   = last_position_[RRIGHT];
    joint_states_.velocity[FLEFT]    = last_velocity_[FLEFT];
    joint_states_.velocity[FRIGHT]   = last_velocity_[FRIGHT];
    joint_states_.velocity[RLEFT]    = last_velocity_[RLEFT];
    joint_states_.velocity[RRIGHT]   = last_velocity_[RRIGHT];
}

void ODOM::updateTF(geometry_msgs::msg::TransformStamped &odom_tf){
    odom_tf.header = odom_data_.header;
    odom_tf.child_frame_id = odom_data_.child_frame_id;
    odom_tf.transform.translation.x = odom_data_.pose.pose.position.x;
    odom_tf.transform.translation.y = odom_data_.pose.pose.position.y;
    odom_tf.transform.translation.z = odom_data_.pose.pose.position.z;
    odom_tf.transform.rotation = odom_data_.pose.pose.orientation;
}

void ODOM::update_calback(){
    rclcpp::Time time_now = this->now();
    rclcpp::Duration duration(time_now - prev_update_time_);
    prev_update_time_ = time_now;

    if((time_now - last_time_motor_data_).nanoseconds() / 1e9 > 1.0){
        wheel_speed_cmd_[FLEFT] = 0.0;
        wheel_speed_cmd_[FRIGHT] = 0.0;
        wheel_speed_cmd_[RLEFT] = 0.0;
        wheel_speed_cmd_[RRIGHT] = 0.0;
    }

    if((time_now - last_time_imu_).nanoseconds() / 1e9 > 1.0){
        rpy_[ROLL] = 0.0;
        rpy_[PITCH] = 0.0;
        rpy_[YAW] = 0.0;
    }

    if((time_now - last_time_robot_speed_).nanoseconds() / 1e9 > 1.0){
        linear_x_ = 0.0;
        linear_y_ = 0.0;
        angular_z_ = 0.0;
    }

    updateOdometry(duration);
    odom_data_.header.stamp = time_now;
    odom_data_pub_->publish(odom_data_);

    updateJoint();
    joint_states_.header.stamp = time_now;
    joint_states_pub_->publish(joint_states_);

    if(odom_tf_publish_){
        geometry_msgs::msg::TransformStamped odom_tf;
        updateTF(odom_tf);
        tf2_msgs::msg::TFMessage odom_tf_msg;
        odom_tf_msg.transforms.push_back(odom_tf);
        tf_pub_->publish(odom_tf_msg);
    }
}

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ODOM>());
  rclcpp::shutdown();

  return 0;
}