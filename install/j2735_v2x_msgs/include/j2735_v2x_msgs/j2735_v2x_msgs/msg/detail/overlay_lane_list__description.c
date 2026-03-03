// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/OverlayLaneList.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/overlay_lane_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__OverlayLaneList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa4, 0xe2, 0xb6, 0xac, 0xe3, 0x55, 0x0b, 0x6c,
      0x43, 0x1c, 0x18, 0x71, 0x34, 0x15, 0x4f, 0x7e,
      0xc7, 0x92, 0xbd, 0x04, 0x42, 0x47, 0x07, 0x7f,
      0xaa, 0x41, 0x89, 0x62, 0x18, 0xa8, 0x57, 0x32,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__OverlayLaneList__TYPE_NAME[] = "j2735_v2x_msgs/msg/OverlayLaneList";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__OverlayLaneList__FIELD_NAME__overlay_lane_list[] = "overlay_lane_list";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__OverlayLaneList__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__OverlayLaneList__FIELD_NAME__overlay_lane_list, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__OverlayLaneList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__OverlayLaneList__TYPE_NAME, 34, 34},
      {j2735_v2x_msgs__msg__OverlayLaneList__FIELDS, 1, 1},
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
  "# OverlayLaneList.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The Overlay Lane List data frame is a sequence of lane IDs which refers to lane objects that overlap or overlay the\n"
  "# current lane's spatial path.\n"
  "#  OverlayLaneList ::= SEQUENCE (SIZE(1..5)) OF LaneID\n"
  "# -- The unique ID numbers for any lane object which have\n"
  "# -- spatial paths that overlay (run on top of, and not\n"
  "# -- simply cross with) the current lane.\n"
  "# -- Such as a train path that overlays a motor vehicle\n"
  "# -- lane object for a roadway segment.\n"
  "\n"
  "# LaneID ::= INTEGER (0..255)\n"
  "# -- the value 0 shall be used when the lane ID is\n"
  "# -- not available or not known\n"
  "# -- the value 255 is reserved for future use\n"
  "uint16[] overlay_lane_list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__OverlayLaneList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__OverlayLaneList__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 736, 736},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__OverlayLaneList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__OverlayLaneList__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
