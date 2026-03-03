// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/EnabledLaneList.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/enabled_lane_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__EnabledLaneList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0x50, 0xb6, 0x0e, 0xec, 0x47, 0xc5, 0xbc,
      0xfa, 0x91, 0x7b, 0x1b, 0x77, 0x5b, 0xe3, 0xa3,
      0xff, 0x81, 0xb2, 0xcd, 0x57, 0x89, 0x62, 0xbd,
      0x7b, 0x79, 0xd7, 0xd6, 0x97, 0xc1, 0x28, 0x95,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__EnabledLaneList__TYPE_NAME[] = "j2735_v2x_msgs/msg/EnabledLaneList";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__EnabledLaneList__FIELD_NAME__lane_id_list[] = "lane_id_list";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__EnabledLaneList__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__EnabledLaneList__FIELD_NAME__lane_id_list, 12, 12},
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
j2735_v2x_msgs__msg__EnabledLaneList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__EnabledLaneList__TYPE_NAME, 34, 34},
      {j2735_v2x_msgs__msg__EnabledLaneList__FIELDS, 1, 1},
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
  "# EnabledLaneList.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The Enabled Lane List data frame is a sequence of lane IDs for lane objects that are activated in the current map\n"
  "# configuration. These lanes, unlike most lanes, have their RevocableLane bit set to one (asserted). Such lanes are not\n"
  "# considered to be part of the current map unless they are in the Enabled Lane List. This concept is used to describe all the\n"
  "# possible regulatory states for a given physical lane.\n"
  "#\n"
  "# EnabledLaneList ::= SEQUENCE (SIZE(1..16)) OF LaneID\n"
  "#-- The unique ID numbers for each\n"
  "#-- lane object which is 'active'\n"
  "#-- as part of the dynamic map contents.\n"
  "\n"
  "# LaneID ::= INTEGER (0..255)\n"
  "# -- the value 0 shall be used when the lane ID is not available or not known\n"
  "# -- the value 255 is reserved for future use\n"
  "uint16[] lane_id_list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__EnabledLaneList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__EnabledLaneList__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 855, 855},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__EnabledLaneList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__EnabledLaneList__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
