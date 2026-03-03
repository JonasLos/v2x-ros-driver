// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/DayOfWeek.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/day_of_week__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__DayOfWeek__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe6, 0x6d, 0xfc, 0xf2, 0x53, 0xb1, 0x7a, 0x3b,
      0xbb, 0x47, 0xca, 0xb9, 0x9e, 0x2d, 0x6a, 0x89,
      0x8a, 0x23, 0x6f, 0x84, 0x90, 0xea, 0x22, 0xee,
      0x89, 0xcf, 0xb4, 0x5b, 0x39, 0x9a, 0xdc, 0xe1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__DayOfWeek__TYPE_NAME[] = "j2735_v2x_msgs/msg/DayOfWeek";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__DayOfWeek__FIELD_NAME__dow[] = "dow";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__DayOfWeek__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__DayOfWeek__FIELD_NAME__dow, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__DayOfWeek__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__DayOfWeek__TYPE_NAME, 28, 28},
      {j2735_v2x_msgs__msg__DayOfWeek__FIELDS, 1, 1},
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
  "# DayOfWeek.msg\n"
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
  "# DayOfWeek ::= BIT STRING //only J\n"
  "# {\n"
  "# \\tsun (6), \n"
  "# \\tmon (5), \n"
  "# \\ttue (4), \n"
  "# \\twed (3), \n"
  "# \\tthu (2), \n"
  "# \\tfri (1), \n"
  "# \\tsat (0)\n"
  "# }\n"
  "\n"
  "uint8[7] dow\n"
  "\n"
  "# enumeration values for day of week\n"
  "uint8 SUN = 6  \n"
  "uint8 MON = 5\n"
  "uint8 TUE = 4  \n"
  "uint8 WED = 3  \n"
  "uint8 THU = 2  \n"
  "uint8 FRI = 1  \n"
  "uint8 SAT = 0";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__DayOfWeek__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__DayOfWeek__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 480, 480},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__DayOfWeek__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__DayOfWeek__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
