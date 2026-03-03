// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/Id128b.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/id128b__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__Id128b__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x36, 0x29, 0xda, 0x21, 0x2b, 0x7d, 0x03, 0x0f,
      0x10, 0xb9, 0xf6, 0xc5, 0xad, 0xa6, 0xce, 0x41,
      0x86, 0xb8, 0x6a, 0x2c, 0xd8, 0x6d, 0x78, 0x17,
      0x97, 0x62, 0xa2, 0x9b, 0x01, 0x9c, 0x2a, 0xc5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__Id128b__TYPE_NAME[] = "j2735_v2x_msgs/msg/Id128b";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__Id128b__FIELD_NAME__id[] = "id";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__Id128b__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__Id128b__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      16,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__Id128b__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__Id128b__TYPE_NAME, 25, 25},
      {j2735_v2x_msgs__msg__Id128b__FIELDS, 1, 1},
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
  "# Id128b.msg\n"
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
  "# Id128b ::= OCTET STRING (SIZE(16)) -- 16-byte binary value typicially used for unique ids\n"
  "\n"
  "uint8[16] id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__Id128b__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__Id128b__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 290, 290},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__Id128b__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__Id128b__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
