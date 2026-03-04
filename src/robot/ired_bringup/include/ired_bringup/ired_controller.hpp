#ifndef IRED_CONTROLLER_HPP__
#define IRED_CONTROLLER_HPP__

#include <chrono>
#include <memory>
#include <string>
#include <vector>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "ired_msgs/msg/motor_data.hpp"
#include "ired_msgs/msg/motor_speed.hpp"
#include "ired_msgs/srv/pid_tuning.hpp"
#include "std_srvs/srv/empty.hpp"

#include "modbus_rtu.hpp"

using namespace std::chrono_literals;

class IRED_CONTROLLER : public rclcpp::Node{
    public:
        IRED_CONTROLLER();
        ~IRED_CONTROLLER();
    
    private:
        /* ROS Timmer */
        rclcpp::Time prev_update_time_;
        rclcpp::Time last_time_cmd_cel_;
        rclcpp::TimerBase::SharedPtr update_timer_;

        /* ROS Publishers and Subscriber */
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr imu_raw_pub_;
        rclcpp::Publisher<ired_msgs::msg::MotorData>::SharedPtr motor_data_pub_;
        rclcpp::Subscription<ired_msgs::msg::MotorSpeed>::SharedPtr motor_speed_sub_;

        /* ROS Service server */
        rclcpp::Service<std_srvs::srv::Empty>::SharedPtr imu_reset_srv_;
        rclcpp::Service<std_srvs::srv::Empty>::SharedPtr pid_reset_srv_;
        rclcpp::Service<ired_msgs::srv::PIDTuning>::SharedPtr pid_tuning_srv_;

        /* ROS Variables */
        geometry_msgs::msg::Twist imu_raw_msg_;
        ired_msgs::msg::MotorData motor_data_msg_;

        /* Variables */
        std::string imu_raw_topic_, motor_control_topic_, motor_data_topic_;
        std::string pid_tuning_motor_;
        std::vector<float> pid_data_, pid_tuning_value_, motor_speed_sp_, modbus_data_;
        bool imu_reset_check_ = false, pid_reset_check_ = false, pid_tuning_check_ = false, update_pid_data_check_;

        /* Modbus */
        ModbusRTU modbus;

        /* Functions */
        void init_parameters();
        void init_variables();
        void update_callback();
        void commandResetIMUCallback(const std::shared_ptr<std_srvs::srv::Empty::Request> request,
            std::shared_ptr<std_srvs::srv::Empty::Response> response);
        void commandPIDResetCallback(const std::shared_ptr<std_srvs::srv::Empty::Request> request,
            std::shared_ptr<std_srvs::srv::Empty::Response> response);
        void commandPIDTuningCallback(const std::shared_ptr<ired_msgs::srv::PIDTuning::Request> request,
            std::shared_ptr<ired_msgs::srv::PIDTuning::Response> response);
        void commandMotorSpeedCallback(const ired_msgs::msg::MotorSpeed::SharedPtr msg_);
        bool PIDMotorDataCheck(const std::string& cmd_motor_name, uint16_t& motor_addr);
};

#endif