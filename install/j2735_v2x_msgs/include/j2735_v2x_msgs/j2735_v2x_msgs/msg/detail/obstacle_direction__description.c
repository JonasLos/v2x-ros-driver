// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/ObstacleDirection.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/obstacle_direction__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__ObstacleDirection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb8, 0x5f, 0x5d, 0xb3, 0x38, 0xec, 0x05, 0x81,
      0x94, 0xf7, 0x79, 0x99, 0x37, 0x77, 0xbe, 0x41,
      0xbf, 0x24, 0xce, 0xbe, 0x96, 0xf2, 0xee, 0xe3,
      0x94, 0x83, 0x3d, 0x45, 0xba, 0xb1, 0x56, 0xa7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/angle__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Angle__EXPECTED_HASH = {1, {
    0xd3, 0x71, 0x4d, 0x57, 0xd2, 0xda, 0x35, 0x97,
    0x4c, 0xd1, 0x0c, 0xcf, 0xca, 0xd6, 0x95, 0xb9,
    0x3f, 0xec, 0x8d, 0x61, 0x31, 0xa6, 0x53, 0x16,
    0x25, 0xda, 0x6a, 0x32, 0xc2, 0x83, 0x0c, 0x6d,
  }};
#endif

static char j2735_v2x_msgs__msg__ObstacleDirection__TYPE_NAME[] = "j2735_v2x_msgs/msg/ObstacleDirection";
static char j2735_v2x_msgs__msg__Angle__TYPE_NAME[] = "j2735_v2x_msgs/msg/Angle";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__ObstacleDirection__FIELD_NAME__direction[] = "direction";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__ObstacleDirection__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__ObstacleDirection__FIELD_NAME__direction, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__Angle__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__ObstacleDirection__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__Angle__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__ObstacleDirection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__ObstacleDirection__TYPE_NAME, 36, 36},
      {j2735_v2x_msgs__msg__ObstacleDirection__FIELDS, 1, 1},
    },
    {j2735_v2x_msgs__msg__ObstacleDirection__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Angle__EXPECTED_HASH, j2735_v2x_msgs__msg__Angle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__Angle__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# ObstacleDirection.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# ObstacleDirection ::= Angle\n"
  "# The data is expressed in degrees as azimuth relative to forward direction of vehicle.\n"
  "j2735_v2x_msgs/Angle direction";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__ObstacleDirection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__ObstacleDirection__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 208, 208},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__ObstacleDirection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__ObstacleDirection__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__Angle__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
