// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ired_msgs:srv/PIDTuning.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ired_msgs/srv/pid_tuning.hpp"


#ifndef IRED_MSGS__SRV__DETAIL__PID_TUNING__BUILDER_HPP_
#define IRED_MSGS__SRV__DETAIL__PID_TUNING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ired_msgs/srv/detail/pid_tuning__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ired_msgs
{

namespace srv
{

namespace builder
{

class Init_PIDTuning_Request_kd
{
public:
  explicit Init_PIDTuning_Request_kd(::ired_msgs::srv::PIDTuning_Request & msg)
  : msg_(msg)
  {}
  ::ired_msgs::srv::PIDTuning_Request kd(::ired_msgs::srv::PIDTuning_Request::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ired_msgs::srv::PIDTuning_Request msg_;
};

class Init_PIDTuning_Request_ki
{
public:
  explicit Init_PIDTuning_Request_ki(::ired_msgs::srv::PIDTuning_Request & msg)
  : msg_(msg)
  {}
  Init_PIDTuning_Request_kd ki(::ired_msgs::srv::PIDTuning_Request::_ki_type arg)
  {
    msg_.ki = std::move(arg);
    return Init_PIDTuning_Request_kd(msg_);
  }

private:
  ::ired_msgs::srv::PIDTuning_Request msg_;
};

class Init_PIDTuning_Request_kp
{
public:
  explicit Init_PIDTuning_Request_kp(::ired_msgs::srv::PIDTuning_Request & msg)
  : msg_(msg)
  {}
  Init_PIDTuning_Request_ki kp(::ired_msgs::srv::PIDTuning_Request::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_PIDTuning_Request_ki(msg_);
  }

private:
  ::ired_msgs::srv::PIDTuning_Request msg_;
};

class Init_PIDTuning_Request_motor
{
public:
  Init_PIDTuning_Request_motor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PIDTuning_Request_kp motor(::ired_msgs::srv::PIDTuning_Request::_motor_type arg)
  {
    msg_.motor = std::move(arg);
    return Init_PIDTuning_Request_kp(msg_);
  }

private:
  ::ired_msgs::srv::PIDTuning_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ired_msgs::srv::PIDTuning_Request>()
{
  return ired_msgs::srv::builder::Init_PIDTuning_Request_motor();
}

}  // namespace ired_msgs


namespace ired_msgs
{

namespace srv
{

namespace builder
{

class Init_PIDTuning_Response_status
{
public:
  Init_PIDTuning_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ired_msgs::srv::PIDTuning_Response status(::ired_msgs::srv::PIDTuning_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ired_msgs::srv::PIDTuning_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ired_msgs::srv::PIDTuning_Response>()
{
  return ired_msgs::srv::builder::Init_PIDTuning_Response_status();
}

}  // namespace ired_msgs


namespace ired_msgs
{

namespace srv
{

namespace builder
{

class Init_PIDTuning_Event_response
{
public:
  explicit Init_PIDTuning_Event_response(::ired_msgs::srv::PIDTuning_Event & msg)
  : msg_(msg)
  {}
  ::ired_msgs::srv::PIDTuning_Event response(::ired_msgs::srv::PIDTuning_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ired_msgs::srv::PIDTuning_Event msg_;
};

class Init_PIDTuning_Event_request
{
public:
  explicit Init_PIDTuning_Event_request(::ired_msgs::srv::PIDTuning_Event & msg)
  : msg_(msg)
  {}
  Init_PIDTuning_Event_response request(::ired_msgs::srv::PIDTuning_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PIDTuning_Event_response(msg_);
  }

private:
  ::ired_msgs::srv::PIDTuning_Event msg_;
};

class Init_PIDTuning_Event_info
{
public:
  Init_PIDTuning_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PIDTuning_Event_request info(::ired_msgs::srv::PIDTuning_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PIDTuning_Event_request(msg_);
  }

private:
  ::ired_msgs::srv::PIDTuning_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ired_msgs::srv::PIDTuning_Event>()
{
  return ired_msgs::srv::builder::Init_PIDTuning_Event_info();
}

}  // namespace ired_msgs

#endif  // IRED_MSGS__SRV__DETAIL__PID_TUNING__BUILDER_HPP_
