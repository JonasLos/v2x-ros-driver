// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/UserSizeAndBehaviour.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/user_size_and_behaviour__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__UserSizeAndBehaviour__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x19, 0x63, 0xc0, 0x50, 0xf7, 0x0e, 0xd2, 0x4f,
      0x2e, 0x88, 0x44, 0xdb, 0x87, 0xa1, 0xb2, 0x9f,
      0x7d, 0x2e, 0x51, 0xd3, 0x5b, 0x26, 0x43, 0x09,
      0x9f, 0xc8, 0xbf, 0xbc, 0x46, 0xa7, 0x89, 0x96,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__UserSizeAndBehaviour__TYPE_NAME[] = "j2735_v2x_msgs/msg/UserSizeAndBehaviour";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__UserSizeAndBehaviour__FIELD_NAME__sizes_and_behaviors[] = "sizes_and_behaviors";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__UserSizeAndBehaviour__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__UserSizeAndBehaviour__FIELD_NAME__sizes_and_behaviors, 19, 19},
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
j2735_v2x_msgs__msg__UserSizeAndBehaviour__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__UserSizeAndBehaviour__TYPE_NAME, 39, 39},
      {j2735_v2x_msgs__msg__UserSizeAndBehaviour__FIELDS, 1, 1},
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
  "# UserSizeAndBehaviour.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of PublicSafetyDirectingTrafficSubType from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# UserSizeAndBehaviour ::= BIT STRING { \n"
  "#    unavailable                     (0),\n"
  "#    smallStature                    (1), -- less than 150 cm high\n"
  "#    largeStature                    (2),\n"
  "#    erraticMoving                   (3), \n"
  "#    slowMoving                      (4)  -- those who move a bit slowly\n"
  "#    } (SIZE (5, ...))\n"
  "\n"
  "# A BIT STRING defining the presence of optional flags.\n"
  "# Compare with bitwise-and\n"
  "# if (sizes_and_behaviors & SMALL_STATURE) etc.\n"
  "# Create with bitwise-or\n"
  "# sizes_and_behaviors = activities | SMALL_STATURE\n"
  "uint8 sizes_and_behaviors\n"
  "\n"
  "uint8 UNAVAILABLE = 0\n"
  "uint8 SMALL_STATURE = 1\n"
  "uint8 LARGE_STATURE = 2\n"
  "uint8 ERRATIC_MOVING = 4\n"
  "uint8 SLOW_MOVING = 8";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__UserSizeAndBehaviour__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__UserSizeAndBehaviour__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 900, 900},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__UserSizeAndBehaviour__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__UserSizeAndBehaviour__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
