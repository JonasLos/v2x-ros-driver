// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/RegionalExtension.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/regional_extension__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__RegionalExtension__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1b, 0xf8, 0x98, 0x15, 0x35, 0xf1, 0xb6, 0x9e,
      0x1b, 0xf5, 0x06, 0x1b, 0x11, 0x39, 0xad, 0x37,
      0xed, 0x4a, 0x2b, 0xd0, 0xc0, 0x0a, 0x4f, 0xcd,
      0xc5, 0x21, 0xf3, 0x7b, 0x25, 0x57, 0x85, 0x04,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__RegionalExtension__TYPE_NAME[] = "j2735_v2x_msgs/msg/RegionalExtension";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__RegionalExtension__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__RegionalExtension__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__RegionalExtension__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__RegionalExtension__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__RegionalExtension__TYPE_NAME, 36, 36},
      {j2735_v2x_msgs__msg__RegionalExtension__FIELDS, 1, 1},
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
  "# RegionalExtension.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "#\n"
  "# The formal definition used by each regional extension point follows the style of a unique indexing\n"
  "# integer and a type definition bound into a set.\n"
  "\n"
  "# RegionalExtension {REG-EXT-ID-AND-TYPE : Set} ::= SEQUENCE {\n"
  "# regionId REG-EXT-ID-AND-TYPE.&id( {Set} ),\n"
  "# regExtValue REG-EXT-ID-AND-TYPE.&Type( {Set} {@regionId} )\n"
  "# }\n"
  "\n"
  "# regional #TODO: RegionalExtensions are not yet implemented in asn1c";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__RegionalExtension__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__RegionalExtension__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 494, 494},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__RegionalExtension__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__RegionalExtension__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
