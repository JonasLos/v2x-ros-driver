// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/OffsetB12.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/offset_b12__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__OffsetB12__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x68, 0x42, 0xcd, 0x20, 0xa9, 0x18, 0x46, 0xec,
      0xb7, 0x01, 0xbc, 0x09, 0x3a, 0xdc, 0x8f, 0xfa,
      0xb9, 0x2b, 0x58, 0x72, 0xb9, 0x8e, 0x37, 0x38,
      0xd8, 0x41, 0x06, 0xc4, 0x85, 0x17, 0x1d, 0x76,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__OffsetB12__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetB12";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__OffsetB12__FIELD_NAME__offset[] = "offset";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__OffsetB12__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__OffsetB12__FIELD_NAME__offset, 6, 6},
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
j2735_v2x_msgs__msg__OffsetB12__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__OffsetB12__TYPE_NAME, 28, 28},
      {j2735_v2x_msgs__msg__OffsetB12__FIELDS, 1, 1},
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
  "# OffsetB12.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# Offset-B12 ::= INTEGER (-2048..2047)\n"
  "#    -- a range of +- 20.47 meters\n"
  "# A 12-bit delta offset in X, Y, or Z direction from some known point. For non-vehicle centric coordinate frames of\n"
  "# reference, non-vehicle centric coordinate frames of reference, offset is positive to the east (X) and to the north (Y) directions.\n"
  "# The most negative value shall be used to indicate an unknown value\n"
  "int16 offset\n"
  "\n"
  "int16 OFFSET_MIN=-2047\n"
  "int16 OFFSET_MAX=2047\n"
  "int16 OFFSET_UNKNOWN=-2048";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__OffsetB12__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__OffsetB12__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 529, 529},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__OffsetB12__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__OffsetB12__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
