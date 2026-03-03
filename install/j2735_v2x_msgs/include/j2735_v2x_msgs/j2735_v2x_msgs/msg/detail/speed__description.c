// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/Speed.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/speed__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__Speed__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb8, 0xc8, 0xb7, 0x35, 0x92, 0xe5, 0x20, 0x47,
      0x80, 0x83, 0x56, 0x7f, 0xe3, 0x43, 0x2a, 0x05,
      0x0e, 0xc7, 0xf2, 0x83, 0xf5, 0x8d, 0x71, 0xc8,
      0xd4, 0x09, 0x3a, 0x2b, 0x41, 0x5b, 0xb1, 0xec,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__Speed__TYPE_NAME[] = "j2735_v2x_msgs/msg/Speed";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__Speed__FIELD_NAME__speed[] = "speed";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__Speed__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__Speed__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__Speed__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__Speed__TYPE_NAME, 24, 24},
      {j2735_v2x_msgs__msg__Speed__FIELDS, 1, 1},
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
  "# Speed.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of Speed from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# Speed ::= INTEGER (0..8191) -- Units of 0.02 m/s\n"
  "#           -- The value 8191 indicates that \n"
  "#           -- speed is unavailable\n"
  "\n"
  "uint16 speed\n"
  "\n"
  "uint16 MIN=0\n"
  "uint16 MAX=8190\n"
  "uint16 UNAVAILABLE=8191";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__Speed__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__Speed__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 373, 373},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__Speed__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__Speed__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
