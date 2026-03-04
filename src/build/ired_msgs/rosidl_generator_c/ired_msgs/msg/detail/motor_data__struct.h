// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ired_msgs:msg/MotorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ired_msgs/msg/motor_data.h"


#ifndef IRED_MSGS__MSG__DETAIL__MOTOR_DATA__STRUCT_H_
#define IRED_MSGS__MSG__DETAIL__MOTOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotorData in the package ired_msgs.
typedef struct ired_msgs__msg__MotorData
{
  double speed_sp[4];
  double speed_fb[4];
  double pid_motor_front_left[3];
  double pid_motor_front_right[3];
  double pid_motor_rear_left[3];
  double pid_motor_rear_right[3];
} ired_msgs__msg__MotorData;

// Struct for a sequence of ired_msgs__msg__MotorData.
typedef struct ired_msgs__msg__MotorData__Sequence
{
  ired_msgs__msg__MotorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ired_msgs__msg__MotorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRED_MSGS__MSG__DETAIL__MOTOR_DATA__STRUCT_H_
