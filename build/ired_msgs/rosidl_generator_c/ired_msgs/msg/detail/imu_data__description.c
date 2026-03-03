// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ired_msgs:msg/IMUData.idl
// generated code does not contain a copyright notice

#include "ired_msgs/msg/detail/imu_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ired_msgs
const rosidl_type_hash_t *
ired_msgs__msg__IMUData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc5, 0x95, 0x73, 0xfc, 0x96, 0x88, 0x43, 0x11,
      0xe0, 0xcb, 0x41, 0xca, 0x68, 0x5e, 0xfa, 0x9b,
      0xc8, 0xa4, 0xba, 0x1a, 0xb6, 0xb6, 0x72, 0xe0,
      0xc3, 0x54, 0x05, 0xbc, 0xc8, 0xe8, 0x6d, 0xbe,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ired_msgs__msg__IMUData__TYPE_NAME[] = "ired_msgs/msg/IMUData";

// Define type names, field names, and default values
static char ired_msgs__msg__IMUData__FIELD_NAME__roll[] = "roll";
static char ired_msgs__msg__IMUData__FIELD_NAME__pitch[] = "pitch";
static char ired_msgs__msg__IMUData__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field ired_msgs__msg__IMUData__FIELDS[] = {
  {
    {ired_msgs__msg__IMUData__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ired_msgs__msg__IMUData__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ired_msgs__msg__IMUData__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ired_msgs__msg__IMUData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ired_msgs__msg__IMUData__TYPE_NAME, 21, 21},
      {ired_msgs__msg__IMUData__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 roll\n"
  "float64 pitch\n"
  "float64 yaw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ired_msgs__msg__IMUData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ired_msgs__msg__IMUData__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 38, 38},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ired_msgs__msg__IMUData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ired_msgs__msg__IMUData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
