// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ired_msgs:msg/MotorSpeed.idl
// generated code does not contain a copyright notice

#include "ired_msgs/msg/detail/motor_speed__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ired_msgs
const rosidl_type_hash_t *
ired_msgs__msg__MotorSpeed__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0x0c, 0xb1, 0xf8, 0x4a, 0x48, 0x7c, 0x23,
      0x1b, 0xf4, 0xa7, 0x89, 0x00, 0x7c, 0xb4, 0x82,
      0x6c, 0xcc, 0x6a, 0x05, 0x12, 0x6d, 0x7d, 0x02,
      0xc4, 0x2a, 0x02, 0x49, 0x4f, 0x30, 0x11, 0xcd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ired_msgs__msg__MotorSpeed__TYPE_NAME[] = "ired_msgs/msg/MotorSpeed";

// Define type names, field names, and default values
static char ired_msgs__msg__MotorSpeed__FIELD_NAME__speed[] = "speed";

static rosidl_runtime_c__type_description__Field ired_msgs__msg__MotorSpeed__FIELDS[] = {
  {
    {ired_msgs__msg__MotorSpeed__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ired_msgs__msg__MotorSpeed__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ired_msgs__msg__MotorSpeed__TYPE_NAME, 24, 24},
      {ired_msgs__msg__MotorSpeed__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64[4] speed";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ired_msgs__msg__MotorSpeed__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ired_msgs__msg__MotorSpeed__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 16, 16},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ired_msgs__msg__MotorSpeed__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ired_msgs__msg__MotorSpeed__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
