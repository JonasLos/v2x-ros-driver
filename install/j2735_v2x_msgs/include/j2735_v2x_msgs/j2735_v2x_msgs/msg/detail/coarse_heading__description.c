// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/CoarseHeading.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/coarse_heading__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__CoarseHeading__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1f, 0x65, 0xfa, 0x36, 0x68, 0x7f, 0xac, 0x8e,
      0xcb, 0x56, 0x01, 0xff, 0x00, 0x6c, 0x22, 0x72,
      0xab, 0xbc, 0x40, 0xe8, 0x13, 0xef, 0xf1, 0x58,
      0xfb, 0x43, 0xd1, 0x0e, 0x99, 0x3d, 0xb9, 0xc8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__CoarseHeading__TYPE_NAME[] = "j2735_v2x_msgs/msg/CoarseHeading";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__CoarseHeading__FIELD_NAME__heading[] = "heading";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__CoarseHeading__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__CoarseHeading__FIELD_NAME__heading, 7, 7},
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
j2735_v2x_msgs__msg__CoarseHeading__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__CoarseHeading__TYPE_NAME, 32, 32},
      {j2735_v2x_msgs__msg__CoarseHeading__FIELDS, 1, 1},
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
  "# CoarseHeading.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of CoarseHeading from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# CoarseHeading ::= INTEGER (0..240)\n"
  "#    -- Where the LSB is in units of 1.5 degrees \n"
  "#    -- over a range of 0~358.5 degrees\n"
  "#    -- the value 240 shall be used for unavailable\n"
  "\n"
  "uint8 heading\n"
  "\n"
  "uint8 MIN=0\n"
  "uint8 MAX=239\n"
  "\n"
  "uint8 UNAVAILABLE=240";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__CoarseHeading__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__CoarseHeading__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 432, 432},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__CoarseHeading__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__CoarseHeading__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
