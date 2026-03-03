// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/GrossSpeed.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/gross_speed__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__GrossSpeed__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd6, 0x48, 0x05, 0x7c, 0xdb, 0x33, 0x9f, 0x1d,
      0x6b, 0xdb, 0x4e, 0x3f, 0xd9, 0xbe, 0xf4, 0x95,
      0xc6, 0x95, 0xe4, 0xdf, 0xd2, 0xe0, 0x32, 0x0e,
      0xb5, 0xe6, 0xed, 0xd0, 0x35, 0xa0, 0x2d, 0x79,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__GrossSpeed__TYPE_NAME[] = "j2735_v2x_msgs/msg/GrossSpeed";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__GrossSpeed__FIELD_NAME__speed[] = "speed";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__GrossSpeed__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__GrossSpeed__FIELD_NAME__speed, 5, 5},
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
j2735_v2x_msgs__msg__GrossSpeed__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__GrossSpeed__TYPE_NAME, 29, 29},
      {j2735_v2x_msgs__msg__GrossSpeed__FIELDS, 1, 1},
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
  "# GrossSpeed.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# GrossSpeed ::= INTEGER (0..31) -- Units of 1.00 m/s\n"
  "#    -- The value 30 shall be used for speeds of 30 m/s or greater (67.1 mph)\n"
  "#    -- The value 31 shall indicate that the speed is unavailable\n"
  "uint8 speed\n"
  "\n"
  "uint8 SPEED_MIN=0\n"
  "uint8 SPEED_MAX=30\n"
  "uint8 SPEED_UNAVAILABLE=31";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__GrossSpeed__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__GrossSpeed__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 327, 327},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__GrossSpeed__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__GrossSpeed__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
