#ifndef FORWARD_KINEMATICS_HPP__
#define FORWARD_KINEMATICS_HPP__

#include <chrono>
#include <memory>
#include <string>
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist_stamped.hpp"
#include "ired_msgs/msg/motor_data.hpp"

#define FLEFT       0
#define FRIGHT      1
#define RLEFT       2
#define RRIGHT      3
#define DEG2RAD(x)  (x * 0.0174532925)

using namespace std::chrono_literals;

class FORWARDKINEMATICS : public rclcpp::Node{
    public:
        FORWARDKINEMATICS();
        ~FORWARDKINEMATICS();
    
    private:
        /* ROS Timers */
        rclcpp::Time last_time_speed_fb_;
        rclcpp::TimerBase::SharedPtr update_timer_;

        /* ROS Publisher and Subscriber */
        rclcpp::Publisher<geometry_msgs::msg::TwistStamped>::SharedPtr robot_speed_pub_;
        rclcpp::Subscription<ired_msgs::msg::MotorData>::SharedPtr speed_fb_sub_;

        /* ROS Variable */
        geometry_msgs::msg::TwistStamped robot_speed_;

        /* Variables */
        std::string motor_data_topic_, forward_kinematics_topic_;
        double rpm_to_mps_ = 0.0;
        double wheel_seperation_ = 0.0;
        double wheel_speed_fb_[4] = {0.0, 0.0, 0.0, 0.0};
        double cal_wheel_speed_fb_[4] = {0.0, 0.0, 0.0, 0.0};

        /* Functions */
        void init_parameters();
        void init_variables();
        void update_calback();
        void fetchMotorSpeedCallback(const ired_msgs::msg::MotorData::SharedPtr msg_);
        void calculateForwardKinematics();
};

#endif