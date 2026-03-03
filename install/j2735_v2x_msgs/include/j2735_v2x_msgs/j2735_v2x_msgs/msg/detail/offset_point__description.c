// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/OffsetPoint.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/offset_point__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__OffsetPoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0x61, 0x9d, 0x87, 0x46, 0xff, 0x9e, 0xec,
      0x13, 0x3f, 0x41, 0x79, 0x90, 0xbc, 0xba, 0x80,
      0x53, 0x5d, 0x6a, 0xbe, 0xae, 0x5e, 0x9d, 0x0a,
      0x4b, 0x7f, 0xad, 0x2e, 0xaa, 0x02, 0xbf, 0x01,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__OffsetPoint__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetPoint";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__OffsetPoint__FIELD_NAME__deltax[] = "deltax";
static char j2735_v2x_msgs__msg__OffsetPoint__FIELD_NAME__deltay[] = "deltay";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__OffsetPoint__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__OffsetPoint__FIELD_NAME__deltax, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetPoint__FIELD_NAME__deltay, 6, 6},
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
j2735_v2x_msgs__msg__OffsetPoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__OffsetPoint__TYPE_NAME, 30, 30},
      {j2735_v2x_msgs__msg__OffsetPoint__FIELDS, 2, 2},
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
  "# OffsetPoint.msg\n"
  "#\n"
  "# Part of the CARMA Cloud geo-fence specification not part of the official SAE j2735 standard\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# \n"
  "# @version 0.1\n"
  "#\n"
  "# Description\n"
  "# ...\n"
  "\n"
  "#OffsetPoint ::= SEQUENCE\n"
  "#{\n"
  "#\\tdeltax INTEGER (-32768..32767), -- relative horizontal vertex position in scaled meters\n"
  "#\\tdeltay INTEGER (-32768..32767) -- relative vertical vertex position in scaled meters\n"
  "#}\n"
  "\n"
  "#deltax ::= INTEGER (-32768..32767)\n"
  "int16 deltax\n"
  "\n"
  "#deltay ::= INTEGER (-32768..32767)\n"
  "int16 deltay\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__OffsetPoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__OffsetPoint__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 501, 501},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__OffsetPoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__OffsetPoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
