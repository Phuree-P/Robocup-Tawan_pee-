#ifndef IMU_H__
#define IMU_H__

#include <chrono>
#include <memory>
#include <string>
#include <tf2/LinearMath/Quaternion.hpp>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "ired_msgs/msg/imu_data.hpp"
#include "sensor_msgs/msg/imu.hpp"

#define X           0
#define Y           1
#define Z           2
#define W           3
#define ROLL        0
#define PITCH       1
#define YAW         2
#define DEG2RAD(x)  (x*0.01745329252)

using namespace std::chrono_literals;

class IMU : public rclcpp::Node{
    public:
        IMU();
        ~IMU();
    private:
        /* ROS Timers */
        rclcpp::Time prev_update_time_;
        rclcpp::Time last_time_imu_;
        rclcpp::TimerBase::SharedPtr update_timer_;

        /* ROS Publishers and Subscriber */
        rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr imu_data_pub_;
        rclcpp::Publisher<ired_msgs::msg::IMUData>::SharedPtr rpy_pub_;
        rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr imu_raw_sub_;

        /* ROS Variable */
        sensor_msgs::msg::Imu imu_data_;
        ired_msgs::msg::IMUData rpy_data_;

        /* Variables */
        std::string imu_raw_topic_, imu_data_topic_, rpy_topic_;
        double angular_velocity_[3] = {0.0, 0.0, 0.0};
        double linear_acceleration_[3] = {0.0, 0.0, 0.0};
        double rpy_[3] = {0.0, 0.0, 0.0};

        /* Functions */
        void init_parameters();
        void init_variables();
        void update_calback();
        void fetchIMUCallback(const geometry_msgs::msg::Twist::SharedPtr msg_);
        void calculateIMU();
        void calculateRPY(const rclcpp::Duration &diff_time);
};

#endif