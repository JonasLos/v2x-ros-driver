// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/Angle.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/angle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__Angle__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd3, 0x71, 0x4d, 0x57, 0xd2, 0xda, 0x35, 0x97,
      0x4c, 0xd1, 0x0c, 0xcf, 0xca, 0xd6, 0x95, 0xb9,
      0x3f, 0xec, 0x8d, 0x61, 0x31, 0xa6, 0x53, 0x16,
      0x25, 0xda, 0x6a, 0x32, 0xc2, 0x83, 0x0c, 0x6d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__Angle__TYPE_NAME[] = "j2735_v2x_msgs/msg/Angle";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__Angle__FIELD_NAME__angle[] = "angle";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__Angle__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__Angle__FIELD_NAME__angle, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__Angle__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__Angle__TYPE_NAME, 24, 24},
      {j2735_v2x_msgs__msg__Angle__FIELDS, 1, 1},
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
  "# Angle.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# Angle ::= INTEGER (0..28800) \n"
  "#    -- LSB of 0.0125 degrees\n"
  "#    -- A range of 0 to 359.9875 degrees\n"
  "uint16 angle\n"
  "\n"
  "uint16 ANGLE_UNAVAILABLE = 28800\n"
  "uint16 ANGLE_MAX = 28799\n"
  "uint16 ANGLE_MIN = 0";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__Angle__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__Angle__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 243, 243},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__Angle__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__Angle__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
