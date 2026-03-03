// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/NodeAttributeXY.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/node_attribute_xy__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__NodeAttributeXY__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb1, 0xfa, 0x33, 0x8f, 0x27, 0x8e, 0x54, 0xa9,
      0x2c, 0x2f, 0x45, 0x89, 0xb2, 0x56, 0x29, 0x88,
      0x35, 0x5a, 0x1c, 0x4f, 0x8e, 0x79, 0xc5, 0x19,
      0xc1, 0x56, 0xbc, 0x3e, 0x7e, 0x75, 0xa7, 0x52,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__NodeAttributeXY__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeAttributeXY";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__NodeAttributeXY__FIELD_NAME__node_attribute_xy[] = "node_attribute_xy";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__NodeAttributeXY__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__NodeAttributeXY__FIELD_NAME__node_attribute_xy, 17, 17},
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
j2735_v2x_msgs__msg__NodeAttributeXY__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__NodeAttributeXY__TYPE_NAME, 34, 34},
      {j2735_v2x_msgs__msg__NodeAttributeXY__FIELDS, 1, 1},
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
  "# NodeAttributeXY.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The DE_NodeAttributeXY data element is an enumerated list of attributes which can pertain to the current node\n"
  "# point.\n"
  "#\n"
  "# NodeAttributeXY ::= ENUMERATED {\n"
  "# -- Various values which pertain only to the current node point\n"
  "#\n"
  "# -- General Items\n"
  "# reserved,\n"
  "# stopLine,\\t\\t-- point where a mid-path stop line exists\n"
  "# \\t\\t\\t-- See also 'do not block' for segments\n"
  "# -- Path finish details\n"
  "# roundedCapStyleA, \\t-- Used to control final path rounded end shape\n"
  "# \\t\\t   \\t-- with edge of curve at final point in a circle\n"
  "# roundedCapStyleB,\\t-- Used to control final path rounded end shape\n"
  "# \\t\\t\\t-- with edge of curve extending 50% of width past\n"
  "# \\t\\t\\t-- final point in a circle\n"
  "#\n"
  "# -- Topography Points (items with no concept of a distance along the path)\n"
  "# mergePoint,\\t\\t-- Japan merge with 1 or more lanes\n"
  "# divergePoint,\\t\\t-- Japan diverge with 1 or more lanes\n"
  "# downstreamStopLine,\\t-- Japan style downstream intersection\n"
  "# \\t\\t\\t-- (a 2nd intersection) stop line\n"
  "# downstreamStartNode, \\t-- Japan style downstream intersection\n"
  "# \\t\\t\\t-- (a 2nd intersection) start node\n"
  "#\n"
  "# -- Pedestrian Support Attributes\n"
  "# closedToTraffic,\\t-- where a pedestrian may NOT go\n"
  "# \\t\\t\\t-- to be used during construction events\n"
  "# safeIsland,\\t\\t-- a pedestrian safe stopping point\n"
  "# \\t\\t\\t-- also called a traffic island\n"
  "# \\t\\t\\t-- This usage described a point feature on a path,\n"
  "# \\t\\t\\t-- other entries can describe a path\n"
  "# curbPresentAtStepOff, \\t-- the sidewalk to street curb is NOT\n"
  "# \\t\\t\\t-- angled where it meets the edge of the\n"
  "# \\t\\t\\t-- roadway (user must step up/down)\n"
  "# -- Lane geometry details (see standard for defined shapes)\n"
  "# hydrantPresent,\\t\\t-- Or other services access\n"
  "# ...\n"
  "# }\n"
  "\n"
  "\n"
  "uint8 node_attribute_xy\n"
  "\n"
  "# enumeration values for status:\n"
  "uint8 RESERVED=0\n"
  "uint8 STOPLINE=1\n"
  "uint8 ROUNDEDCAPSTYLEA=2\n"
  "uint8 ROUNDEDCAPSTYLEB=3\n"
  "uint8 MERGEPOINT=4\n"
  "uint8 DIVERGEPOINT=5\n"
  "uint8 DOWNSTREAMSTOPLINE=6\n"
  "uint8 DOWNSTREAMSTARTNODE=7\n"
  "uint8 CLOSEDTOTRAFFIC=8\n"
  "uint8 SAFEISLAND=9\n"
  "uint8 CURBPRESENTATSTEPOFF=10\n"
  "uint8 HYDRANTPRESENT=11";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__NodeAttributeXY__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__NodeAttributeXY__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2069, 2069},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__NodeAttributeXY__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__NodeAttributeXY__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
