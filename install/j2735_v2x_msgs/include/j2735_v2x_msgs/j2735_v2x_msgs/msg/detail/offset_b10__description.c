// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/OffsetB10.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/offset_b10__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__OffsetB10__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf1, 0x54, 0x5e, 0x45, 0x22, 0x1b, 0xbb, 0xd6,
      0x68, 0xd6, 0x4b, 0x1a, 0x04, 0xb5, 0x5a, 0x7f,
      0x75, 0x0c, 0x80, 0x3b, 0x46, 0xc3, 0x5f, 0x0c,
      0x4a, 0x71, 0xb2, 0xa5, 0xad, 0x88, 0x12, 0xc2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__OffsetB10__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetB10";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__OffsetB10__FIELD_NAME__offset[] = "offset";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__OffsetB10__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__OffsetB10__FIELD_NAME__offset, 6, 6},
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
j2735_v2x_msgs__msg__OffsetB10__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__OffsetB10__TYPE_NAME, 28, 28},
      {j2735_v2x_msgs__msg__OffsetB10__FIELDS, 1, 1},
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
  "# OffsetB10.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# Offset-B10 ::= INTEGER (-512..511)\n"
  "#    -- a range of +- 5.11 meters\n"
  "# An 11-bit delta offset in X or Y direction from some known point. For non-vehicle centric coordinate frames of reference,\n"
  "# offset is positive to the east (X) and to the north (Y) directions. The most negative value shall be used to indicate an unknown\n"
  "# value.\n"
  "int16 offset\n"
  "\n"
  "int16 OFFSET_MIN=-511\n"
  "int16 OFFSET_MAX=511\n"
  "int16 OFFSET_UNKNOWN=-512";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__OffsetB10__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__OffsetB10__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 469, 469},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__OffsetB10__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__OffsetB10__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
