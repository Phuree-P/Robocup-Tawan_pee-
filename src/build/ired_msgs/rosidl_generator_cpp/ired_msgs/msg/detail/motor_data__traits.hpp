// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ired_msgs:msg/MotorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ired_msgs/msg/motor_data.hpp"


#ifndef IRED_MSGS__MSG__DETAIL__MOTOR_DATA__TRAITS_HPP_
#define IRED_MSGS__MSG__DETAIL__MOTOR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ired_msgs/msg/detail/motor_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ired_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorData & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed_sp
  {
    if (msg.speed_sp.size() == 0) {
      out << "speed_sp: []";
    } else {
      out << "speed_sp: [";
      size_t pending_items = msg.speed_sp.size();
      for (auto item : msg.speed_sp) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: speed_fb
  {
    if (msg.speed_fb.size() == 0) {
      out << "speed_fb: []";
    } else {
      out << "speed_fb: [";
      size_t pending_items = msg.speed_fb.size();
      for (auto item : msg.speed_fb) {
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
  const MotorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed_sp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speed_sp.size() == 0) {
      out << "speed_sp: []\n";
    } else {
      out << "speed_sp:\n";
      for (auto item : msg.speed_sp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: speed_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speed_fb.size() == 0) {
      out << "speed_fb: []\n";
    } else {
      out << "speed_fb:\n";
      for (auto item : msg.speed_fb) {
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

inline std::string to_yaml(const MotorData & msg, bool use_flow_style = false)
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
  const ired_msgs::msg::MotorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  ired_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ired_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ired_msgs::msg::MotorData & msg)
{
  return ired_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ired_msgs::msg::MotorData>()
{
  return "ired_msgs::msg::MotorData";
}

template<>
inline const char * name<ired_msgs::msg::MotorData>()
{
  return "ired_msgs/msg/MotorData";
}

template<>
struct has_fixed_size<ired_msgs::msg::MotorData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ired_msgs::msg::MotorData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ired_msgs::msg::MotorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRED_MSGS__MSG__DETAIL__MOTOR_DATA__TRAITS_HPP_
