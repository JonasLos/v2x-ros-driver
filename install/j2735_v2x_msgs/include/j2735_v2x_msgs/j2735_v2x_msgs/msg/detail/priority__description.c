// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/Priority.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/priority__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__Priority__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0c, 0xde, 0x86, 0xd3, 0x30, 0xf3, 0xba, 0x04,
      0x40, 0xb6, 0x1c, 0xf8, 0x36, 0x18, 0x18, 0x36,
      0x2a, 0x13, 0x98, 0x6b, 0x91, 0xd1, 0x53, 0x9b,
      0x23, 0x0a, 0x25, 0xa7, 0x91, 0xda, 0x65, 0x0a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__Priority__TYPE_NAME[] = "j2735_v2x_msgs/msg/Priority";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__Priority__FIELD_NAME__priority[] = "priority";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__Priority__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__Priority__FIELD_NAME__priority, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      1,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__Priority__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__Priority__TYPE_NAME, 27, 27},
      {j2735_v2x_msgs__msg__Priority__FIELDS, 1, 1},
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
  "# Priority.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# Priority ::= OCTET STRING (SIZE(1))\n"
  "#  -- Follow J2735 2016 definition notes on setting these bits\n"
  "uint8[1] priority";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__Priority__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__Priority__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 169, 169},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__Priority__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__Priority__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
