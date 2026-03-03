// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/VertOffsetB07.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/vert_offset_b07__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__VertOffsetB07__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0d, 0x59, 0x6e, 0xf1, 0x2d, 0xae, 0x7b, 0x4e,
      0xb9, 0x88, 0x8c, 0x0e, 0xc6, 0xac, 0x9c, 0xc8,
      0x2c, 0xd7, 0x1e, 0x7f, 0xd4, 0x9e, 0x58, 0xf4,
      0x86, 0x7d, 0x7e, 0xc0, 0xdf, 0x05, 0x97, 0x6b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__VertOffsetB07__TYPE_NAME[] = "j2735_v2x_msgs/msg/VertOffsetB07";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__VertOffsetB07__FIELD_NAME__offset[] = "offset";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__VertOffsetB07__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__VertOffsetB07__FIELD_NAME__offset, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__VertOffsetB07__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__VertOffsetB07__TYPE_NAME, 32, 32},
      {j2735_v2x_msgs__msg__VertOffsetB07__FIELDS, 1, 1},
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
  "# VertOffsetB07.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# VertOffset-B07 ::= INTEGER (-64..63)  \n"
  "#    -- LSB units of of 10 cm\n"
  "#    -- with a range of +- 6.3 meters vertical \n"
  "#    -- value  63 to be used for  63 or greater\n"
  "#    -- value -63 to be used for -63 or greater\n"
  "#    -- value -64 to be unavailable\n"
  "int8 offset \n"
  "\n"
  "int8 OFFSET_MIN = -63\n"
  "int8 OFFSET_MAX = 63\n"
  "int8 OFFSET_UNAVAILABLE = -64";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__VertOffsetB07__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__VertOffsetB07__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 393, 393},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__VertOffsetB07__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__VertOffsetB07__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
