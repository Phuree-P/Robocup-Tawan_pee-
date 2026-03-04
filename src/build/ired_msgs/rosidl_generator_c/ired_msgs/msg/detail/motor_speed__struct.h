// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ired_msgs:msg/MotorSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ired_msgs/msg/motor_speed.h"


#ifndef IRED_MSGS__MSG__DETAIL__MOTOR_SPEED__STRUCT_H_
#define IRED_MSGS__MSG__DETAIL__MOTOR_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotorSpeed in the package ired_msgs.
typedef struct ired_msgs__msg__MotorSpeed
{
  double speed[4];
} ired_msgs__msg__MotorSpeed;

// Struct for a sequence of ired_msgs__msg__MotorSpeed.
typedef struct ired_msgs__msg__MotorSpeed__Sequence
{
  ired_msgs__msg__MotorSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ired_msgs__msg__MotorSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRED_MSGS__MSG__DETAIL__MOTOR_SPEED__STRUCT_H_
