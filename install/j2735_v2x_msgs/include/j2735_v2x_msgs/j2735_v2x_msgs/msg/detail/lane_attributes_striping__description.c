// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/LaneAttributesStriping.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/lane_attributes_striping__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__LaneAttributesStriping__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x99, 0x9e, 0x11, 0xa3, 0xc2, 0xb6, 0xf5, 0x4d,
      0x9e, 0xdb, 0xfa, 0x6b, 0xca, 0xa8, 0xa9, 0x65,
      0xb8, 0xbe, 0x4a, 0xa2, 0x2e, 0xc0, 0xbb, 0x85,
      0x46, 0x3d, 0xb6, 0x18, 0xfb, 0x2b, 0x75, 0xee,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__LaneAttributesStriping__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesStriping";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__LaneAttributesStriping__FIELD_NAME__lane_attributes_striping[] = "lane_attributes_striping";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__LaneAttributesStriping__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__LaneAttributesStriping__FIELD_NAME__lane_attributes_striping, 24, 24},
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
j2735_v2x_msgs__msg__LaneAttributesStriping__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__LaneAttributesStriping__TYPE_NAME, 41, 41},
      {j2735_v2x_msgs__msg__LaneAttributesStriping__FIELDS, 1, 1},
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
  "# The LaneAttributes-Striping data element relates specific properties found\n"
  "# in various types of ground striping lane types.\n"
  "#\n"
  "# LaneAttributes-Striping ::= BIT STRING {\n"
  "# -- With bits as defined:\n"
  "# stripeToConnectingLanesRevocableLane(0),\n"
  "# -- this lane may be activated or not activated based\n"
  "# -- on the current SPAT message contents\n"
  "# -- if not asserted, the lane is ALWAYS present\n"
  "# stripeDrawOnLeft(1),\n"
  "# stripeDrawOnRight(2),\n"
  "# -- which side of lane to mark\n"
  "# stripeToConnectingLanesLeft(3),\n"
  "# stripeToConnectingLanesRight(4),\n"
  "# stripeToConnectingLanesAhead(5)\n"
  "# -- the stripe type should be\n"
  "# -- presented to the user visually\n"
  "# -- to reflect stripes in the\n"
  "# -- intersection for the type of\n"
  "# -- movement indicated\n"
  "# -- Bits 6~15 reserved and set to zero\n"
  "# } (SIZE (16))\n"
  "\n"
  "uint16 lane_attributes_striping";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__LaneAttributesStriping__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__LaneAttributesStriping__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 914, 914},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__LaneAttributesStriping__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__LaneAttributesStriping__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
