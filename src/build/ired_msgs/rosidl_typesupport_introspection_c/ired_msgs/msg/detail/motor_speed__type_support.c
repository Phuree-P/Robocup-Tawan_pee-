// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ired_msgs:msg/MotorSpeed.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ired_msgs/msg/detail/motor_speed__rosidl_typesupport_introspection_c.h"
#include "ired_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ired_msgs/msg/detail/motor_speed__functions.h"
#include "ired_msgs/msg/detail/motor_speed__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__MotorSpeed_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ired_msgs__msg__MotorSpeed__init(message_memory);
}

void ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__MotorSpeed_fini_function(void * message_memory)
{
  ired_msgs__msg__MotorSpeed__fini(message_memory);
}

size_t ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__size_function__MotorSpeed__speed(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__get_const_function__MotorSpeed__speed(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__get_function__MotorSpeed__speed(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__fetch_function__MotorSpeed__speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__get_const_function__MotorSpeed__speed(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__assign_function__MotorSpeed__speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__get_function__MotorSpeed__speed(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__MotorSpeed_message_member_array[1] = {
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(ired_msgs__msg__MotorSpeed, speed),  // bytes offset in struct
    NULL,  // default value
    ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__size_function__MotorSpeed__speed,  // size() function pointer
    ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__get_const_function__MotorSpeed__speed,  // get_const(index) function pointer
    ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__get_function__MotorSpeed__speed,  // get(index) function pointer
    ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__fetch_function__MotorSpeed__speed,  // fetch(index, &value) function pointer
    ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__assign_function__MotorSpeed__speed,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__MotorSpeed_message_members = {
  "ired_msgs__msg",  // message namespace
  "MotorSpeed",  // message name
  1,  // number of fields
  sizeof(ired_msgs__msg__MotorSpeed),
  false,  // has_any_key_member_
  ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__MotorSpeed_message_member_array,  // message members
  ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__MotorSpeed_init_function,  // function to initialize message memory (memory has to be allocated)
  ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__MotorSpeed_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__MotorSpeed_message_type_support_handle = {
  0,
  &ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__MotorSpeed_message_members,
  get_message_typesupport_handle_function,
  &ired_msgs__msg__MotorSpeed__get_type_hash,
  &ired_msgs__msg__MotorSpeed__get_type_description,
  &ired_msgs__msg__MotorSpeed__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ired_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ired_msgs, msg, MotorSpeed)() {
  if (!ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__MotorSpeed_message_type_support_handle.typesupport_identifier) {
    ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__MotorSpeed_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ired_msgs__msg__MotorSpeed__rosidl_typesupport_introspection_c__MotorSpeed_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
