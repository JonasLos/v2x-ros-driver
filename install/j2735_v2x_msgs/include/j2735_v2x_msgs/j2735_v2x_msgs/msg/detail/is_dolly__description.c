// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/IsDolly.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/is_dolly__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__IsDolly__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaf, 0x05, 0x51, 0x88, 0xdf, 0x86, 0x5a, 0x40,
      0x07, 0xb0, 0x6d, 0x2f, 0x41, 0x28, 0xeb, 0x9c,
      0x10, 0x27, 0x81, 0xf5, 0xad, 0x84, 0x97, 0x29,
      0x17, 0xc5, 0x67, 0x76, 0x9e, 0x95, 0xd8, 0xee,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__IsDolly__TYPE_NAME[] = "j2735_v2x_msgs/msg/IsDolly";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__IsDolly__FIELD_NAME__is_dolly[] = "is_dolly";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__IsDolly__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__IsDolly__FIELD_NAME__is_dolly, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__IsDolly__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__IsDolly__TYPE_NAME, 26, 26},
      {j2735_v2x_msgs__msg__IsDolly__FIELDS, 1, 1},
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
  "# IsDolly.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# IsDolly ::= BOOLEAN -- When false indicates a trailer unit\n"
  "bool is_dolly";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__IsDolly__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__IsDolly__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 124, 124},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__IsDolly__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__IsDolly__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
