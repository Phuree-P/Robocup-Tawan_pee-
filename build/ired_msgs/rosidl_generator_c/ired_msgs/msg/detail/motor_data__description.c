// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ired_msgs:msg/MotorData.idl
// generated code does not contain a copyright notice

#include "ired_msgs/msg/detail/motor_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ired_msgs
const rosidl_type_hash_t *
ired_msgs__msg__MotorData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x43, 0xd9, 0x4f, 0xab, 0xa7, 0xc7, 0x58, 0xfd,
      0x26, 0x30, 0x14, 0xbc, 0xbd, 0x8d, 0x33, 0x0f,
      0x8b, 0x5b, 0x3b, 0x4f, 0x20, 0xde, 0x7c, 0x84,
      0x9c, 0x17, 0x97, 0x57, 0xbc, 0x0a, 0xe5, 0xd5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ired_msgs__msg__MotorData__TYPE_NAME[] = "ired_msgs/msg/MotorData";

// Define type names, field names, and default values
static char ired_msgs__msg__MotorData__FIELD_NAME__speed_sp[] = "speed_sp";
static char ired_msgs__msg__MotorData__FIELD_NAME__speed_fb[] = "speed_fb";
static char ired_msgs__msg__MotorData__FIELD_NAME__pid_motor_front_left[] = "pid_motor_front_left";
static char ired_msgs__msg__MotorData__FIELD_NAME__pid_motor_front_right[] = "pid_motor_front_right";
static char ired_msgs__msg__MotorData__FIELD_NAME__pid_motor_rear_left[] = "pid_motor_rear_left";
static char ired_msgs__msg__MotorData__FIELD_NAME__pid_motor_rear_right[] = "pid_motor_rear_right";

static rosidl_runtime_c__type_description__Field ired_msgs__msg__MotorData__FIELDS[] = {
  {
    {ired_msgs__msg__MotorData__FIELD_NAME__speed_sp, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ired_msgs__msg__MotorData__FIELD_NAME__speed_fb, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ired_msgs__msg__MotorData__FIELD_NAME__pid_motor_front_left, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ired_msgs__msg__MotorData__FIELD_NAME__pid_motor_front_right, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ired_msgs__msg__MotorData__FIELD_NAME__pid_motor_rear_left, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ired_msgs__msg__MotorData__FIELD_NAME__pid_motor_rear_right, 20, 20},
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
ired_msgs__msg__MotorData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ired_msgs__msg__MotorData__TYPE_NAME, 23, 23},
      {ired_msgs__msg__MotorData__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64[4] speed_sp\n"
  "float64[4] speed_fb\n"
  "float64[3] pid_motor_front_left\n"
  "float64[3] pid_motor_front_right\n"
  "float64[3] pid_motor_rear_left\n"
  "float64[3] pid_motor_rear_right";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ired_msgs__msg__MotorData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ired_msgs__msg__MotorData__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 167, 167},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ired_msgs__msg__MotorData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ired_msgs__msg__MotorData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
