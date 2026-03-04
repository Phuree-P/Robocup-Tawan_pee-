#include "ired_bringup/inverse_kinematics.hpp"

INVERSEKINEMATICS::INVERSEKINEMATICS()
: Node("inverse_kinematics_node"){
    /* Initialise Variables and Parameters */
    init_parameters();
    init_variables();

    /* Initialise ROS Publisher and Subscriber */
    auto qos = rclcpp::QoS(rclcpp::KeepLast(10));
    speed_control_pub_ = this->create_publisher<ired_msgs::msg::MotorSpeed>(inverse_kinematics_topic_, qos);
    cmd_vel_sub_ = this->create_subscription<geometry_msgs::msg::TwistStamped>(cmd_vel_topic_, qos, \
        std::bind(&INVERSEKINEMATICS::fetchCommandVelocityCallback, this, std::placeholders::_1));

     /* Initialise ROS Timers*/
    update_timer_ = this->create_wall_timer(10ms, std::bind(&INVERSEKINEMATICS::update_calback, this));

    /* ROS Logger */
    RCLCPP_INFO(this->get_logger(), "Inverse : ROS publisher on %s [ired_msgs/MotorSpeed]", inverse_kinematics_topic_.c_str());
    RCLCPP_INFO(this->get_logger(), "Inverse : ROS subscriber on %s [geometry_msgs/TwistStamped]", cmd_vel_topic_.c_str());
}

INVERSEKINEMATICS::~INVERSEKINEMATICS(){
    RCLCPP_WARN(this->get_logger(), "Inverse : iRED inverse kinematics node has been terminated");
}

void INVERSEKINEMATICS::init_parameters(){
    /* Declare parameters */
    this->declare_parameter<std::string>("cmd_vel_topic");
    this->declare_parameter<std::string>("motor_control_topic");
    this->declare_parameter<double>("wheel_seperation");
    this->declare_parameter<double>("mps_to_rpm");

    /* ROS parameters */
    this->get_parameter_or<std::string>("cmd_vel_topic", cmd_vel_topic_, "/cmd_vel");
    this->get_parameter_or<std::string>("motor_control_topic", inverse_kinematics_topic_, "/ired/motor/speed_control");
    this->get_parameter_or<double>("wheel_seperation", wheel_seperation_, 0.199);
    this->get_parameter_or<double>("mps_to_rpm", mps_to_rpm_, 280.8616642798);
}

void INVERSEKINEMATICS::init_variables(){
    goal_linear_velocity_x_ = 0.0;
    goal_linear_velocity_y_ = 0.0;
    goal_angular_velocity_z_ = 0.0;
    wheel_speed_cmd_[FLEFT] = 0.0;
    wheel_speed_cmd_[FRIGHT] = 0.0;
    wheel_speed_cmd_[RLEFT] = 0.0;
    wheel_speed_cmd_[RRIGHT] = 0.0;
    motor_speed_.speed[FLEFT] = 0.0;
    motor_speed_.speed[FRIGHT] = 0.0;
    motor_speed_.speed[RLEFT] = 0.0;
    motor_speed_.speed[RRIGHT] = 0.0;

    last_time_cmd_vel_ = this->now();
}

void INVERSEKINEMATICS::update_calback(){
    rclcpp::Time time_now = this->now();

    if((time_now - last_time_cmd_vel_).nanoseconds() / 1e9 > 1.0){
        goal_linear_velocity_x_ = 0.0;
        goal_linear_velocity_y_ = 0.0;
        goal_angular_velocity_z_ = 0.0;
    }

    calculateInverseKinematics();
    speed_control_pub_->publish(motor_speed_);
}

void INVERSEKINEMATICS::fetchCommandVelocityCallback(const geometry_msgs::msg::TwistStamped::SharedPtr msg_){
    last_time_cmd_vel_ = this->now();

    goal_linear_velocity_x_ = msg_->twist.linear.x;
    goal_linear_velocity_y_ = msg_->twist.linear.y;
    goal_angular_velocity_z_ = msg_->twist.angular.z;
}

void INVERSEKINEMATICS::calculateInverseKinematics(){
    wheel_speed_cmd_[FLEFT]     = sin(DEG2RAD(-45.0)) * goal_linear_velocity_x_ + cos(DEG2RAD(-45.0)) * goal_linear_velocity_y_ + wheel_seperation_ * goal_angular_velocity_z_;
    wheel_speed_cmd_[FRIGHT]    = sin(DEG2RAD(45.0)) * goal_linear_velocity_x_ + cos(DEG2RAD(45.0)) * goal_linear_velocity_y_ + wheel_seperation_ * goal_angular_velocity_z_;
    wheel_speed_cmd_[RLEFT]     = sin(DEG2RAD(-135.0)) * goal_linear_velocity_x_ + cos(DEG2RAD(-135.0)) * goal_linear_velocity_y_ + wheel_seperation_ * goal_angular_velocity_z_;
    wheel_speed_cmd_[RRIGHT]    = sin(DEG2RAD(135.0)) * goal_linear_velocity_x_ + cos(DEG2RAD(135.0)) * goal_linear_velocity_y_ + wheel_seperation_ * goal_angular_velocity_z_;

    motor_speed_.speed[FLEFT]   = wheel_speed_cmd_[FLEFT] * mps_to_rpm_;
    motor_speed_.speed[FRIGHT]  = 1.0 * wheel_speed_cmd_[FRIGHT] * mps_to_rpm_;
    motor_speed_.speed[RLEFT]   = -1.0 * wheel_speed_cmd_[RLEFT] * mps_to_rpm_;
    motor_speed_.speed[RRIGHT]  = -1.0 * wheel_speed_cmd_[RRIGHT] * mps_to_rpm_;
}

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<INVERSEKINEMATICS>());
  rclcpp::shutdown();

  return 0;
}