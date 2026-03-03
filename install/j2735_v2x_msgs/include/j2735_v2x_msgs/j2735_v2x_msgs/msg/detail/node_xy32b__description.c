// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/NodeXY32b.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/node_xy32b__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__NodeXY32b__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x81, 0xcb, 0xf6, 0xdb, 0xfe, 0xc9, 0xb6, 0x8c,
      0xa2, 0xdf, 0x13, 0x9c, 0xe6, 0xa2, 0x01, 0x66,
      0xe1, 0x14, 0xe0, 0xb8, 0x56, 0x9b, 0xa3, 0xa9,
      0xde, 0xfb, 0x0e, 0x13, 0xb0, 0xb4, 0xf5, 0x05,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__NodeXY32b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY32b";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__NodeXY32b__FIELD_NAME__x[] = "x";
static char j2735_v2x_msgs__msg__NodeXY32b__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__NodeXY32b__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__NodeXY32b__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY32b__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__NodeXY32b__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__NodeXY32b__TYPE_NAME, 28, 28},
      {j2735_v2x_msgs__msg__NodeXY32b__FIELDS, 2, 2},
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
  "# NodeXY32b.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# A 32-bit node type with offset values from the last point in X and Y.\n"
  "\n"
  "# Node-XY-32b ::= SEQUENCE {\n"
  "# x Offset-B16,\n"
  "# y Offset-B16\n"
  "# }\n"
  "\n"
  "# A 16-bit delta offset in X, Y or Z direction from some known point. For non-vehicle centric coordinate frames of\n"
  "# reference, offset is positive to the East (X) and to the North (Y) directions. The most negative value shall be used to\n"
  "# indicate an unknown value.\n"
  "# Offset-B16 ::= INTEGER (-32768..32767)\n"
  "# -- a range of +- 327.68 meters\n"
  "\n"
  "float32 x\n"
  "float32 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__NodeXY32b__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__NodeXY32b__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 586, 586},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__NodeXY32b__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__NodeXY32b__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
