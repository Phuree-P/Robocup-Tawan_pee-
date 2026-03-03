// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from ired_msgs:msg/MotorSpeed.idl
// generated code does not contain a copyright notice
#ifndef IRED_MSGS__MSG__DETAIL__MOTOR_SPEED__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define IRED_MSGS__MSG__DETAIL__MOTOR_SPEED__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ired_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ired_msgs/msg/detail/motor_speed__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ired_msgs
bool cdr_serialize_ired_msgs__msg__MotorSpeed(
  const ired_msgs__msg__MotorSpeed * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ired_msgs
bool cdr_deserialize_ired_msgs__msg__MotorSpeed(
  eprosima::fastcdr::Cdr &,
  ired_msgs__msg__MotorSpeed * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ired_msgs
size_t get_serialized_size_ired_msgs__msg__MotorSpeed(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ired_msgs
size_t max_serialized_size_ired_msgs__msg__MotorSpeed(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ired_msgs
bool cdr_serialize_key_ired_msgs__msg__MotorSpeed(
  const ired_msgs__msg__MotorSpeed * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ired_msgs
size_t get_serialized_size_key_ired_msgs__msg__MotorSpeed(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ired_msgs
size_t max_serialized_size_key_ired_msgs__msg__MotorSpeed(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ired_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ired_msgs, msg, MotorSpeed)();

#ifdef __cplusplus
}
#endif

#endif  // IRED_MSGS__MSG__DETAIL__MOTOR_SPEED__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
