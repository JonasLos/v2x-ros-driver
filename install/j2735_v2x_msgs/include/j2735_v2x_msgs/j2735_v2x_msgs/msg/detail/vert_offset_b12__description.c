// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/VertOffsetB12.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/vert_offset_b12__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__VertOffsetB12__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbe, 0xf5, 0xf6, 0x06, 0x26, 0xd1, 0x52, 0x6e,
      0xfc, 0x08, 0xad, 0x64, 0x43, 0xb9, 0xca, 0xca,
      0x3d, 0x7e, 0xc3, 0x81, 0xe4, 0x40, 0x40, 0x95,
      0x1d, 0xbb, 0xd0, 0x3c, 0xb4, 0xe8, 0x6d, 0x34,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__VertOffsetB12__TYPE_NAME[] = "j2735_v2x_msgs/msg/VertOffsetB12";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__VertOffsetB12__FIELD_NAME__offset[] = "offset";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__VertOffsetB12__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__VertOffsetB12__FIELD_NAME__offset, 6, 6},
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
j2735_v2x_msgs__msg__VertOffsetB12__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__VertOffsetB12__TYPE_NAME, 32, 32},
      {j2735_v2x_msgs__msg__VertOffsetB12__FIELDS, 1, 1},
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
  "# VertOffsetB12.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of VertOffset-B12 from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# VertOffset-B12 ::= INTEGER (-2048..2047)  \n"
  "#    -- LSB units of of 10 cm\n"
  "#    -- with a range of +- 204.7 meters vertical\n"
  "#    -- value  2047 to be used for  2047 or greater\n"
  "#    -- value -2047 to be used for -2047 or greater\n"
  "#    -- value -2048 to be unavailable\n"
  "\n"
  "int16 offset\n"
  "\n"
  "int16 MIN=-2047\n"
  "int16 MAX=2047\n"
  "int16 UNAVAILABLE=-2048";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__VertOffsetB12__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__VertOffsetB12__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 525, 525},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__VertOffsetB12__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__VertOffsetB12__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
