// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/NodeXY22b.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/node_xy22b__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__NodeXY22b__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x45, 0x25, 0xdc, 0x9b, 0x95, 0x64, 0xbd, 0x58,
      0x0d, 0x9e, 0xc5, 0xf9, 0x70, 0x41, 0x44, 0x39,
      0x8f, 0x82, 0xc7, 0x17, 0x47, 0x05, 0x5e, 0xef,
      0x2b, 0x08, 0x8b, 0xb8, 0x28, 0x60, 0x12, 0x6a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__NodeXY22b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY22b";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__NodeXY22b__FIELD_NAME__x[] = "x";
static char j2735_v2x_msgs__msg__NodeXY22b__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__NodeXY22b__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__NodeXY22b__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY22b__FIELD_NAME__y, 1, 1},
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
j2735_v2x_msgs__msg__NodeXY22b__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__NodeXY22b__TYPE_NAME, 28, 28},
      {j2735_v2x_msgs__msg__NodeXY22b__FIELDS, 2, 2},
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
  "# NodeXY22b.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# A 22-bit node type with offset values from the last point in X and Y.\n"
  "\n"
  "# Node-XY-22b ::= SEQUENCE {\n"
  "# x Offset-B11,\n"
  "# y Offset-B11\n"
  "# }\n"
  "\n"
  "# Offset-B11 ::= INTEGER (-1024..1023)\n"
  "# -- a range of +- 10.23 meters\n"
  "# An 11-bit delta offset in X or Y direction from some known point. For non-vehicle centric coordinate frames of\n"
  "# reference, offset is positive to the East (X) and to the North (Y) directions. The most negative value shall be used to\n"
  "# indicate an unknown value.\n"
  "\n"
  "float32 x\n"
  "float32 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__NodeXY22b__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__NodeXY22b__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 581, 581},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__NodeXY22b__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__NodeXY22b__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
