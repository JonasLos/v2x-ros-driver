// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/AmbientAirPressure.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/ambient_air_pressure__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__AmbientAirPressure__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0xe8, 0x92, 0x8c, 0x64, 0x96, 0x77, 0xa0,
      0xa8, 0xea, 0x7a, 0x14, 0x4d, 0x28, 0x7b, 0xb5,
      0x87, 0x25, 0x77, 0x5d, 0x1d, 0x2d, 0x4e, 0x6b,
      0x5c, 0xea, 0x64, 0x76, 0x1d, 0xa6, 0x09, 0xae,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__AmbientAirPressure__TYPE_NAME[] = "j2735_v2x_msgs/msg/AmbientAirPressure";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__AmbientAirPressure__FIELD_NAME__pressure[] = "pressure";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__AmbientAirPressure__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__AmbientAirPressure__FIELD_NAME__pressure, 8, 8},
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
j2735_v2x_msgs__msg__AmbientAirPressure__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__AmbientAirPressure__TYPE_NAME, 37, 37},
      {j2735_v2x_msgs__msg__AmbientAirPressure__FIELDS, 1, 1},
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
  "# AmbientAirPressure.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# AmbientAirPressure ::= INTEGER (0..255) \n"
  "#    -- 8 Bits in hPa starting at 580 with a resolution of \n"
  "#    -- 2 hPa resulting in a range of 580 to 1088\n"
  "uint8 pressure\n"
  "\n"
  "uint8 PRESSURE_MIN = 0\n"
  "uint8 PRESSURE_MAX = 255\n"
  "uint8 PRESSURE_UNAVAILABLE = 0";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__AmbientAirPressure__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__AmbientAirPressure__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 308, 308},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__AmbientAirPressure__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__AmbientAirPressure__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
