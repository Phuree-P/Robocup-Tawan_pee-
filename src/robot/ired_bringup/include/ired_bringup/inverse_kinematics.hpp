#ifndef INVERSE_KINEMATICS_HPP__
#define INVERSE_KINEMATICS_HPP__

#include <chrono>
#include <memory>
#include <string>
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist_stamped.hpp"
#include "ired_msgs/msg/motor_speed.hpp"

#define FLEFT       0
#define FRIGHT      1
#define RLEFT       2
#define RRIGHT      3
#define DEG2RAD(x)  (x * 0.0174532925)

using namespace std::chrono_literals;

class INVERSEKINEMATICS : public rclcpp::Node{
    public:
        INVERSEKINEMATICS();
        ~INVERSEKINEMATICS();

    private:
        /* ROS Timers */
        rclcpp::Time last_time_cmd_vel_;
        rclcpp::TimerBase::SharedPtr update_timer_;

        /* ROS Publisher and Subscriber */
        rclcpp::Publisher<ired_msgs::msg::MotorSpeed>::SharedPtr speed_control_pub_;
        rclcpp::Subscription<geometry_msgs::msg::TwistStamped>::SharedPtr cmd_vel_sub_;

        /* ROS Variable */
        ired_msgs::msg::MotorSpeed motor_speed_;

        /* Variable */
        std::string cmd_vel_topic_, inverse_kinematics_topic_;
        double mps_to_rpm_ = 0.0;
        double wheel_seperation_ = 0.0;
        double goal_linear_velocity_x_, goal_linear_velocity_y_, goal_angular_velocity_z_ = 0.0;
        double wheel_speed_cmd_[4] = {0.0, 0.0, 0.0, 0.0};

        /* Function */
        void init_parameters();
        void init_variables();
        void update_calback();
        void fetchCommandVelocityCallback(const geometry_msgs::msg::TwistStamped::SharedPtr msg_);
        void calculateInverseKinematics();
};

#endif