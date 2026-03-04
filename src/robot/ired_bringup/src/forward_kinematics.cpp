#include "ired_bringup/forward_kinematics.hpp"

FORWARDKINEMATICS::FORWARDKINEMATICS()
: Node("forward_kinematics_node"){
    /* Initialise Variables and Parameters */
    init_parameters();
    init_variables();

    /* Initialise ROS Publisher and Subscriber */
    auto qos = rclcpp::QoS(rclcpp::KeepLast(10));
    robot_speed_pub_ = this->create_publisher<geometry_msgs::msg::TwistStamped>(forward_kinematics_topic_, qos);
    speed_fb_sub_ = this->create_subscription<ired_msgs::msg::MotorData>(motor_data_topic_, qos, \
        std::bind(&FORWARDKINEMATICS::fetchMotorSpeedCallback, this, std::placeholders::_1));

    /* Initialise ROS Timers*/
    update_timer_ = this->create_wall_timer(10ms, std::bind(&FORWARDKINEMATICS::update_calback, this));

    /* ROS Logger */
    RCLCPP_INFO(this->get_logger(), "Forward : ROS publisher on %s [geometry_msgs/msg/TwistStamped]", forward_kinematics_topic_.c_str());
    RCLCPP_INFO(this->get_logger(), "Forward : ROS subscriber on %s [ired_msgs/MotorData]", motor_data_topic_.c_str());
}

FORWARDKINEMATICS::~FORWARDKINEMATICS(){
    RCLCPP_WARN(this->get_logger(), "Forward : iRED forward kinematics node has been terminated");
}

void FORWARDKINEMATICS::init_parameters(){
    /* Declare parameters */
    this->declare_parameter<std::string>("motor_data_topic");
    this->declare_parameter<std::string>("robot_speed_topic");
    this->declare_parameter<double>("wheel_seperation");
    this->declare_parameter<double>("rpm_to_mps");

    /* ROS parameters */
    this->get_parameter_or<std::string>("motor_data_topic", motor_data_topic_, "/ired/motor/data");
    this->get_parameter_or<std::string>("robot_speed_topic", forward_kinematics_topic_, "/ired/speed");
    this->get_parameter_or<double>("wheel_seperation", wheel_seperation_, 0.199); 
    this->get_parameter_or<double>("rpm_to_mps", rpm_to_mps_, 0.003560471674);
}

void FORWARDKINEMATICS::init_variables(){
    wheel_speed_fb_[FLEFT] = 0.0;
    wheel_speed_fb_[FRIGHT] = 0.0;
    wheel_speed_fb_[RLEFT] = 0.0;
    wheel_speed_fb_[RRIGHT] = 0.0;
    cal_wheel_speed_fb_[FLEFT] = 0.0;
    cal_wheel_speed_fb_[FRIGHT] = 0.0;
    cal_wheel_speed_fb_[RLEFT] = 0.0;
    cal_wheel_speed_fb_[RRIGHT] = 0.0;
    robot_speed_.header.frame_id = "base_link";
    robot_speed_.twist.linear.x = 0.0;
    robot_speed_.twist.linear.y = 0.0;
    robot_speed_.twist.linear.z = 0.0;
    robot_speed_.twist.angular.x = 0.0;
    robot_speed_.twist.angular.y = 0.0;
    robot_speed_.twist.angular.z = 0.0;

    last_time_speed_fb_ = this->now();
}

void FORWARDKINEMATICS::fetchMotorSpeedCallback(const ired_msgs::msg::MotorData::SharedPtr msg_){
    last_time_speed_fb_ = this->now();

    wheel_speed_fb_[FLEFT]  = (double)msg_->speed_fb[FLEFT];
    wheel_speed_fb_[FRIGHT] = (double)msg_->speed_fb[FRIGHT];
    wheel_speed_fb_[RLEFT]  = (double)msg_->speed_fb[RLEFT];
    wheel_speed_fb_[RRIGHT] = (double)msg_->speed_fb[RRIGHT];
}

void FORWARDKINEMATICS::calculateForwardKinematics(){
    cal_wheel_speed_fb_[FLEFT]  = wheel_speed_fb_[FLEFT] * rpm_to_mps_;
    cal_wheel_speed_fb_[FRIGHT] = -1.0 * wheel_speed_fb_[FRIGHT] * rpm_to_mps_;
    cal_wheel_speed_fb_[RLEFT]  = wheel_speed_fb_[RLEFT] * rpm_to_mps_;
    cal_wheel_speed_fb_[RRIGHT] = -1.0 * wheel_speed_fb_[RRIGHT] * rpm_to_mps_;

    robot_speed_.twist.linear.x = ( cal_wheel_speed_fb_[FLEFT] * sin(DEG2RAD(-45.0)) + cal_wheel_speed_fb_[FRIGHT] * sin(DEG2RAD(45.0)) +
                                    cal_wheel_speed_fb_[RLEFT] * sin(DEG2RAD(-135.0)) + cal_wheel_speed_fb_[RRIGHT] * sin(DEG2RAD(135.0))) / 2.0;
    robot_speed_.twist.linear.y = ( cal_wheel_speed_fb_[FLEFT] * cos(DEG2RAD(-45.0)) + cal_wheel_speed_fb_[FRIGHT] * cos(DEG2RAD(45.0)) +
                                    cal_wheel_speed_fb_[RLEFT] * cos(DEG2RAD(-135.0)) + cal_wheel_speed_fb_[RRIGHT] * cos(DEG2RAD(135.0))) / 2.0;
    robot_speed_.twist.linear.z = 0.0;
    robot_speed_.twist.angular.x = 0.0;
    robot_speed_.twist.angular.y = 0.0;
    robot_speed_.twist.angular.z = (cal_wheel_speed_fb_[FLEFT] + cal_wheel_speed_fb_[FRIGHT] + cal_wheel_speed_fb_[RLEFT] +
                                    cal_wheel_speed_fb_[RRIGHT]) / (4 * wheel_seperation_);
}

void FORWARDKINEMATICS::update_calback(){
    rclcpp::Time time_now = this->now();

    if((time_now - last_time_speed_fb_).nanoseconds() / 1e9 > 1.0){
        wheel_speed_fb_[FLEFT] = 0.0;
        wheel_speed_fb_[FRIGHT] = 0.0;
        wheel_speed_fb_[RLEFT] = 0.0;
        wheel_speed_fb_[RRIGHT] = 0.0;
    }

    
    calculateForwardKinematics();
    robot_speed_.header.stamp = time_now;
    robot_speed_pub_->publish(robot_speed_);
}

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<FORWARDKINEMATICS>());
  rclcpp::shutdown();

  return 0;
}