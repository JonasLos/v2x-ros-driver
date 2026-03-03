// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/LaneAttributesBarrier.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/lane_attributes_barrier__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__LaneAttributesBarrier__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfe, 0x33, 0x2c, 0x3b, 0x4d, 0xf1, 0x7a, 0xa7,
      0x34, 0xcb, 0x25, 0x5f, 0xd7, 0xa0, 0xc2, 0x4e,
      0x40, 0x93, 0x64, 0xc2, 0x4d, 0x89, 0xa2, 0xc5,
      0xff, 0x6c, 0xa8, 0xd4, 0x16, 0xf0, 0xcc, 0xbe,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__LaneAttributesBarrier__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesBarrier";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__LaneAttributesBarrier__FIELD_NAME__lane_attributes_barrier[] = "lane_attributes_barrier";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__LaneAttributesBarrier__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__LaneAttributesBarrier__FIELD_NAME__lane_attributes_barrier, 23, 23},
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
j2735_v2x_msgs__msg__LaneAttributesBarrier__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__LaneAttributesBarrier__TYPE_NAME, 40, 40},
      {j2735_v2x_msgs__msg__LaneAttributesBarrier__FIELDS, 1, 1},
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
  "# LaneAttributesBarrier.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The LaneAttributes-Barrier data element relates specific properties found in a Barrier\n"
  "# or Median lane type (a type of lane object used to separate traffic lanes).\n"
  "#\n"
  "# LaneAttributes-Barrier ::= BIT STRING {\n"
  "# -- With bits as defined:\n"
  "# median-RevocableLane (0),\n"
  "# -- this lane may be activated or not based\n"
  "# -- on the current SPAT message contents\n"
  "# -- if not asserted, the lane is ALWAYS present\n"
  "# median (1),\n"
  "# whiteLineHashing (2),\n"
  "# stripedLines (3),\n"
  "# doubleStripedLines (4),\n"
  "# trafficCones (5),\n"
  "# constructionBarrier(6),\n"
  "# trafficChannels(7),\n"
  "# lowCurbs(8),\n"
  "# highCurbs(9)\n"
  "# -- Bits 10~15 reserved and set to zero\n"
  "# } (SIZE (16))\n"
  "\n"
  "uint16 lane_attributes_barrier";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__LaneAttributesBarrier__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__LaneAttributesBarrier__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 772, 772},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__LaneAttributesBarrier__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__LaneAttributesBarrier__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
