// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/LaneSharing.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/lane_sharing__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__LaneSharing__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x54, 0x9a, 0x83, 0xb0, 0x4b, 0x77, 0x93, 0x90,
      0x5e, 0x94, 0xac, 0x40, 0x29, 0x27, 0x60, 0x70,
      0x88, 0x1d, 0x8f, 0x5f, 0xc9, 0x40, 0xb4, 0x02,
      0x2e, 0x03, 0xa9, 0x21, 0xd0, 0x60, 0xb2, 0x07,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__LaneSharing__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneSharing";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__LaneSharing__FIELD_NAME__lane_sharing[] = "lane_sharing";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__LaneSharing__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__LaneSharing__FIELD_NAME__lane_sharing, 12, 12},
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
j2735_v2x_msgs__msg__LaneSharing__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__LaneSharing__TYPE_NAME, 30, 30},
      {j2735_v2x_msgs__msg__LaneSharing__FIELDS, 1, 1},
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
  "# LaneSharing.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "#\n"
  "# LaneSharing ::= BIT STRING {\n"
  "# -- With bits as defined:\n"
  "# overlappingLaneDescriptionProvided (0),\n"
  "# -- Assert when another lane object is present to describe the\n"
  "# -- path of the overlapping shared lane\n"
  "# -- this construct is not used for lane objects which simply cross\n"
  "# multipleLanesTreatedAsOneLane(1),\n"
  "# -- Assert if the lane object path and width details represents\n"
  "# -- multiple lanes within it that are not further described\n"
  "# -- Various modes and type of traffic that may share this lane:\n"
  "# otherNonMotorizedTrafficTypes (2), -- horse drawn etc.\n"
  "# individualMotorizedVehicleTraffic (3),\n"
  "# busVehicleTraffic (4),\n"
  "# taxiVehicleTraffic (5),\n"
  "# pedestriansTraffic (6),\n"
  "# cyclistVehicleTraffic (7),\n"
  "# trackedVehicleTraffic (8),\n"
  "# pedestrianTraffic (9)\n"
  "# } (SIZE (10))\n"
  "# -- All zeros would indicate 'not shared' and 'not overlapping'\n"
  "\n"
  "uint16 lane_sharing";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__LaneSharing__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__LaneSharing__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 950, 950},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__LaneSharing__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__LaneSharing__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
