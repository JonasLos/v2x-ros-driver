// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/LaneAttributesBike.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/lane_attributes_bike__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__LaneAttributesBike__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb2, 0xb4, 0xa3, 0x7c, 0xdc, 0x2c, 0xa5, 0xf4,
      0x94, 0xed, 0xfb, 0x6a, 0xd0, 0x36, 0x7d, 0x3c,
      0x2a, 0x67, 0xc8, 0xcd, 0xbb, 0x20, 0xc4, 0x26,
      0x95, 0x98, 0x4b, 0xf6, 0x82, 0xe6, 0xdd, 0x76,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__LaneAttributesBike__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesBike";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__LaneAttributesBike__FIELD_NAME__lane_attributes_bike[] = "lane_attributes_bike";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__LaneAttributesBike__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__LaneAttributesBike__FIELD_NAME__lane_attributes_bike, 20, 20},
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
j2735_v2x_msgs__msg__LaneAttributesBike__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__LaneAttributesBike__TYPE_NAME, 37, 37},
      {j2735_v2x_msgs__msg__LaneAttributesBike__FIELDS, 1, 1},
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
  "# LaneAttributesBike.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The LaneAttributes-Bike data element relates specific properties found in a bicycle lane type.\n"
  "#\n"
  "# LaneAttributes-Bike ::= BIT STRING {\n"
  "#\\t-- With bits as defined:\n"
  "#\\tbikeRevocableLane (0),\n"
  "#\\t\\t-- this lane may be activated or not based\n"
  "#\\t\\t-- on the current SPAT message contents\n"
  "#\\t\\t-- if not asserted, the lane is ALWAYS present\n"
  "#\\tpedestrianUseAllowed (1),\n"
  "#\\t\\t-- The path allows pedestrian traffic,\n"
  "#\\t\\t-- if not set, this mode is prohibited\n"
  "#\\tisBikeFlyOverLane (2),\n"
  "#\\t\\t-- path of lane is not at grade\n"
  "#\\tfixedCycleTime (3),\n"
  "#\\t\\t-- the phases use preset times\n"
  "#\\t\\t-- Bits 7~15 reserved and set to zero\n"
  "#\\t} (SIZE (16))\n"
  "\n"
  "uint16 lane_attributes_bike";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__LaneAttributesBike__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__LaneAttributesBike__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 739, 739},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__LaneAttributesBike__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__LaneAttributesBike__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
