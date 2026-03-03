// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PersonalCrossingInProgress.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/personal_crossing_in_progress__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PersonalCrossingInProgress__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x78, 0x72, 0xe5, 0x4b, 0xea, 0x46, 0x8e, 0xf5,
      0x34, 0xd4, 0x4a, 0x60, 0x35, 0xcd, 0x0f, 0x4c,
      0x1b, 0xd6, 0x5a, 0x75, 0xfa, 0x1b, 0xa0, 0x7c,
      0x57, 0x50, 0x74, 0x42, 0xac, 0xe0, 0x39, 0x06,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__PersonalCrossingInProgress__TYPE_NAME[] = "j2735_v2x_msgs/msg/PersonalCrossingInProgress";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PersonalCrossingInProgress__FIELD_NAME__cross_state[] = "cross_state";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PersonalCrossingInProgress__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PersonalCrossingInProgress__FIELD_NAME__cross_state, 11, 11},
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
j2735_v2x_msgs__msg__PersonalCrossingInProgress__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PersonalCrossingInProgress__TYPE_NAME, 45, 45},
      {j2735_v2x_msgs__msg__PersonalCrossingInProgress__FIELDS, 1, 1},
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
  "# PersonalCrossingInProgress.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of PersonalCrossingInProgress from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# PersonalCrossingInProgress ::= BOOLEAN -- Use:\n"
  "#    -- True  = Yes, is in maneuver\n"
  "#    -- False = No\n"
  "bool cross_state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PersonalCrossingInProgress__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PersonalCrossingInProgress__TYPE_NAME, 45, 45},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 335, 335},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PersonalCrossingInProgress__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PersonalCrossingInProgress__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
