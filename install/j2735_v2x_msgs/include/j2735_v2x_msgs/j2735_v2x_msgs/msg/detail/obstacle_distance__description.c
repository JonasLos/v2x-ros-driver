// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/ObstacleDistance.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/obstacle_distance__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__ObstacleDistance__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x62, 0x60, 0x60, 0xdf, 0xe4, 0xec, 0x12, 0x67,
      0x57, 0xbc, 0x0d, 0x09, 0x84, 0xa5, 0xe7, 0x56,
      0xfb, 0x6b, 0xbb, 0x44, 0xfa, 0xb3, 0x21, 0x46,
      0x24, 0xb3, 0x3f, 0xca, 0x51, 0x58, 0x40, 0xe7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__ObstacleDistance__TYPE_NAME[] = "j2735_v2x_msgs/msg/ObstacleDistance";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__ObstacleDistance__FIELD_NAME__distance[] = "distance";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__ObstacleDistance__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__ObstacleDistance__FIELD_NAME__distance, 8, 8},
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
j2735_v2x_msgs__msg__ObstacleDistance__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__ObstacleDistance__TYPE_NAME, 35, 35},
      {j2735_v2x_msgs__msg__ObstacleDistance__FIELDS, 1, 1},
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
  "# ObstacleDistance.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# ObstacleDistance ::= INTEGER (0..32767) -- LSB units of meters\n"
  "uint16 distance\n"
  "\n"
  "uint16 DISTANCE_MIN = 0\n"
  "uint16 DISTANCE_MAX = 32767";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__ObstacleDistance__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__ObstacleDistance__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 192, 192},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__ObstacleDistance__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__ObstacleDistance__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
