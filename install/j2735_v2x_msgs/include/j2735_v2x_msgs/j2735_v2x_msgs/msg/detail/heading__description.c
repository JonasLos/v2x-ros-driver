// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/Heading.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/heading__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__Heading__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3b, 0xbe, 0x41, 0x1d, 0x07, 0xbf, 0x87, 0x09,
      0x3c, 0x83, 0x4a, 0x2d, 0x56, 0x05, 0xf9, 0xdd,
      0x82, 0x4f, 0x49, 0xb6, 0xff, 0x0d, 0x2c, 0x39,
      0x8b, 0x7f, 0x29, 0xff, 0x64, 0x41, 0x23, 0x5b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__Heading__TYPE_NAME[] = "j2735_v2x_msgs/msg/Heading";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__Heading__FIELD_NAME__heading[] = "heading";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__Heading__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__Heading__FIELD_NAME__heading, 7, 7},
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
j2735_v2x_msgs__msg__Heading__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__Heading__TYPE_NAME, 26, 26},
      {j2735_v2x_msgs__msg__Heading__FIELDS, 1, 1},
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
  "# Heading.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of Heading from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# Heading ::= INTEGER (0..28800)\n"
  "#  -- LSB of 0.0125 degrees\n"
  "#  -- A range of 0 to 359.9875 degrees\n"
  "#  -- Convert to degree with factor 0.0125 when field is used\n"
  "uint16 heading\n"
  "\n"
  "uint16 HEADING_UNAVAILABLE = 28800\n"
  "uint16 HEADING_MAX = 28798\n"
  "uint16 HEADING_MIN = 0";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__Heading__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__Heading__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 439, 439},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__Heading__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__Heading__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
