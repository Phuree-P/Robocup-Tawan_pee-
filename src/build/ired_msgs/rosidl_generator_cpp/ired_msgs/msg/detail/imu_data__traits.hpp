// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ired_msgs:msg/IMUData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ired_msgs/msg/imu_data.hpp"


#ifndef IRED_MSGS__MSG__DETAIL__IMU_DATA__TRAITS_HPP_
#define IRED_MSGS__MSG__DETAIL__IMU_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ired_msgs/msg/detail/imu_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ired_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IMUData & msg,
  std::ostream & out)
{
  out << "{";
  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IMUData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IMUData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ired_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ired_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ired_msgs::msg::IMUData & msg,
  std::ostream & out, size_t indentation = 0)
{
  ired_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ired_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ired_msgs::msg::IMUData & msg)
{
  return ired_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ired_msgs::msg::IMUData>()
{
  return "ired_msgs::msg::IMUData";
}

template<>
inline const char * name<ired_msgs::msg::IMUData>()
{
  return "ired_msgs/msg/IMUData";
}

template<>
struct has_fixed_size<ired_msgs::msg::IMUData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ired_msgs::msg::IMUData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ired_msgs::msg::IMUData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRED_MSGS__MSG__DETAIL__IMU_DATA__TRAITS_HPP_
