// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PivotingAllowed.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/pivoting_allowed__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PivotingAllowed__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0c, 0xfc, 0xca, 0xda, 0x20, 0x61, 0x89, 0x9a,
      0x96, 0xb9, 0x0c, 0xd9, 0x33, 0x78, 0x22, 0x4e,
      0xb7, 0x67, 0x9d, 0xfb, 0xe4, 0xca, 0x71, 0x2e,
      0xd3, 0x5a, 0x3a, 0x24, 0x4f, 0x51, 0x6d, 0xed,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__PivotingAllowed__TYPE_NAME[] = "j2735_v2x_msgs/msg/PivotingAllowed";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PivotingAllowed__FIELD_NAME__pivoting_allowed[] = "pivoting_allowed";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PivotingAllowed__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PivotingAllowed__FIELD_NAME__pivoting_allowed, 16, 16},
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
j2735_v2x_msgs__msg__PivotingAllowed__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PivotingAllowed__TYPE_NAME, 34, 34},
      {j2735_v2x_msgs__msg__PivotingAllowed__FIELDS, 1, 1},
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
  "# PivotingAllowed.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# PivotingAllowed ::= BOOLEAN \n"
  "bool pivoting_allowed";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PivotingAllowed__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PivotingAllowed__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 110, 110},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PivotingAllowed__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PivotingAllowed__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
