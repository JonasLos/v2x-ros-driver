// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/OffsetXaxis.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/offset_xaxis__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__OffsetXaxis__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0xdc, 0x93, 0xb3, 0xea, 0x9a, 0x6f, 0x55,
      0x48, 0xa4, 0x37, 0xac, 0x5f, 0xb9, 0x53, 0xa3,
      0x75, 0xd6, 0x9a, 0x8c, 0x24, 0x77, 0x83, 0x67,
      0xb8, 0x05, 0x4a, 0x3c, 0x6a, 0xfb, 0x1a, 0xe5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__OffsetXaxis__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetXaxis";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__OffsetXaxis__FIELD_NAME__choice[] = "choice";
static char j2735_v2x_msgs__msg__OffsetXaxis__FIELD_NAME__small[] = "small";
static char j2735_v2x_msgs__msg__OffsetXaxis__FIELD_NAME__large[] = "large";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__OffsetXaxis__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__OffsetXaxis__FIELD_NAME__choice, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetXaxis__FIELD_NAME__small, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetXaxis__FIELD_NAME__large, 5, 5},
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
j2735_v2x_msgs__msg__OffsetXaxis__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__OffsetXaxis__TYPE_NAME, 30, 30},
      {j2735_v2x_msgs__msg__OffsetXaxis__FIELDS, 3, 3},
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
  "# OffsetXaxis.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# \\t-- A path X offset value for translations of the\n"
  "# \\t-- path's points when creating translated lanes.\n"
  "# \\t-- The values found in the reference lane are\n"
  "# \\t-- all offset based on the X and Y values from\n"
  "# \\t-- the coordinates of the reference lane's\n"
  "# \\t-- initial path point.\n"
  "# offsetXaxis CHOICE {\n"
  "# \\t\\tsmall DrivenLineOffsetSm,\n"
  "# \\t\\tlarge DrivenLineOffsetLg\n"
  "# \\t\\t},\n"
  "\n"
  "\n"
  "uint8 choice\n"
  "uint8 SMALL=0\n"
  "uint8 LARGE=1\n"
  "\n"
  "# The DrivenLineOffsetSmall data element is an integer value expressing the offset in a defined axis from a reference\n"
  "# lane number from which a computed lane is offset.\n"
  "# DrivenLineOffsetSm ::= INTEGER (-2047..2047)\n"
  "# -- LSB units are 1 cm.\n"
  "int16 small\n"
  "\n"
  "\n"
  "# The DE_DrivenLineOffsetLarge data element is an integer value expressing the offset in a defined axis from a\n"
  "# reference lane number from which a computed lane is offset.\n"
  "# DrivenLineOffsetLg ::= INTEGER (-32767..32767)\n"
  "# -- LSB units are 1 cm.\n"
  "int16 large";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__OffsetXaxis__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__OffsetXaxis__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1012, 1012},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__OffsetXaxis__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__OffsetXaxis__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
