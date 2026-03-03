// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/LaneAttributesSidewalk.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/lane_attributes_sidewalk__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__LaneAttributesSidewalk__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd3, 0xcc, 0xa3, 0x33, 0x7d, 0xb9, 0x67, 0x06,
      0x49, 0x6f, 0xe3, 0x00, 0x95, 0x35, 0x8d, 0xec,
      0x1c, 0x3e, 0x47, 0x68, 0x65, 0x64, 0x44, 0x1c,
      0xad, 0x65, 0xcd, 0xc7, 0x5f, 0xf4, 0xe8, 0xda,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__LaneAttributesSidewalk__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesSidewalk";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__LaneAttributesSidewalk__FIELD_NAME__lane_attributes_sidewalk[] = "lane_attributes_sidewalk";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__LaneAttributesSidewalk__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__LaneAttributesSidewalk__FIELD_NAME__lane_attributes_sidewalk, 24, 24},
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
j2735_v2x_msgs__msg__LaneAttributesSidewalk__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__LaneAttributesSidewalk__TYPE_NAME, 41, 41},
      {j2735_v2x_msgs__msg__LaneAttributesSidewalk__FIELDS, 1, 1},
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
  "# LaneAttributesSidewalk.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The LaneAttributes-Sidewalk data element relates specific properties found in a sidewalk lane type\n"
  "#\n"
  "# LaneAttributes-Sidewalk ::= BIT STRING {\n"
  "# -- With bits as defined:\n"
  "# sidewalk-RevocableLane (0),\n"
  "# -- this lane may be activated or not based\n"
  "# -- on the current SPAT message contents\n"
  "# -- if not asserted, the lane is ALWAYS present\n"
  "# bicyleUseAllowed (1),\n"
  "# -- The path allows bicycle traffic,\n"
  "# -- if not set, this mode is prohibited\n"
  "# isSidewalkFlyOverLane (2),\n"
  "# -- path of lane is not at grade\n"
  "# walkBikes (3)\n"
  "# -- bike traffic must dismount and walk\n"
  "# -- Bits 4~15 reserved and set to zero\n"
  "# } (SIZE (16))\n"
  "\n"
  "uint16 lane_attributes_sidewalk";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__LaneAttributesSidewalk__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__LaneAttributesSidewalk__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 751, 751},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__LaneAttributesSidewalk__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__LaneAttributesSidewalk__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
