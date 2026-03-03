// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/OffsetLLB18.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/offset_llb18__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__OffsetLLB18__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x60, 0x12, 0xa2, 0x3c, 0x8e, 0xd5, 0xc0, 0xfb,
      0x4b, 0xaa, 0x9e, 0xd8, 0x17, 0x1c, 0x07, 0xbc,
      0x85, 0x3b, 0x1b, 0x48, 0xd5, 0x58, 0x90, 0x14,
      0x5e, 0x7d, 0x12, 0x11, 0xb5, 0x27, 0xe3, 0xbb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__OffsetLLB18__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetLLB18";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__OffsetLLB18__FIELD_NAME__offset[] = "offset";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__OffsetLLB18__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__OffsetLLB18__FIELD_NAME__offset, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__OffsetLLB18__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__OffsetLLB18__TYPE_NAME, 30, 30},
      {j2735_v2x_msgs__msg__OffsetLLB18__FIELDS, 1, 1},
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
  "# OffsetLLB18.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of OffsetLL-B18 from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# OffsetLL-B18 ::= INTEGER (-131072..131071)     \n"
  "#    -- A range of +- 0.0131071 degrees\n"
  "#    -- The value +131071 shall be used for values >= than +0.0131071 degrees\n"
  "#    -- The value -131071 shall be used for values <= than -0.0131071 degrees\n"
  "#    -- The value -131072 shall be used unknown\n"
  "#    -- In LSB units of 0.1 microdegrees (unless a zoom is employed)\n"
  "\n"
  "int32 offset\n"
  "\n"
  "int32 MIN=-131071\n"
  "int32 MAX=131071\n"
  "\n"
  "int32 UNAVAILABLE=-131072";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__OffsetLLB18__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__OffsetLLB18__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 625, 625},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__OffsetLLB18__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__OffsetLLB18__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
