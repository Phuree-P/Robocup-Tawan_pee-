// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ired_msgs:msg/MotorSpeed.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ired_msgs/msg/detail/motor_speed__functions.h"
#include "ired_msgs/msg/detail/motor_speed__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ired_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotorSpeed_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ired_msgs::msg::MotorSpeed(_init);
}

void MotorSpeed_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ired_msgs::msg::MotorSpeed *>(message_memory);
  typed_message->~MotorSpeed();
}

size_t size_function__MotorSpeed__speed(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__MotorSpeed__speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorSpeed__speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorSpeed__speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MotorSpeed__speed(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MotorSpeed__speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MotorSpeed__speed(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorSpeed_message_member_array[1] = {
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(ired_msgs::msg::MotorSpeed, speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorSpeed__speed,  // size() function pointer
    get_const_function__MotorSpeed__speed,  // get_const(index) function pointer
    get_function__MotorSpeed__speed,  // get(index) function pointer
    fetch_function__MotorSpeed__speed,  // fetch(index, &value) function pointer
    assign_function__MotorSpeed__speed,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorSpeed_message_members = {
  "ired_msgs::msg",  // message namespace
  "MotorSpeed",  // message name
  1,  // number of fields
  sizeof(ired_msgs::msg::MotorSpeed),
  false,  // has_any_key_member_
  MotorSpeed_message_member_array,  // message members
  MotorSpeed_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorSpeed_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorSpeed_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorSpeed_message_members,
  get_message_typesupport_handle_function,
  &ired_msgs__msg__MotorSpeed__get_type_hash,
  &ired_msgs__msg__MotorSpeed__get_type_description,
  &ired_msgs__msg__MotorSpeed__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ired_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ired_msgs::msg::MotorSpeed>()
{
  return &::ired_msgs::msg::rosidl_typesupport_introspection_cpp::MotorSpeed_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ired_msgs, msg, MotorSpeed)() {
  return &::ired_msgs::msg::rosidl_typesupport_introspection_cpp::MotorSpeed_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
