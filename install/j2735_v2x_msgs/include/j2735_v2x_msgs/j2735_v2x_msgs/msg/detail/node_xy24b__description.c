// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/NodeXY24b.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/node_xy24b__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__NodeXY24b__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe7, 0xb7, 0x0d, 0x99, 0x15, 0xcd, 0x02, 0xbf,
      0x77, 0xde, 0xd9, 0x29, 0x4f, 0xf0, 0xa5, 0x12,
      0x03, 0xac, 0x3d, 0xa5, 0xb5, 0x93, 0x93, 0xaf,
      0x8a, 0x00, 0x6c, 0x47, 0x60, 0xc6, 0x23, 0x2c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__NodeXY24b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY24b";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__NodeXY24b__FIELD_NAME__x[] = "x";
static char j2735_v2x_msgs__msg__NodeXY24b__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__NodeXY24b__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__NodeXY24b__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY24b__FIELD_NAME__y, 1, 1},
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
j2735_v2x_msgs__msg__NodeXY24b__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__NodeXY24b__TYPE_NAME, 28, 28},
      {j2735_v2x_msgs__msg__NodeXY24b__FIELDS, 2, 2},
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
  "# NodeXY24b.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# A 24-bit node type with offset values from the last point in X and Y.\n"
  "#\n"
  "# Node-XY-24b ::= SEQUENCE {\n"
  "# x Offset-B12,\n"
  "# y Offset-B12\n"
  "# }\n"
  "\n"
  "\n"
  "# Offset-B12 ::= INTEGER (-2048..2047)\n"
  "# -- a range of +- 20.47 meters\n"
  "# A 12-bit delta offset in X, Y or Z direction from some known point. For non-vehicle centric coordinate frames of\n"
  "# reference, non-vehicle centric coordinate frames of reference, offset is positive to the East (X) and to the North (Y)\n"
  "# directions. The most negative value shall be used to indicate an unknown value.\n"
  "\n"
  "int16 x\n"
  "int16 y\n"
  "\n"
  "int16 UNKNOWN=-2048\n"
  "int16 MIN=-2047\n"
  "int16 MAX=2047";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__NodeXY24b__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__NodeXY24b__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 648, 648},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__NodeXY24b__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__NodeXY24b__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
