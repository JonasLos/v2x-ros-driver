// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/Id64b.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/id64b__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__Id64b__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0xc4, 0x8b, 0xe9, 0x00, 0xf5, 0xa0, 0xa0,
      0x2a, 0x20, 0xff, 0xe3, 0x21, 0xbc, 0x2c, 0x13,
      0x40, 0xa9, 0xfd, 0x57, 0x18, 0xe2, 0xea, 0xf1,
      0x90, 0x06, 0x79, 0xf4, 0x79, 0xb5, 0x00, 0xef,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__Id64b__TYPE_NAME[] = "j2735_v2x_msgs/msg/Id64b";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__Id64b__FIELD_NAME__id[] = "id";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__Id64b__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__Id64b__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      8,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__Id64b__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__Id64b__TYPE_NAME, 24, 24},
      {j2735_v2x_msgs__msg__Id64b__FIELDS, 1, 1},
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
  "# Id64b.msg\n"
  "#\n"
  "# Part of the CARMA Cloud geo-fence specification not part of the official SAE j2735 standard\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# \n"
  "# @version 0.1\n"
  "#\n"
  "# Description\n"
  "# ...\n"
  "\n"
  "# Id64b ::= OCTET STRING (SIZE(8)) -- 8-byte binary value that can be used for shorter unique ids\n"
  "\n"
  "uint8[8] id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__Id64b__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__Id64b__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 294, 294},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__Id64b__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__Id64b__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
