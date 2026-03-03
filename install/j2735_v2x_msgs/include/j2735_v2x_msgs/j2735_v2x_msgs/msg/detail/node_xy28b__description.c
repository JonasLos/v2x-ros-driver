// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/NodeXY28b.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/node_xy28b__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__NodeXY28b__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x82, 0xd5, 0x0a, 0x59, 0x5f, 0x16, 0xbd, 0xe6,
      0x68, 0xda, 0x2b, 0xc0, 0x52, 0x2c, 0x23, 0xba,
      0xb1, 0xff, 0x1f, 0xad, 0x23, 0x75, 0xa9, 0x4e,
      0x63, 0xe3, 0xbd, 0xb6, 0x66, 0xd9, 0xcd, 0x43,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__NodeXY28b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY28b";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__NodeXY28b__FIELD_NAME__x[] = "x";
static char j2735_v2x_msgs__msg__NodeXY28b__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__NodeXY28b__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__NodeXY28b__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY28b__FIELD_NAME__y, 1, 1},
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
j2735_v2x_msgs__msg__NodeXY28b__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__NodeXY28b__TYPE_NAME, 28, 28},
      {j2735_v2x_msgs__msg__NodeXY28b__FIELDS, 2, 2},
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
  "# NodeXY28b.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# A 28-bit node type with offset values from the last point in X and Y.\n"
  "\n"
  "# Node-XY-28b ::= SEQUENCE {\n"
  "# x Offset-B14,\n"
  "# y Offset-B14\n"
  "# }\n"
  "\n"
  "# A 14-bit delta offset in X or Y direction from some known point. For non-vehicle centric coordinate frames of\n"
  "# reference, offset is positive to the East (X) and to the North (Y) directions.\n"
  "# Offset-B14 ::= INTEGER (-8192..8191)\n"
  "# -- a range of +- 81.91 meters\n"
  "\n"
  "float32 x\n"
  "float32 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__NodeXY28b__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__NodeXY28b__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 511, 511},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__NodeXY28b__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__NodeXY28b__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
