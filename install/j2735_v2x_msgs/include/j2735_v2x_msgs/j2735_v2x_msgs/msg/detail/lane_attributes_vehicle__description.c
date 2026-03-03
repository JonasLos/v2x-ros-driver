// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/LaneAttributesVehicle.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/lane_attributes_vehicle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__LaneAttributesVehicle__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x77, 0x54, 0xcd, 0xb7, 0xed, 0xb4, 0xb2, 0x3e,
      0x13, 0xc2, 0xb4, 0x4c, 0xf1, 0xca, 0x4d, 0xe3,
      0x98, 0x2f, 0x61, 0x4d, 0x52, 0x20, 0x72, 0x68,
      0x82, 0xe6, 0x7a, 0x14, 0x7e, 0x43, 0x22, 0x00,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__LaneAttributesVehicle__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesVehicle";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__LaneAttributesVehicle__FIELD_NAME__lane_attributes_vehicle[] = "lane_attributes_vehicle";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__LaneAttributesVehicle__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__LaneAttributesVehicle__FIELD_NAME__lane_attributes_vehicle, 23, 23},
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
j2735_v2x_msgs__msg__LaneAttributesVehicle__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__LaneAttributesVehicle__TYPE_NAME, 40, 40},
      {j2735_v2x_msgs__msg__LaneAttributesVehicle__FIELDS, 1, 1},
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
  "# LaneAttributesVehicle.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# LaneAttributes-Vehicle ::= BIT STRING {\n"
  "# -- With bits as defined:\n"
  "# isVehicleRevocableLane (0),\n"
  "#       -- this lane may be activated or not based\n"
  "#       -- on the current SPAT message contents\n"
  "#       -- if not asserted, the lane is ALWAYS present\n"
  "# isVehicleFlyOverLane (1),\n"
  "#       -- path of lane is not at grade\n"
  "# hovLaneUseOnly (2),\n"
  "# restrictedToBusUse (3),\n"
  "# restrictedToTaxiUse(4),\n"
  "# restrictedFromPublicUse (5),\n"
  "# hasIRbeaconCoverage(6),\n"
  "# permissionOnRequest(7)\n"
  "#       -- e.g. to inform about a lane for e-cars\n"
  "# } (SIZE (8,...))\n"
  "\n"
  "uint8 lane_attributes_vehicle\n"
  "\n"
  "uint8 ISVEHICLEREVOCABLELANE=0\n"
  "uint8 ISVEHICLEFLYOVERLANE=1\n"
  "uint8 HOVLANEUSEONLY=2\n"
  "uint8 RESTRICTEDTOBUSUSE=3\n"
  "uint8 RESTRICTEDTOTAXIUSE=4\n"
  "uint8 RESTRICTEDFROMPUBLICUSE=5\n"
  "uint8 HASIRBEACONCOVERAGE=6\n"
  "uint8 PERMISSIONONREQUEST=7\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__LaneAttributesVehicle__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__LaneAttributesVehicle__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 905, 905},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__LaneAttributesVehicle__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__LaneAttributesVehicle__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
