// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/SignalControlZone.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/signal_control_zone__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__SignalControlZone__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x23, 0xe1, 0x19, 0x73, 0xba, 0xaf, 0xc5, 0x2a,
      0xf0, 0xa7, 0x10, 0x7d, 0x3e, 0x9d, 0x87, 0xe7,
      0x99, 0x03, 0x79, 0x65, 0x20, 0xfd, 0x3c, 0xd0,
      0x5c, 0x6e, 0xdb, 0x51, 0xdf, 0x2e, 0x5c, 0xf5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__SignalControlZone__TYPE_NAME[] = "j2735_v2x_msgs/msg/SignalControlZone";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__SignalControlZone__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__SignalControlZone__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__SignalControlZone__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
j2735_v2x_msgs__msg__SignalControlZone__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__SignalControlZone__TYPE_NAME, 36, 36},
      {j2735_v2x_msgs__msg__SignalControlZone__FIELDS, 1, 1},
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
  "# SignalControlZone.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# SignalControlZone ::= SEQUENCE {\n"
  "# zone RegionalExtension {{REGION.Reg-SignalControlZone}},\n"
  "# ...\n"
  "# }\n"
  "#\n"
  "# regional_extension  #TODO: RegionalExtensions are not yet implemented in asn1c";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__SignalControlZone__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__SignalControlZone__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 282, 282},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__SignalControlZone__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__SignalControlZone__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
