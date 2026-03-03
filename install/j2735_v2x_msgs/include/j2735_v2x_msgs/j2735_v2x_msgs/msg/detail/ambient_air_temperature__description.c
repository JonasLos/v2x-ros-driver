// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/AmbientAirTemperature.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/ambient_air_temperature__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__AmbientAirTemperature__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x78, 0xc6, 0x97, 0xb3, 0x30, 0x99, 0x5d, 0xc4,
      0x98, 0x3f, 0x9f, 0xb3, 0x0d, 0xff, 0x44, 0x15,
      0x79, 0x62, 0x7b, 0xc7, 0x41, 0xf1, 0xa2, 0xe6,
      0xed, 0x57, 0x8b, 0x6b, 0xb3, 0x20, 0x81, 0x69,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__AmbientAirTemperature__TYPE_NAME[] = "j2735_v2x_msgs/msg/AmbientAirTemperature";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__AmbientAirTemperature__FIELD_NAME__temperature[] = "temperature";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__AmbientAirTemperature__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__AmbientAirTemperature__FIELD_NAME__temperature, 11, 11},
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
j2735_v2x_msgs__msg__AmbientAirTemperature__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__AmbientAirTemperature__TYPE_NAME, 40, 40},
      {j2735_v2x_msgs__msg__AmbientAirTemperature__FIELDS, 1, 1},
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
  "# AmbientAirTemperature.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# AmbientAirTemperature ::= INTEGER (0..191) -- in deg C with a -40 offset\n"
  "#     -- The value 191 shall indicate an unknown value\n"
  "\n"
  "uint8 temperature \n"
  "\n"
  "uint8 TERMPERATURE_MIN=0\n"
  "uint8 TEMPERATURE_MAX=190\n"
  "uint8 TEMPERATURE_UNKNOWN=191";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__AmbientAirTemperature__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__AmbientAirTemperature__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 295, 295},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__AmbientAirTemperature__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__AmbientAirTemperature__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
