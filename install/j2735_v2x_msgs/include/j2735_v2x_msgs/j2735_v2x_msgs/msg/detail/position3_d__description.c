// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/Position3D.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/position3_d__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__Position3D__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa1, 0x45, 0x55, 0x07, 0x95, 0x8a, 0xec, 0x9b,
      0x3c, 0x0d, 0xac, 0x63, 0x0e, 0x0a, 0xb4, 0x03,
      0x4d, 0xd7, 0x9b, 0xa9, 0x75, 0x33, 0x32, 0x89,
      0x3e, 0xc8, 0x3f, 0x12, 0xe3, 0x02, 0xdd, 0x5c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__Position3D__TYPE_NAME[] = "j2735_v2x_msgs/msg/Position3D";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__Position3D__FIELD_NAME__latitude[] = "latitude";
static char j2735_v2x_msgs__msg__Position3D__FIELD_NAME__longitude[] = "longitude";
static char j2735_v2x_msgs__msg__Position3D__FIELD_NAME__elevation[] = "elevation";
static char j2735_v2x_msgs__msg__Position3D__FIELD_NAME__elevation_exists[] = "elevation_exists";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__Position3D__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__Position3D__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Position3D__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Position3D__FIELD_NAME__elevation, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Position3D__FIELD_NAME__elevation_exists, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__Position3D__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__Position3D__TYPE_NAME, 29, 29},
      {j2735_v2x_msgs__msg__Position3D__FIELDS, 4, 4},
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
  "# Position3D.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "# Provides a precise location in the WGS-84 coordinate system, from which short offsets may be used\n"
  "# to create additional data using a flat earth projection centered on this location.\n"
  "\n"
  "# Position3D ::= SEQUENCE {\n"
  "\n"
  "#Latitude ::= INTEGER (-900000000..900000001)\n"
  "#  -- LSB = 1/10 micro degree\n"
  "#  -- Providing a range of plus-minus 90 degrees\n"
  "#  -- Convert to degree with factor 0.0000001 when field is used\n"
  "int32 latitude\n"
  "\n"
  "int32 LATITUDE_UNAVAILABLE = 900000001\n"
  "int32 LATITUDE_MAX = 900000000\n"
  "int32 LATITUDE_MIN = -900000000\n"
  "\n"
  "#Longitude ::= INTEGER (-1799999999..1800000001)\n"
  "#  -- LSB = 1/10 micro degree\n"
  "#  -- Providing a range of plus-minus 180 degrees\n"
  "#  -- Convert to degree with factor 0.0000001 when field is used\n"
  "int32 longitude\n"
  "\n"
  "int32 LONGITUDE_UNAVAILABLE = 1800000001\n"
  "int32 LONGITUDE_MAX = 1800000000\n"
  "int32 LONGITUDE_MIN = -1799999999\n"
  "\n"
  "#Elevation ::= INTEGER (-4096..61439)\n"
  "#  -- In units of 10 cm steps above or below the reference ellipsoid\n"
  "#  -- Providing a range of -409.5 to + 6143.9 meters\n"
  "#  -- The value -4096 shall be used when Unknown is to be sent\n"
  "#  -- Convert to meter with factor 0.1 when field is used\n"
  "int32 elevation\n"
  "bool elevation_exists\n"
  "\n"
  "int32 ELEVATION_UNAVAILABLE = -4096\n"
  "int32 ELEVATION_MAX = 61439\n"
  "int32 ELEVATION_MIN = -4095\n"
  "\n"
  "#TODO: RegionalExtensions are not yet implemented in asn1c\n"
  "# regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-Position3D}} OPTIONAL,";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__Position3D__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__Position3D__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1493, 1493},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__Position3D__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__Position3D__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
