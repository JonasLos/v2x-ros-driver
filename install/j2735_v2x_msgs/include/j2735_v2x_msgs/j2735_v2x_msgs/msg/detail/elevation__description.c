// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/Elevation.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/elevation__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__Elevation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x19, 0xc1, 0xbd, 0x79, 0xd5, 0x39, 0xcf, 0x3d,
      0xb4, 0x05, 0x5f, 0xbf, 0xc7, 0xa0, 0x2b, 0x31,
      0x6d, 0x6f, 0x68, 0xe1, 0x6d, 0xbc, 0x72, 0x3e,
      0xde, 0x45, 0xf2, 0x52, 0xeb, 0xf0, 0xca, 0x68,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__Elevation__TYPE_NAME[] = "j2735_v2x_msgs/msg/Elevation";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__Elevation__FIELD_NAME__elevation[] = "elevation";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__Elevation__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__Elevation__FIELD_NAME__elevation, 9, 9},
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
j2735_v2x_msgs__msg__Elevation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__Elevation__TYPE_NAME, 28, 28},
      {j2735_v2x_msgs__msg__Elevation__FIELDS, 1, 1},
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
  "# Elevation.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of Elevation from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# elevation Elevation, -- in 10 cm units\n"
  "# Elevation ::= INTEGER (-4096..61439)\n"
  "#  -- In units of 10 cm steps above or below the reference ellipsoid\n"
  "#  -- Providing a range of -409.5 to + 6143.9 meters\n"
  "#  -- The value -4096 shall be used when Unknown is to be sent\n"
  "#  -- Convert to meter with factor 0.1 when field is used\n"
  "int32 elevation\n"
  "\n"
  "int32 ELEVATION_UNAVAILABLE = -4096\n"
  "int32 ELEVATION_MAX = 61439\n"
  "int32 ELEVATION_MIN = -4095";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__Elevation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__Elevation__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 612, 612},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__Elevation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__Elevation__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
