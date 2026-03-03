// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/NodeXY20b.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/node_xy20b__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__NodeXY20b__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc4, 0xe1, 0x1b, 0xb4, 0x5e, 0x64, 0x79, 0xd8,
      0x00, 0x5b, 0x4c, 0x86, 0x14, 0xd3, 0x85, 0x51,
      0xe9, 0x84, 0x8a, 0x93, 0x78, 0x52, 0x70, 0x81,
      0xaa, 0xd6, 0xa1, 0x51, 0xe6, 0xd8, 0xe0, 0xc4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__NodeXY20b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY20b";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__NodeXY20b__FIELD_NAME__x[] = "x";
static char j2735_v2x_msgs__msg__NodeXY20b__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__NodeXY20b__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__NodeXY20b__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY20b__FIELD_NAME__y, 1, 1},
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
j2735_v2x_msgs__msg__NodeXY20b__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__NodeXY20b__TYPE_NAME, 28, 28},
      {j2735_v2x_msgs__msg__NodeXY20b__FIELDS, 2, 2},
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
  "# NodeXY20b.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# A 20-bit node type with offset values from the last point in X and Y.\n"
  "#\n"
  "# Node-XY-20b ::= SEQUENCE {\n"
  "# x Offset-B10,\n"
  "# y Offset-B10\n"
  "# }\n"
  "\n"
  "# Offset-B10 ::= INTEGER (-512..511)\n"
  "# -- a range of +- 5.11 meters\n"
  "# A 10-bit delta offset in X, Y or Z direction from some known point. For non-vehicle centric coordinate frames of\n"
  "# reference, offset is positive to the East (X) and to the North (Y) directions. The most negative value shall be used to\n"
  "# indicate an unknown value.\n"
  "\n"
  "float32 x\n"
  "float32 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__NodeXY20b__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__NodeXY20b__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 581, 581},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__NodeXY20b__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__NodeXY20b__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
