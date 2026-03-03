// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/DSecond.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/d_second__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__DSecond__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x30, 0x1d, 0x97, 0x44, 0x35, 0x12, 0xb0, 0x3b,
      0xed, 0xf4, 0xa3, 0x19, 0x4e, 0x90, 0x4a, 0xb4,
      0x9f, 0xd6, 0x29, 0x54, 0xe6, 0xc0, 0x1a, 0x55,
      0x0f, 0x55, 0xb2, 0xc3, 0xd3, 0x15, 0x12, 0xc0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__DSecond__TYPE_NAME[] = "j2735_v2x_msgs/msg/DSecond";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__DSecond__FIELD_NAME__millisecond[] = "millisecond";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__DSecond__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__DSecond__FIELD_NAME__millisecond, 11, 11},
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
j2735_v2x_msgs__msg__DSecond__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__DSecond__TYPE_NAME, 26, 26},
      {j2735_v2x_msgs__msg__DSecond__FIELDS, 1, 1},
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
  "# DSecond.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of DSecond from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# DSecond ::= INTEGER (0..65535) -- units of milliseconds\n"
  "\n"
  "uint16 millisecond\n"
  "\n"
  "uint16 MILLISEC_WITHIN_MINUTE_NON_LEAP_MIN=0\n"
  "uint16 MILLISEC_WITHIN_MINUTE_NON_LEAP_MAX=59999\n"
  "uint16 MILLISEC_WITHIN_MINUTE_LEAP_MIN=60000\n"
  "uint16 MILLISEC_WITHIN_MINUTE_LEAP_MAX=60999\n"
  "uint16 RESERVED_MIN=61000\n"
  "uint16 RESERVED_MAX=65534\n"
  "uint16 UNAVAILABLE=65535";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__DSecond__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__DSecond__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 517, 517},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__DSecond__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__DSecond__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
