// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ired_msgs:msg/MotorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ired_msgs/msg/motor_data.hpp"


#ifndef IRED_MSGS__MSG__DETAIL__MOTOR_DATA__BUILDER_HPP_
#define IRED_MSGS__MSG__DETAIL__MOTOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ired_msgs/msg/detail/motor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ired_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorData_pid_motor_rear_right
{
public:
  explicit Init_MotorData_pid_motor_rear_right(::ired_msgs::msg::MotorData & msg)
  : msg_(msg)
  {}
  ::ired_msgs::msg::MotorData pid_motor_rear_right(::ired_msgs::msg::MotorData::_pid_motor_rear_right_type arg)
  {
    msg_.pid_motor_rear_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ired_msgs::msg::MotorData msg_;
};

class Init_MotorData_pid_motor_rear_left
{
public:
  explicit Init_MotorData_pid_motor_rear_left(::ired_msgs::msg::MotorData & msg)
  : msg_(msg)
  {}
  Init_MotorData_pid_motor_rear_right pid_motor_rear_left(::ired_msgs::msg::MotorData::_pid_motor_rear_left_type arg)
  {
    msg_.pid_motor_rear_left = std::move(arg);
    return Init_MotorData_pid_motor_rear_right(msg_);
  }

private:
  ::ired_msgs::msg::MotorData msg_;
};

class Init_MotorData_pid_motor_front_right
{
public:
  explicit Init_MotorData_pid_motor_front_right(::ired_msgs::msg::MotorData & msg)
  : msg_(msg)
  {}
  Init_MotorData_pid_motor_rear_left pid_motor_front_right(::ired_msgs::msg::MotorData::_pid_motor_front_right_type arg)
  {
    msg_.pid_motor_front_right = std::move(arg);
    return Init_MotorData_pid_motor_rear_left(msg_);
  }

private:
  ::ired_msgs::msg::MotorData msg_;
};

class Init_MotorData_pid_motor_front_left
{
public:
  explicit Init_MotorData_pid_motor_front_left(::ired_msgs::msg::MotorData & msg)
  : msg_(msg)
  {}
  Init_MotorData_pid_motor_front_right pid_motor_front_left(::ired_msgs::msg::MotorData::_pid_motor_front_left_type arg)
  {
    msg_.pid_motor_front_left = std::move(arg);
    return Init_MotorData_pid_motor_front_right(msg_);
  }

private:
  ::ired_msgs::msg::MotorData msg_;
};

class Init_MotorData_speed_fb
{
public:
  explicit Init_MotorData_speed_fb(::ired_msgs::msg::MotorData & msg)
  : msg_(msg)
  {}
  Init_MotorData_pid_motor_front_left speed_fb(::ired_msgs::msg::MotorData::_speed_fb_type arg)
  {
    msg_.speed_fb = std::move(arg);
    return Init_MotorData_pid_motor_front_left(msg_);
  }

private:
  ::ired_msgs::msg::MotorData msg_;
};

class Init_MotorData_speed_sp
{
public:
  Init_MotorData_speed_sp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorData_speed_fb speed_sp(::ired_msgs::msg::MotorData::_speed_sp_type arg)
  {
    msg_.speed_sp = std::move(arg);
    return Init_MotorData_speed_fb(msg_);
  }

private:
  ::ired_msgs::msg::MotorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ired_msgs::msg::MotorData>()
{
  return ired_msgs::msg::builder::Init_MotorData_speed_sp();
}

}  // namespace ired_msgs

#endif  // IRED_MSGS__MSG__DETAIL__MOTOR_DATA__BUILDER_HPP_
