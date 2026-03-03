// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/DMinute.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/d_minute__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__DMinute__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x36, 0x2f, 0x1c, 0xf0, 0xcb, 0xb9, 0xba, 0x3f,
      0xdd, 0x53, 0xf8, 0xba, 0xe8, 0x58, 0x69, 0xbb,
      0x89, 0x63, 0x98, 0xb8, 0xeb, 0xb9, 0x19, 0x8a,
      0x04, 0xa5, 0x69, 0xb9, 0xdc, 0x96, 0x3f, 0xec,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__DMinute__TYPE_NAME[] = "j2735_v2x_msgs/msg/DMinute";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__DMinute__FIELD_NAME__minute[] = "minute";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__DMinute__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__DMinute__FIELD_NAME__minute, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__DMinute__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__DMinute__TYPE_NAME, 26, 26},
      {j2735_v2x_msgs__msg__DMinute__FIELDS, 1, 1},
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
  "# DMinute.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of DMinute from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# DMinute ::= INTEGER (0..60) -- units of minutes\n"
  "\n"
  "uint8 minute\n"
  "\n"
  "uint8 MINUTE_IN_HOUR_MIN=0\n"
  "uint8 MINUTE_IN_HOUR_MAX=59\n"
  "uint8 UNAVAILABLE=60";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__DMinute__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__DMinute__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 317, 317},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__DMinute__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__DMinute__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
