// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/DMonth.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/d_month__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__DMonth__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x60, 0xf7, 0xdd, 0xa8, 0x95, 0xe8, 0x06, 0xe6,
      0xb5, 0xeb, 0x4d, 0x54, 0x9d, 0xed, 0xe7, 0xdf,
      0xec, 0xdc, 0x5d, 0xa3, 0x8d, 0xa5, 0x9a, 0xa8,
      0x27, 0x40, 0xd4, 0x14, 0x65, 0xac, 0xf4, 0x10,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__DMonth__TYPE_NAME[] = "j2735_v2x_msgs/msg/DMonth";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__DMonth__FIELD_NAME__month[] = "month";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__DMonth__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__DMonth__FIELD_NAME__month, 5, 5},
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
j2735_v2x_msgs__msg__DMonth__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__DMonth__TYPE_NAME, 25, 25},
      {j2735_v2x_msgs__msg__DMonth__FIELDS, 1, 1},
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
  "# DMonth.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of DMonth from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# DMonth ::= INTEGER (0..12) -- units of months\n"
  "uint8 month\n"
  "\n"
  "uint8 UNAVAILABLE=0\n"
  "uint8 MAX=12";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__DMonth__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__DMonth__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 268, 268},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__DMonth__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__DMonth__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
