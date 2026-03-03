// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/DYear.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/d_year__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__DYear__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa5, 0xab, 0x56, 0x67, 0x6a, 0xc6, 0xdb, 0x81,
      0xb2, 0xa4, 0xd5, 0x66, 0x01, 0xda, 0x13, 0xaa,
      0xfd, 0xfd, 0x79, 0x33, 0x25, 0x78, 0x22, 0x91,
      0x96, 0x69, 0xe3, 0xac, 0xfe, 0x9c, 0xd4, 0x26,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__DYear__TYPE_NAME[] = "j2735_v2x_msgs/msg/DYear";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__DYear__FIELD_NAME__year[] = "year";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__DYear__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__DYear__FIELD_NAME__year, 4, 4},
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
j2735_v2x_msgs__msg__DYear__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__DYear__TYPE_NAME, 24, 24},
      {j2735_v2x_msgs__msg__DYear__FIELDS, 1, 1},
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
  "# DYear.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of DYear from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# DYear ::= INTEGER (0..4095) -- units of years\n"
  "uint16 year\n"
  "\n"
  "uint16 UNAVAILABLE=0\n"
  "uint16 MAX=4095";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__DYear__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__DYear__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 270, 270},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__DYear__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__DYear__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
