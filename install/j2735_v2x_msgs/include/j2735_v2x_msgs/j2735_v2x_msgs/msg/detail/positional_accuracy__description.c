// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PositionalAccuracy.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/positional_accuracy__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PositionalAccuracy__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc9, 0x81, 0xc5, 0xb3, 0x13, 0x72, 0xab, 0xba,
      0xca, 0x5a, 0xf5, 0xcd, 0xc2, 0xa2, 0x2b, 0xc9,
      0xfb, 0xa1, 0x73, 0x73, 0xed, 0x39, 0xf6, 0x8f,
      0x9e, 0xc7, 0x6c, 0xc3, 0xba, 0x5d, 0xfe, 0xdd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__PositionalAccuracy__TYPE_NAME[] = "j2735_v2x_msgs/msg/PositionalAccuracy";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PositionalAccuracy__FIELD_NAME__semi_major[] = "semi_major";
static char j2735_v2x_msgs__msg__PositionalAccuracy__FIELD_NAME__semi_minor[] = "semi_minor";
static char j2735_v2x_msgs__msg__PositionalAccuracy__FIELD_NAME__orientation[] = "orientation";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PositionalAccuracy__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PositionalAccuracy__FIELD_NAME__semi_major, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PositionalAccuracy__FIELD_NAME__semi_minor, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PositionalAccuracy__FIELD_NAME__orientation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__PositionalAccuracy__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PositionalAccuracy__TYPE_NAME, 37, 37},
      {j2735_v2x_msgs__msg__PositionalAccuracy__FIELDS, 3, 3},
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
  "# PositionalAccuracy.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# Used to model the accuracy of the positional determination with respect to each given axis.\n"
  "\n"
  "#PositionalAccuracy ::= SEQUENCE {\n"
  "#   -- NMEA-183 values expressed in strict ASN form\n"
  "#   semiMajor     SemiMajorAxisAccuracy,\n"
  "#   semiMinor     SemiMinorAxisAccuracy,\n"
  "#   orientation   SemiMajorAxisOrientation\n"
  "#   }\n"
  "\n"
  "#SemiMajorAxisAccuracy ::= INTEGER (0..255)\n"
  "#   -- semi-major/semi-minor axis accuracy at one standard dev\n"
  "#   -- range 0-12.7 meter, LSB = .05m\n"
  "#   -- 254 = any value equal or greater than 12.70 meter\n"
  "#   -- 255 = unavailable semi-major axis value\n"
  "#   -- Convert to meter with factor 0.05 when this field is used\n"
  "uint8 semi_major\n"
  "uint8 semi_minor\n"
  "\n"
  "uint8 ACCURACY_UNAVAILABLE = 255\n"
  "uint8 ACCURACY_MAX = 254\n"
  "uint8 ACCURACY_MIN = 0\n"
  "\n"
  "#SemiMajorAxisOrientation ::= INTEGER (0..65535)\n"
  "#   -- orientation of semi-major axis\n"
  "#   -- relative to true north (0~359.9945078786 degrees)\n"
  "#   -- LSB units of 360/65535 deg  = 0.0054932479\n"
  "#   -- a value of 0 shall be 0 degrees\n"
  "#   -- a value of 1 shall be 0.0054932479 degrees\n"
  "#   -- a value of 65534 shall be 359.9945078786 deg\n"
  "#   -- a value of 65535 shall be used for orientation unavailable\n"
  "#   -- Convert to degree with factor 0.0054932479 when this field is used\n"
  "uint16 orientation\n"
  "\n"
  "uint16 ACCURACY_ORIENTATION_UNAVAILABLE = 65535\n"
  "uint16 ACCURACY_ORIENTATION_MAX = 65534\n"
  "uint16 ACCURACY_ORIENTATION_MIN = 0";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PositionalAccuracy__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PositionalAccuracy__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1461, 1461},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PositionalAccuracy__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PositionalAccuracy__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
