// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/CoefficientOfFriction.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/coefficient_of_friction__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__CoefficientOfFriction__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x17, 0xb9, 0x03, 0x58, 0x0f, 0x27, 0x4b, 0xb4,
      0xc0, 0xde, 0x44, 0xf7, 0x0f, 0x12, 0x8b, 0x55,
      0xb7, 0xf8, 0x93, 0x74, 0xe2, 0x31, 0x51, 0x61,
      0x4e, 0xf5, 0xf7, 0x54, 0xe3, 0x7c, 0x81, 0xc6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__CoefficientOfFriction__TYPE_NAME[] = "j2735_v2x_msgs/msg/CoefficientOfFriction";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__CoefficientOfFriction__FIELD_NAME__coefficient[] = "coefficient";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__CoefficientOfFriction__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__CoefficientOfFriction__FIELD_NAME__coefficient, 11, 11},
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
j2735_v2x_msgs__msg__CoefficientOfFriction__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__CoefficientOfFriction__TYPE_NAME, 40, 40},
      {j2735_v2x_msgs__msg__CoefficientOfFriction__FIELDS, 1, 1},
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
  "# CoefficientOfFriction.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# CoefficientOfFriction ::= INTEGER (0..50) \n"
  "#    -- where 0 = 0.00 micro (frictionless), also used when data is unavailable \n"
  "#    -- and  50 = 1.00 micro, in steps of 0.02\n"
  "uint8 coefficient\n"
  "\n"
  "uint8 COEFFICIENT_MIN=0\n"
  "uint8 COEFFICIENT_MAX=50\n"
  "uint8 COEFFICIENT_UNAVAILABLE=0";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__CoefficientOfFriction__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__CoefficientOfFriction__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 336, 336},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__CoefficientOfFriction__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__CoefficientOfFriction__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
