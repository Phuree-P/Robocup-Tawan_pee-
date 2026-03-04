// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ired_msgs:msg/MotorSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ired_msgs/msg/motor_speed.hpp"


#ifndef IRED_MSGS__MSG__DETAIL__MOTOR_SPEED__BUILDER_HPP_
#define IRED_MSGS__MSG__DETAIL__MOTOR_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ired_msgs/msg/detail/motor_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ired_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorSpeed_speed
{
public:
  Init_MotorSpeed_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ired_msgs::msg::MotorSpeed speed(::ired_msgs::msg::MotorSpeed::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ired_msgs::msg::MotorSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ired_msgs::msg::MotorSpeed>()
{
  return ired_msgs::msg::builder::Init_MotorSpeed_speed();
}

}  // namespace ired_msgs

#endif  // IRED_MSGS__MSG__DETAIL__MOTOR_SPEED__BUILDER_HPP_
