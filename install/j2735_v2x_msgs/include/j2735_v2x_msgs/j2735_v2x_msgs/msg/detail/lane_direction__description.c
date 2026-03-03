// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/LaneDirection.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/lane_direction__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__LaneDirection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa9, 0xbc, 0x9d, 0x98, 0x88, 0xba, 0x31, 0xbe,
      0x5a, 0x03, 0x5f, 0xaf, 0xa3, 0xf2, 0xf5, 0x1e,
      0x7e, 0xa3, 0x58, 0xa9, 0xca, 0xb9, 0xf6, 0xb5,
      0xf2, 0x87, 0xc6, 0xbf, 0x95, 0xab, 0x92, 0x99,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__LaneDirection__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneDirection";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__LaneDirection__FIELD_NAME__lane_direction[] = "lane_direction";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__LaneDirection__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__LaneDirection__FIELD_NAME__lane_direction, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__LaneDirection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__LaneDirection__TYPE_NAME, 32, 32},
      {j2735_v2x_msgs__msg__LaneDirection__FIELDS, 1, 1},
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
  "# LaneDirection.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The LaneDirection data element is used to denote the allowed direction of travel over a lane object. By convention,\n"
  "# the lane object is always described from the stop line outwards away from the intersection. Therefore, the ingress\n"
  "# direction is from the end of the path to the stop line and the egress direction is from the stop line outwards. It should be\n"
  "# noted that some lane objects are not used for travel and that some lane objects allow bi-directional travel.\n"
  "#\n"
  "# LaneDirection ::= BIT STRING {\n"
  "# -- With bits as defined:\n"
  "# -- Allowed directions of travel in the lane object\n"
  "# -- All lanes are described from the stop line outwards\n"
  "# ingressPath (0),\n"
  "# -- travel from rear of path to front is allowed\n"
  "# egressPath (1)\n"
  "# -- travel from front of path to rear is allowed\n"
  "# -- Notes: No Travel, i.e. the lane object type does not support travel (medians, curbs, etc.)\n"
  "# is indicated by not asserting any bit value\n"
  "# - Bi-Directional Travel (such as a ped crosswalk) is indicated by asserting both of the bits\n"
  "# } (SIZE (2))\n"
  "\n"
  "uint8 lane_direction";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__LaneDirection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__LaneDirection__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1146, 1146},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__LaneDirection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__LaneDirection__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
