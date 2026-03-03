// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/YawRate.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/yaw_rate__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__YawRate__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6c, 0x58, 0x09, 0x65, 0x87, 0xbc, 0x8f, 0x6e,
      0xbb, 0xe5, 0xd5, 0x4c, 0x92, 0x54, 0xc4, 0x83,
      0x19, 0xa1, 0x92, 0xaf, 0xfc, 0x9c, 0x53, 0x2f,
      0xf2, 0x31, 0x91, 0x70, 0xb1, 0x6e, 0xd2, 0xcd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__YawRate__TYPE_NAME[] = "j2735_v2x_msgs/msg/YawRate";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__YawRate__FIELD_NAME__yaw_rate[] = "yaw_rate";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__YawRate__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__YawRate__FIELD_NAME__yaw_rate, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__YawRate__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__YawRate__TYPE_NAME, 26, 26},
      {j2735_v2x_msgs__msg__YawRate__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# YawRate.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# YawRate ::= INTEGER (-32767..32767)\n"
  "#   -- LSB units of 0.01 degrees per second (signed)\n"
  "\n"
  "int16 yaw_rate\n"
  "\n"
  "int16 MIN_YAW_RATE = -32767\n"
  "int16 MAX_YAW_RATE = 32767";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__YawRate__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__YawRate__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 212, 212},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__YawRate__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__YawRate__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
