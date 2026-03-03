// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/DOffset.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/d_offset__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__DOffset__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa9, 0xed, 0x8e, 0x6b, 0x5e, 0x57, 0x73, 0x09,
      0x5e, 0xcb, 0x92, 0xee, 0xd7, 0xd0, 0x38, 0x73,
      0xfc, 0x10, 0xea, 0x2d, 0x26, 0x25, 0xdc, 0x0a,
      0x23, 0x91, 0xf1, 0x3d, 0x0a, 0xbf, 0x62, 0x84,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__DOffset__TYPE_NAME[] = "j2735_v2x_msgs/msg/DOffset";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__DOffset__FIELD_NAME__offset_minute[] = "offset_minute";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__DOffset__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__DOffset__FIELD_NAME__offset_minute, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__DOffset__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__DOffset__TYPE_NAME, 26, 26},
      {j2735_v2x_msgs__msg__DOffset__FIELDS, 1, 1},
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
  "# DOffset.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of DOffset from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# DOffset ::= INTEGER (-840..840) -- units of minutes from UTC time\n"
  "\n"
  "int16 offset_minute\n"
  "\n"
  "int16 MIN=-840\n"
  "int16 MAX=840\n"
  "int16 UNAVAILABLE=0";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__DOffset__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__DOffset__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 315, 315},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__DOffset__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__DOffset__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
