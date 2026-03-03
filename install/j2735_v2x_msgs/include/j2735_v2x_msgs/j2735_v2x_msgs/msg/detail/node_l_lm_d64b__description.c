// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/NodeLLmD64b.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/node_l_lm_d64b__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__NodeLLmD64b__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x12, 0x05, 0x5b, 0xca, 0xb5, 0x09, 0xde, 0x4d,
      0x0f, 0x1f, 0x28, 0xf5, 0xbb, 0x44, 0x66, 0xad,
      0x07, 0xbc, 0xc5, 0x35, 0x3a, 0x3f, 0x11, 0xbb,
      0x6c, 0xfe, 0x2c, 0x00, 0x3f, 0xc9, 0xff, 0xb3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__NodeLLmD64b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeLLmD64b";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__NodeLLmD64b__FIELD_NAME__longitude[] = "longitude";
static char j2735_v2x_msgs__msg__NodeLLmD64b__FIELD_NAME__latitude[] = "latitude";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__NodeLLmD64b__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__NodeLLmD64b__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeLLmD64b__FIELD_NAME__latitude, 8, 8},
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
j2735_v2x_msgs__msg__NodeLLmD64b__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__NodeLLmD64b__TYPE_NAME, 30, 30},
      {j2735_v2x_msgs__msg__NodeLLmD64b__FIELDS, 2, 2},
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
  "# NodeLLmD64b.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# A 64-bit node type with lat-long values expressed in standard SAE one tenth of a micro degree.\n"
  "\n"
  "# Node-LLmD-64b ::= SEQUENCE {\n"
  "# lon Longitude,\n"
  "# lat Latitude\n"
  "# }\n"
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
  "\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__NodeLLmD64b__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__NodeLLmD64b__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 888, 888},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__NodeLLmD64b__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__NodeLLmD64b__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
