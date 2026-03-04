// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ired_msgs:msg/IMUData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ired_msgs/msg/detail/imu_data__functions.h"
#include "ired_msgs/msg/detail/imu_data__struct.hpp"
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

void IMUData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ired_msgs::msg::IMUData(_init);
}

void IMUData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ired_msgs::msg::IMUData *>(message_memory);
  typed_message->~IMUData();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IMUData_message_member_array[3] = {
  {
    "roll",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ired_msgs::msg::IMUData, roll),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pitch",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ired_msgs::msg::IMUData, pitch),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ired_msgs::msg::IMUData, yaw),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IMUData_message_members = {
  "ired_msgs::msg",  // message namespace
  "IMUData",  // message name
  3,  // number of fields
  sizeof(ired_msgs::msg::IMUData),
  false,  // has_any_key_member_
  IMUData_message_member_array,  // message members
  IMUData_init_function,  // function to initialize message memory (memory has to be allocated)
  IMUData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IMUData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IMUData_message_members,
  get_message_typesupport_handle_function,
  &ired_msgs__msg__IMUData__get_type_hash,
  &ired_msgs__msg__IMUData__get_type_description,
  &ired_msgs__msg__IMUData__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ired_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ired_msgs::msg::IMUData>()
{
  return &::ired_msgs::msg::rosidl_typesupport_introspection_cpp::IMUData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ired_msgs, msg, IMUData)() {
  return &::ired_msgs::msg::rosidl_typesupport_introspection_cpp::IMUData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
