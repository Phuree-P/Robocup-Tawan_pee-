// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ired_msgs:msg/MotorControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ired_msgs/msg/motor_control.hpp"


#ifndef IRED_MSGS__MSG__DETAIL__MOTOR_CONTROL__TRAITS_HPP_
#define IRED_MSGS__MSG__DETAIL__MOTOR_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ired_msgs/msg/detail/motor_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ired_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorControl & msg,
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
    out << ", ";
  }

  // member: pid_motor_front_left
  {
    if (msg.pid_motor_front_left.size() == 0) {
      out << "pid_motor_front_left: []";
    } else {
      out << "pid_motor_front_left: [";
      size_t pending_items = msg.pid_motor_front_left.size();
      for (auto item : msg.pid_motor_front_left) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pid_motor_front_right
  {
    if (msg.pid_motor_front_right.size() == 0) {
      out << "pid_motor_front_right: []";
    } else {
      out << "pid_motor_front_right: [";
      size_t pending_items = msg.pid_motor_front_right.size();
      for (auto item : msg.pid_motor_front_right) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pid_motor_rear_left
  {
    if (msg.pid_motor_rear_left.size() == 0) {
      out << "pid_motor_rear_left: []";
    } else {
      out << "pid_motor_rear_left: [";
      size_t pending_items = msg.pid_motor_rear_left.size();
      for (auto item : msg.pid_motor_rear_left) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pid_motor_rear_right
  {
    if (msg.pid_motor_rear_right.size() == 0) {
      out << "pid_motor_rear_right: []";
    } else {
      out << "pid_motor_rear_right: [";
      size_t pending_items = msg.pid_motor_rear_right.size();
      for (auto item : msg.pid_motor_rear_right) {
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
  const MotorControl & msg,
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

  // member: pid_motor_front_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pid_motor_front_left.size() == 0) {
      out << "pid_motor_front_left: []\n";
    } else {
      out << "pid_motor_front_left:\n";
      for (auto item : msg.pid_motor_front_left) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pid_motor_front_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pid_motor_front_right.size() == 0) {
      out << "pid_motor_front_right: []\n";
    } else {
      out << "pid_motor_front_right:\n";
      for (auto item : msg.pid_motor_front_right) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pid_motor_rear_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pid_motor_rear_left.size() == 0) {
      out << "pid_motor_rear_left: []\n";
    } else {
      out << "pid_motor_rear_left:\n";
      for (auto item : msg.pid_motor_rear_left) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pid_motor_rear_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pid_motor_rear_right.size() == 0) {
      out << "pid_motor_rear_right: []\n";
    } else {
      out << "pid_motor_rear_right:\n";
      for (auto item : msg.pid_motor_rear_right) {
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

inline std::string to_yaml(const MotorControl & msg, bool use_flow_style = false)
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
  const ired_msgs::msg::MotorControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  ired_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ired_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ired_msgs::msg::MotorControl & msg)
{
  return ired_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ired_msgs::msg::MotorControl>()
{
  return "ired_msgs::msg::MotorControl";
}

template<>
inline const char * name<ired_msgs::msg::MotorControl>()
{
  return "ired_msgs/msg/MotorControl";
}

template<>
struct has_fixed_size<ired_msgs::msg::MotorControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ired_msgs::msg::MotorControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ired_msgs::msg::MotorControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRED_MSGS__MSG__DETAIL__MOTOR_CONTROL__TRAITS_HPP_
