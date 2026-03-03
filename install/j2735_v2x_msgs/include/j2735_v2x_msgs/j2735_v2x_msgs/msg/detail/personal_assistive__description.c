// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PersonalAssistive.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/personal_assistive__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PersonalAssistive__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x82, 0x7d, 0xbd, 0x5b, 0xbe, 0x06, 0x63, 0xa9,
      0xe1, 0x25, 0xb5, 0x58, 0xda, 0x7f, 0xeb, 0xb9,
      0xee, 0x0a, 0xd4, 0x2d, 0x02, 0x16, 0x20, 0x1b,
      0x6b, 0x27, 0xc0, 0x21, 0x02, 0x11, 0x79, 0x1c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__PersonalAssistive__TYPE_NAME[] = "j2735_v2x_msgs/msg/PersonalAssistive";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PersonalAssistive__FIELD_NAME__types[] = "types";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PersonalAssistive__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PersonalAssistive__FIELD_NAME__types, 5, 5},
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
j2735_v2x_msgs__msg__PersonalAssistive__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PersonalAssistive__TYPE_NAME, 36, 36},
      {j2735_v2x_msgs__msg__PersonalAssistive__FIELDS, 1, 1},
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
  "# PersonalAssistive.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of PersonalAssistive from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# PersonalAssistive::= BIT STRING {\n"
  "#    unavailable    (0),\n"
  "#    otherType      (1),\n"
  "#    vision         (2),\n"
  "#    hearing        (3),\n"
  "#    movement       (4),\n"
  "#    cognition      (5)\n"
  "#    } (SIZE (6, ...))\n"
  "\n"
  "# A BIT STRING defining the presence of optional flags.\n"
  "# Compare with bitwise-and\n"
  "# if (types & OTHER_TYPE) etc.\n"
  "# Create with bitwise-or\n"
  "# types = types | OTHER_TYPE\n"
  "uint8 types\n"
  "\n"
  "uint8 UNAVAILABLE = 0\n"
  "uint8 OTHER_TYPE = 1\n"
  "uint8 VISION = 2\n"
  "uint8 HEARING = 4\n"
  "uint8 MOVEMENT = 8\n"
  "uint8 COGNITION = 16";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PersonalAssistive__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PersonalAssistive__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 704, 704},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PersonalAssistive__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PersonalAssistive__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
