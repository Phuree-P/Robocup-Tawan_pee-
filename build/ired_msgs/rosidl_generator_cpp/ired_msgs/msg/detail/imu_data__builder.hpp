// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ired_msgs:msg/IMUData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ired_msgs/msg/imu_data.hpp"


#ifndef IRED_MSGS__MSG__DETAIL__IMU_DATA__BUILDER_HPP_
#define IRED_MSGS__MSG__DETAIL__IMU_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ired_msgs/msg/detail/imu_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ired_msgs
{

namespace msg
{

namespace builder
{

class Init_IMUData_yaw
{
public:
  explicit Init_IMUData_yaw(::ired_msgs::msg::IMUData & msg)
  : msg_(msg)
  {}
  ::ired_msgs::msg::IMUData yaw(::ired_msgs::msg::IMUData::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ired_msgs::msg::IMUData msg_;
};

class Init_IMUData_pitch
{
public:
  explicit Init_IMUData_pitch(::ired_msgs::msg::IMUData & msg)
  : msg_(msg)
  {}
  Init_IMUData_yaw pitch(::ired_msgs::msg::IMUData::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_IMUData_yaw(msg_);
  }

private:
  ::ired_msgs::msg::IMUData msg_;
};

class Init_IMUData_roll
{
public:
  Init_IMUData_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMUData_pitch roll(::ired_msgs::msg::IMUData::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_IMUData_pitch(msg_);
  }

private:
  ::ired_msgs::msg::IMUData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ired_msgs::msg::IMUData>()
{
  return ired_msgs::msg::builder::Init_IMUData_roll();
}

}  // namespace ired_msgs

#endif  // IRED_MSGS__MSG__DETAIL__IMU_DATA__BUILDER_HPP_
