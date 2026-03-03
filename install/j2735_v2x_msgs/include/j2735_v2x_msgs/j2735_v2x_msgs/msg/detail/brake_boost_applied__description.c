// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/BrakeBoostApplied.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/brake_boost_applied__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__BrakeBoostApplied__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x79, 0x40, 0x3b, 0xd2, 0x40, 0x6b, 0xf6, 0xd1,
      0x9d, 0x66, 0x8e, 0xc2, 0x47, 0x26, 0xaa, 0xfa,
      0xe7, 0xa0, 0x8f, 0x39, 0x80, 0xb7, 0x7c, 0xb5,
      0x85, 0x37, 0x32, 0xaa, 0x4b, 0xde, 0x14, 0x96,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__BrakeBoostApplied__TYPE_NAME[] = "j2735_v2x_msgs/msg/BrakeBoostApplied";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__BrakeBoostApplied__FIELD_NAME__brake_boost_applied[] = "brake_boost_applied";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__BrakeBoostApplied__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__BrakeBoostApplied__FIELD_NAME__brake_boost_applied, 19, 19},
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
j2735_v2x_msgs__msg__BrakeBoostApplied__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__BrakeBoostApplied__TYPE_NAME, 36, 36},
      {j2735_v2x_msgs__msg__BrakeBoostApplied__FIELDS, 1, 1},
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
  "# BrakeBoostApplied.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "\n"
  "#BrakeBoostApplied ::= ENUMERATED {\n"
  "#   unavailable   (0), -- Vehicle not equipped with brake boost\n"
  "#                      -- or brake boost data is unavailable\n"
  "#   off           (1), -- Vehicle's brake boost is off\n"
  "#   on            (2)  -- Vehicle's brake boost is on (applied)\n"
  "#   }\n"
  "#   \n"
  "\n"
  "uint8  brake_boost_applied\n"
  "\n"
  "# enumeration values for status:\n"
  "uint8  UNAVAILABLE=0\n"
  "uint8  OFF=1\n"
  "uint8  ON=2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__BrakeBoostApplied__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__BrakeBoostApplied__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 494, 494},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__BrakeBoostApplied__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__BrakeBoostApplied__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
