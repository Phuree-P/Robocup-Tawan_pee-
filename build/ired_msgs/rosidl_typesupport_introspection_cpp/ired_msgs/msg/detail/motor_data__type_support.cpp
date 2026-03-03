// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ired_msgs:msg/MotorData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ired_msgs/msg/detail/motor_data__functions.h"
#include "ired_msgs/msg/detail/motor_data__struct.hpp"
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

void MotorData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ired_msgs::msg::MotorData(_init);
}

void MotorData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ired_msgs::msg::MotorData *>(message_memory);
  typed_message->~MotorData();
}

size_t size_function__MotorData__speed_sp(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__MotorData__speed_sp(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorData__speed_sp(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorData__speed_sp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MotorData__speed_sp(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MotorData__speed_sp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MotorData__speed_sp(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MotorData__speed_fb(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__MotorData__speed_fb(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorData__speed_fb(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorData__speed_fb(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MotorData__speed_fb(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MotorData__speed_fb(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MotorData__speed_fb(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MotorData__pid_motor_front_left(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MotorData__pid_motor_front_left(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorData__pid_motor_front_left(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorData__pid_motor_front_left(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MotorData__pid_motor_front_left(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MotorData__pid_motor_front_left(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MotorData__pid_motor_front_left(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MotorData__pid_motor_front_right(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MotorData__pid_motor_front_right(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorData__pid_motor_front_right(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorData__pid_motor_front_right(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MotorData__pid_motor_front_right(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MotorData__pid_motor_front_right(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MotorData__pid_motor_front_right(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MotorData__pid_motor_rear_left(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MotorData__pid_motor_rear_left(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorData__pid_motor_rear_left(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorData__pid_motor_rear_left(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MotorData__pid_motor_rear_left(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MotorData__pid_motor_rear_left(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MotorData__pid_motor_rear_left(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MotorData__pid_motor_rear_right(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MotorData__pid_motor_rear_right(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorData__pid_motor_rear_right(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorData__pid_motor_rear_right(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MotorData__pid_motor_rear_right(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MotorData__pid_motor_rear_right(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MotorData__pid_motor_rear_right(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorData_message_member_array[6] = {
  {
    "speed_sp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(ired_msgs::msg::MotorData, speed_sp),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorData__speed_sp,  // size() function pointer
    get_const_function__MotorData__speed_sp,  // get_const(index) function pointer
    get_function__MotorData__speed_sp,  // get(index) function pointer
    fetch_function__MotorData__speed_sp,  // fetch(index, &value) function pointer
    assign_function__MotorData__speed_sp,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed_fb",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(ired_msgs::msg::MotorData, speed_fb),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorData__speed_fb,  // size() function pointer
    get_const_function__MotorData__speed_fb,  // get_const(index) function pointer
    get_function__MotorData__speed_fb,  // get(index) function pointer
    fetch_function__MotorData__speed_fb,  // fetch(index, &value) function pointer
    assign_function__MotorData__speed_fb,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pid_motor_front_left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(ired_msgs::msg::MotorData, pid_motor_front_left),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorData__pid_motor_front_left,  // size() function pointer
    get_const_function__MotorData__pid_motor_front_left,  // get_const(index) function pointer
    get_function__MotorData__pid_motor_front_left,  // get(index) function pointer
    fetch_function__MotorData__pid_motor_front_left,  // fetch(index, &value) function pointer
    assign_function__MotorData__pid_motor_front_left,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pid_motor_front_right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(ired_msgs::msg::MotorData, pid_motor_front_right),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorData__pid_motor_front_right,  // size() function pointer
    get_const_function__MotorData__pid_motor_front_right,  // get_const(index) function pointer
    get_function__MotorData__pid_motor_front_right,  // get(index) function pointer
    fetch_function__MotorData__pid_motor_front_right,  // fetch(index, &value) function pointer
    assign_function__MotorData__pid_motor_front_right,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pid_motor_rear_left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(ired_msgs::msg::MotorData, pid_motor_rear_left),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorData__pid_motor_rear_left,  // size() function pointer
    get_const_function__MotorData__pid_motor_rear_left,  // get_const(index) function pointer
    get_function__MotorData__pid_motor_rear_left,  // get(index) function pointer
    fetch_function__MotorData__pid_motor_rear_left,  // fetch(index, &value) function pointer
    assign_function__MotorData__pid_motor_rear_left,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pid_motor_rear_right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(ired_msgs::msg::MotorData, pid_motor_rear_right),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorData__pid_motor_rear_right,  // size() function pointer
    get_const_function__MotorData__pid_motor_rear_right,  // get_const(index) function pointer
    get_function__MotorData__pid_motor_rear_right,  // get(index) function pointer
    fetch_function__MotorData__pid_motor_rear_right,  // fetch(index, &value) function pointer
    assign_function__MotorData__pid_motor_rear_right,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorData_message_members = {
  "ired_msgs::msg",  // message namespace
  "MotorData",  // message name
  6,  // number of fields
  sizeof(ired_msgs::msg::MotorData),
  false,  // has_any_key_member_
  MotorData_message_member_array,  // message members
  MotorData_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorData_message_members,
  get_message_typesupport_handle_function,
  &ired_msgs__msg__MotorData__get_type_hash,
  &ired_msgs__msg__MotorData__get_type_description,
  &ired_msgs__msg__MotorData__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ired_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ired_msgs::msg::MotorData>()
{
  return &::ired_msgs::msg::rosidl_typesupport_introspection_cpp::MotorData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ired_msgs, msg, MotorData)() {
  return &::ired_msgs::msg::rosidl_typesupport_introspection_cpp::MotorData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
