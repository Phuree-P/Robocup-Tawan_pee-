// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ired_msgs:msg/MotorControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ired_msgs/msg/motor_control.hpp"


#ifndef IRED_MSGS__MSG__DETAIL__MOTOR_CONTROL__BUILDER_HPP_
#define IRED_MSGS__MSG__DETAIL__MOTOR_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ired_msgs/msg/detail/motor_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ired_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorControl_pid_motor_rear_right
{
public:
  explicit Init_MotorControl_pid_motor_rear_right(::ired_msgs::msg::MotorControl & msg)
  : msg_(msg)
  {}
  ::ired_msgs::msg::MotorControl pid_motor_rear_right(::ired_msgs::msg::MotorControl::_pid_motor_rear_right_type arg)
  {
    msg_.pid_motor_rear_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ired_msgs::msg::MotorControl msg_;
};

class Init_MotorControl_pid_motor_rear_left
{
public:
  explicit Init_MotorControl_pid_motor_rear_left(::ired_msgs::msg::MotorControl & msg)
  : msg_(msg)
  {}
  Init_MotorControl_pid_motor_rear_right pid_motor_rear_left(::ired_msgs::msg::MotorControl::_pid_motor_rear_left_type arg)
  {
    msg_.pid_motor_rear_left = std::move(arg);
    return Init_MotorControl_pid_motor_rear_right(msg_);
  }

private:
  ::ired_msgs::msg::MotorControl msg_;
};

class Init_MotorControl_pid_motor_front_right
{
public:
  explicit Init_MotorControl_pid_motor_front_right(::ired_msgs::msg::MotorControl & msg)
  : msg_(msg)
  {}
  Init_MotorControl_pid_motor_rear_left pid_motor_front_right(::ired_msgs::msg::MotorControl::_pid_motor_front_right_type arg)
  {
    msg_.pid_motor_front_right = std::move(arg);
    return Init_MotorControl_pid_motor_rear_left(msg_);
  }

private:
  ::ired_msgs::msg::MotorControl msg_;
};

class Init_MotorControl_pid_motor_front_left
{
public:
  explicit Init_MotorControl_pid_motor_front_left(::ired_msgs::msg::MotorControl & msg)
  : msg_(msg)
  {}
  Init_MotorControl_pid_motor_front_right pid_motor_front_left(::ired_msgs::msg::MotorControl::_pid_motor_front_left_type arg)
  {
    msg_.pid_motor_front_left = std::move(arg);
    return Init_MotorControl_pid_motor_front_right(msg_);
  }

private:
  ::ired_msgs::msg::MotorControl msg_;
};

class Init_MotorControl_speed
{
public:
  Init_MotorControl_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorControl_pid_motor_front_left speed(::ired_msgs::msg::MotorControl::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MotorControl_pid_motor_front_left(msg_);
  }

private:
  ::ired_msgs::msg::MotorControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ired_msgs::msg::MotorControl>()
{
  return ired_msgs::msg::builder::Init_MotorControl_speed();
}

}  // namespace ired_msgs

#endif  // IRED_MSGS__MSG__DETAIL__MOTOR_CONTROL__BUILDER_HPP_
