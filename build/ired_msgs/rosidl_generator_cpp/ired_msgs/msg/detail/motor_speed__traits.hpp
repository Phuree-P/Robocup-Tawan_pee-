// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ired_msgs:msg/MotorSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ired_msgs/msg/motor_speed.hpp"


#ifndef IRED_MSGS__MSG__DETAIL__MOTOR_SPEED__TRAITS_HPP_
#define IRED_MSGS__MSG__DETAIL__MOTOR_SPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ired_msgs/msg/detail/motor_speed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ired_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorSpeed & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed
  {
    if (msg.speed.size() == 0) {
      out << "speed: []";
    } else {
      out << "speed: [";
      size_t pending_items = msg.speed.size();
      for (auto item : msg.speed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speed.size() == 0) {
      out << "speed: []\n";
    } else {
      out << "speed:\n";
      for (auto item : msg.speed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorSpeed & msg, bool use_flow_style = false)
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
  const ired_msgs::msg::MotorSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  ired_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ired_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ired_msgs::msg::MotorSpeed & msg)
{
  return ired_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ired_msgs::msg::MotorSpeed>()
{
  return "ired_msgs::msg::MotorSpeed";
}

template<>
inline const char * name<ired_msgs::msg::MotorSpeed>()
{
  return "ired_msgs/msg/MotorSpeed";
}

template<>
struct has_fixed_size<ired_msgs::msg::MotorSpeed>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ired_msgs::msg::MotorSpeed>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ired_msgs::msg::MotorSpeed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRED_MSGS__MSG__DETAIL__MOTOR_SPEED__TRAITS_HPP_
