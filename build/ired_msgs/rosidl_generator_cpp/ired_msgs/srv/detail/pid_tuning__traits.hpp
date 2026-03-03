// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ired_msgs:srv/PIDTuning.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ired_msgs/srv/pid_tuning.hpp"


#ifndef IRED_MSGS__SRV__DETAIL__PID_TUNING__TRAITS_HPP_
#define IRED_MSGS__SRV__DETAIL__PID_TUNING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ired_msgs/srv/detail/pid_tuning__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ired_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PIDTuning_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor
  {
    out << "motor: ";
    rosidl_generator_traits::value_to_yaml(msg.motor, out);
    out << ", ";
  }

  // member: kp
  {
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << ", ";
  }

  // member: ki
  {
    out << "ki: ";
    rosidl_generator_traits::value_to_yaml(msg.ki, out);
    out << ", ";
  }

  // member: kd
  {
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PIDTuning_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor: ";
    rosidl_generator_traits::value_to_yaml(msg.motor, out);
    out << "\n";
  }

  // member: kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << "\n";
  }

  // member: ki
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ki: ";
    rosidl_generator_traits::value_to_yaml(msg.ki, out);
    out << "\n";
  }

  // member: kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PIDTuning_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ired_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ired_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ired_msgs::srv::PIDTuning_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ired_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ired_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ired_msgs::srv::PIDTuning_Request & msg)
{
  return ired_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ired_msgs::srv::PIDTuning_Request>()
{
  return "ired_msgs::srv::PIDTuning_Request";
}

template<>
inline const char * name<ired_msgs::srv::PIDTuning_Request>()
{
  return "ired_msgs/srv/PIDTuning_Request";
}

template<>
struct has_fixed_size<ired_msgs::srv::PIDTuning_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ired_msgs::srv::PIDTuning_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ired_msgs::srv::PIDTuning_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ired_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PIDTuning_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PIDTuning_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PIDTuning_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ired_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ired_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ired_msgs::srv::PIDTuning_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ired_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ired_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ired_msgs::srv::PIDTuning_Response & msg)
{
  return ired_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ired_msgs::srv::PIDTuning_Response>()
{
  return "ired_msgs::srv::PIDTuning_Response";
}

template<>
inline const char * name<ired_msgs::srv::PIDTuning_Response>()
{
  return "ired_msgs/srv/PIDTuning_Response";
}

template<>
struct has_fixed_size<ired_msgs::srv::PIDTuning_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ired_msgs::srv::PIDTuning_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ired_msgs::srv::PIDTuning_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace ired_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PIDTuning_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
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
  const PIDTuning_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PIDTuning_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ired_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ired_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ired_msgs::srv::PIDTuning_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ired_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ired_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ired_msgs::srv::PIDTuning_Event & msg)
{
  return ired_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ired_msgs::srv::PIDTuning_Event>()
{
  return "ired_msgs::srv::PIDTuning_Event";
}

template<>
inline const char * name<ired_msgs::srv::PIDTuning_Event>()
{
  return "ired_msgs/srv/PIDTuning_Event";
}

template<>
struct has_fixed_size<ired_msgs::srv::PIDTuning_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ired_msgs::srv::PIDTuning_Event>
  : std::integral_constant<bool, has_bounded_size<ired_msgs::srv::PIDTuning_Request>::value && has_bounded_size<ired_msgs::srv::PIDTuning_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<ired_msgs::srv::PIDTuning_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ired_msgs::srv::PIDTuning>()
{
  return "ired_msgs::srv::PIDTuning";
}

template<>
inline const char * name<ired_msgs::srv::PIDTuning>()
{
  return "ired_msgs/srv/PIDTuning";
}

template<>
struct has_fixed_size<ired_msgs::srv::PIDTuning>
  : std::integral_constant<
    bool,
    has_fixed_size<ired_msgs::srv::PIDTuning_Request>::value &&
    has_fixed_size<ired_msgs::srv::PIDTuning_Response>::value
  >
{
};

template<>
struct has_bounded_size<ired_msgs::srv::PIDTuning>
  : std::integral_constant<
    bool,
    has_bounded_size<ired_msgs::srv::PIDTuning_Request>::value &&
    has_bounded_size<ired_msgs::srv::PIDTuning_Response>::value
  >
{
};

template<>
struct is_service<ired_msgs::srv::PIDTuning>
  : std::true_type
{
};

template<>
struct is_service_request<ired_msgs::srv::PIDTuning_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ired_msgs::srv::PIDTuning_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IRED_MSGS__SRV__DETAIL__PID_TUNING__TRAITS_HPP_
