// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/LaneAttributesTrackedVehicle.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/lane_attributes_tracked_vehicle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0c, 0xbf, 0x2e, 0xfe, 0x1e, 0x3a, 0x57, 0xe4,
      0x5a, 0xa2, 0x18, 0xd7, 0xe0, 0xc3, 0x7f, 0x72,
      0x6d, 0xd3, 0x24, 0x46, 0xd5, 0xad, 0xcc, 0xb7,
      0xe8, 0x94, 0xeb, 0x2f, 0xe3, 0x7b, 0x15, 0xaf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesTrackedVehicle";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__FIELD_NAME__lane_attributes_trackedvehicle[] = "lane_attributes_trackedvehicle";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__FIELD_NAME__lane_attributes_trackedvehicle, 30, 30},
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
j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__TYPE_NAME, 47, 47},
      {j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__FIELDS, 1, 1},
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
  "# LaneAttributesTrackedVehicle.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The LaneAttributes-Special data element relates specific properties found\n"
  "# in a tracked vehicle lane types (trolley and train lanes).\n"
  "# The term \"rail vehicle\" can be considered synonymous.\n"
  "# In this case, the term does not relate to vehicle types with tracks or treads.\n"
  "#\n"
  "# LaneAttributes-TrackedVehicle ::= BIT STRING {\n"
  "# -- With bits as defined:\n"
  "# spec-RevocableLane(0),\n"
  "# -- this lane may be activated or not based\n"
  "# -- on the current SPAT message contents\n"
  "# -- if not asserted, the lane is ALWAYS present\n"
  "# spec-commuterRailRoadTrack (1),\n"
  "# spec-lightRailRoadTrack(2),\n"
  "# spec-heavyRailRoadTrack(3),\n"
  "# spec-otherRailType(4)\n"
  "# -- Bits 5~15 reserved and set to zero\n"
  "# } (SIZE (16))\n"
  "\n"
  "uint16 lane_attributes_trackedvehicle";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__TYPE_NAME, 47, 47},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 833, 833},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
