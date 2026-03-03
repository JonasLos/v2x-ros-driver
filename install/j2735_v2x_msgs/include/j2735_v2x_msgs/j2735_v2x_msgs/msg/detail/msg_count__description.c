// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/MsgCount.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/msg_count__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__MsgCount__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x74, 0xb3, 0x08, 0xa5, 0xf9, 0x1f, 0xf9, 0xf3,
      0xff, 0xf5, 0x6d, 0x56, 0xef, 0xde, 0xcb, 0x89,
      0x80, 0x05, 0x23, 0x87, 0x01, 0x57, 0x54, 0xeb,
      0x37, 0x28, 0x26, 0x8c, 0x04, 0xbf, 0xe8, 0x0e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__MsgCount__TYPE_NAME[] = "j2735_v2x_msgs/msg/MsgCount";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__MsgCount__FIELD_NAME__msg_cnt[] = "msg_cnt";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__MsgCount__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__MsgCount__FIELD_NAME__msg_cnt, 7, 7},
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
j2735_v2x_msgs__msg__MsgCount__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__MsgCount__TYPE_NAME, 27, 27},
      {j2735_v2x_msgs__msg__MsgCount__FIELDS, 1, 1},
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
  "# MsgCount.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of MsgCount from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# MsgCount ::= INTEGER (0..127)\n"
  "uint8 msg_cnt\n"
  "\n"
  "uint8 MSG_COUNT_MAX = 127";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__MsgCount__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__MsgCount__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 251, 251},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__MsgCount__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__MsgCount__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
