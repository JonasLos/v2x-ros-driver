// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/Longitude.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/longitude__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__Longitude__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x40, 0xb0, 0xe5, 0x07, 0xbd, 0xa2, 0x4c, 0x74,
      0xd8, 0x9a, 0x7e, 0x0b, 0x3c, 0x76, 0x43, 0x9b,
      0xf1, 0xf8, 0x59, 0x6b, 0x9b, 0x45, 0x13, 0x55,
      0x9f, 0x42, 0x28, 0x49, 0x40, 0x9f, 0x0b, 0x00,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__Longitude__TYPE_NAME[] = "j2735_v2x_msgs/msg/Longitude";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__Longitude__FIELD_NAME__longitude[] = "longitude";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__Longitude__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__Longitude__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__Longitude__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__Longitude__TYPE_NAME, 28, 28},
      {j2735_v2x_msgs__msg__Longitude__FIELDS, 1, 1},
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
  "# Longitude.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of Longitude from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# long Longitude, -- in 1/10th micro degrees\n"
  "# Longitude ::= INTEGER (-1799999999..1800000001)\n"
  "#  -- LSB = 1/10 micro degree\n"
  "#  -- Providing a range of plus-minus 180 degrees\n"
  "#  -- Convert to degree with factor 0.0000001 when field is used\n"
  "int32 longitude\n"
  "\n"
  "int32 LONGITUDE_UNAVAILABLE = 1800000001\n"
  "int32 LONGITUDE_MAX = 1800000000\n"
  "int32 LONGITUDE_MIN = -1799999999";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__Longitude__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__Longitude__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 545, 545},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__Longitude__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__Longitude__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
