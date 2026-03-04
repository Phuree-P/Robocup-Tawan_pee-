#ifndef ODOM_HPP__
#define ODOM_HPP__

#include <tf2/LinearMath/Quaternion.hpp>
#include <math.h>
#include <chrono>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist_stamped.hpp"
#include "ired_msgs/msg/imu_data.hpp"
#include "ired_msgs/msg/motor_data.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "tf2_msgs/msg/tf_message.hpp"

#define ROLL    0
#define PITCH   1
#define YAW     2
#define X       1
#define Y       2
#define Z       3
#define FLEFT       0
#define FRIGHT      1
#define RLEFT       2
#define RRIGHT      3

using namespace std::chrono_literals;

class ODOM : public rclcpp::Node{
    public:
        ODOM();
        ~ODOM();
    private:
        /* ROS Time */
        rclcpp::Time prev_update_time_;
        rclcpp::Time last_time_robot_speed_;
        rclcpp::Time last_time_imu_;
        rclcpp::Time last_time_motor_data_;
        rclcpp::TimerBase::SharedPtr update_timer_;

        /* ROS Publishers and Subscribers */
        rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_data_pub_;
        rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr joint_states_pub_;
        rclcpp::Publisher<tf2_msgs::msg::TFMessage>::SharedPtr tf_pub_;
        rclcpp::Subscription<ired_msgs::msg::MotorData>::SharedPtr motor_data_sub_;
        rclcpp::Subscription<ired_msgs::msg::IMUData>::SharedPtr rpy_sub_;
        rclcpp::Subscription<geometry_msgs::msg::TwistStamped>::SharedPtr robot_speed_sub_;

        /* ROS Variables */
        sensor_msgs::msg::JointState joint_states_;
        nav_msgs::msg::Odometry odom_data_;

        /* Variables */
        std::string odom_topic_, joint_state_topic_, motor_data_topic_, rpy_topic_, robot_speed_topic_;
        double linear_x_, linear_y_, angular_z_ = 0.0;
        double wheel_speed_cmd_[4] = {0.0, 0.0, 0.0, 0.0};
        double rpy_[3] = {0.0, 0.0, 0.0};
        double odom_pose_[3] = {0.0, 0.0, 0.0};
        double odom_vel_[3] = {0.0, 0.0, 0.0};
        double last_position_[4] = {0.0, 0.0, 0.0, 0.0};
        double last_velocity_[4] = {0.0, 0.0, 0.0, 0.0};
        bool odom_tf_publish_ = false;
        double rpm_to_mps_ = 0.0;
        double wheel_radius_ = 0.0;

         /* Functions */
        void init_parameters();
        void init_variables();
        void update_calback();
        void fetchMotorDataCallback(const ired_msgs::msg::MotorData::SharedPtr msg_);
        void fetchIMUCallback(const ired_msgs::msg::IMUData::SharedPtr msg_);
        void fetchRobotSpeedCallback(const geometry_msgs::msg::TwistStamped::SharedPtr msg_);
        void updateJoint(void);
        void updateOdometry(const rclcpp::Duration &diff_time);
        void updateTF(geometry_msgs::msg::TransformStamped &odom_tf);
};

#endif