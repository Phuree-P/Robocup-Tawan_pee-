// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ired_msgs:msg/MotorControl.idl
// generated code does not contain a copyright notice

#include "ired_msgs/msg/detail/motor_control__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ired_msgs
const rosidl_type_hash_t *
ired_msgs__msg__MotorControl__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x92, 0x35, 0xa0, 0x2c, 0xeb, 0xc3, 0x94, 0xe3,
      0xd0, 0x5f, 0xa4, 0xb6, 0x35, 0xc5, 0xdd, 0xe0,
      0x2f, 0xfc, 0xbb, 0x51, 0x0e, 0xb3, 0x23, 0xf0,
      0x91, 0x31, 0xd1, 0xef, 0xe9, 0x03, 0x62, 0xd8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ired_msgs__msg__MotorControl__TYPE_NAME[] = "ired_msgs/msg/MotorControl";

// Define type names, field names, and default values
static char ired_msgs__msg__MotorControl__FIELD_NAME__speed[] = "speed";
static char ired_msgs__msg__MotorControl__FIELD_NAME__pid_motor_front_left[] = "pid_motor_front_left";
static char ired_msgs__msg__MotorControl__FIELD_NAME__pid_motor_front_right[] = "pid_motor_front_right";
static char ired_msgs__msg__MotorControl__FIELD_NAME__pid_motor_rear_left[] = "pid_motor_rear_left";
static char ired_msgs__msg__MotorControl__FIELD_NAME__pid_motor_rear_right[] = "pid_motor_rear_right";

static rosidl_runtime_c__type_description__Field ired_msgs__msg__MotorControl__FIELDS[] = {
  {
    {ired_msgs__msg__MotorControl__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ired_msgs__msg__MotorControl__FIELD_NAME__pid_motor_front_left, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ired_msgs__msg__MotorControl__FIELD_NAME__pid_motor_front_right, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ired_msgs__msg__MotorControl__FIELD_NAME__pid_motor_rear_left, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ired_msgs__msg__MotorControl__FIELD_NAME__pid_motor_rear_right, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ired_msgs__msg__MotorControl__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ired_msgs__msg__MotorControl__TYPE_NAME, 26, 26},
      {ired_msgs__msg__MotorControl__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64[4] speed\n"
  "float64[3] pid_motor_front_left\n"
  "float64[3] pid_motor_front_right\n"
  "float64[3] pid_motor_rear_left\n"
  "float64[3] pid_motor_rear_right";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ired_msgs__msg__MotorControl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ired_msgs__msg__MotorControl__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 144, 144},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ired_msgs__msg__MotorControl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ired_msgs__msg__MotorControl__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
