// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/BumperHeight.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/bumper_height__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__BumperHeight__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfc, 0x35, 0xaf, 0x40, 0xa1, 0x1a, 0xac, 0x07,
      0x48, 0xb8, 0xe4, 0x34, 0xaf, 0x9b, 0x53, 0x78,
      0xe5, 0x94, 0xc8, 0x1c, 0x28, 0x43, 0x23, 0x10,
      0x09, 0xba, 0x6a, 0x42, 0xf8, 0x7b, 0xa2, 0x2d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__BumperHeight__TYPE_NAME[] = "j2735_v2x_msgs/msg/BumperHeight";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__BumperHeight__FIELD_NAME__bumper_height[] = "bumper_height";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__BumperHeight__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__BumperHeight__FIELD_NAME__bumper_height, 13, 13},
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
j2735_v2x_msgs__msg__BumperHeight__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__BumperHeight__TYPE_NAME, 31, 31},
      {j2735_v2x_msgs__msg__BumperHeight__FIELDS, 1, 1},
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
  "# BumperHeight.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# BumperHeight ::= INTEGER (0..127) \n"
  "#    -- in units of 0.01 meters from ground surface.\n"
  "uint8 bumper_height\n"
  "\n"
  "uint8 BUMPER_HEIGHT_MIN=0\n"
  "uint8 BUMPER_HEIGHT_MAX=127";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__BumperHeight__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__BumperHeight__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 220, 220},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__BumperHeight__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__BumperHeight__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
