// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/LaneAttributesParking.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/lane_attributes_parking__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__LaneAttributesParking__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0x93, 0x6e, 0x30, 0x63, 0xac, 0x8c, 0x0f,
      0x26, 0xff, 0x0e, 0x2b, 0x1c, 0xd4, 0x38, 0x1c,
      0x29, 0x1c, 0xc1, 0xd4, 0xf9, 0xa4, 0x57, 0x3d,
      0x02, 0x41, 0xb7, 0x4d, 0x63, 0x26, 0xa4, 0x4b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__LaneAttributesParking__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesParking";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__LaneAttributesParking__FIELD_NAME__lane_attributes_parking[] = "lane_attributes_parking";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__LaneAttributesParking__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__LaneAttributesParking__FIELD_NAME__lane_attributes_parking, 23, 23},
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
j2735_v2x_msgs__msg__LaneAttributesParking__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__LaneAttributesParking__TYPE_NAME, 40, 40},
      {j2735_v2x_msgs__msg__LaneAttributesParking__FIELDS, 1, 1},
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
  "# LaneAttributesParking.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The LaneAttributes-Parking data element relates specific properties found in a vehicle parking lane type.\n"
  "#\n"
  "# LaneAttributes-Parking ::= BIT STRING {\n"
  "# -- With bits as defined:\n"
  "# -- Parking use details, note that detailed restrictions such as\n"
  "# -- allowed hours are sent by way of ITIS codes in the TIM message\n"
  "# parkingRevocableLane(0),\n"
  "# -- this lane may be activated or not based\n"
  "# -- on the current SPAT message contents\n"
  "# -- if not asserted, the lane is ALWAYS present\n"
  "# parallelParkingInUse(1),\n"
  "# headInParkingInUse(2),\n"
  "# doNotParkZone(3),\n"
  "# -- used to denote fire hydrants as well as\n"
  "# -- short disruptions in a parking zone\n"
  "# parkingForBusUse(4),\n"
  "# parkingForTaxiUse(5),\n"
  "# noPublicParkingUse(6)\n"
  "# -- private parking, as in front of\n"
  "# -- private property\n"
  "# -- Bits 7~15 reserved and set to zero\n"
  "# } (SIZE (16))\n"
  "\n"
  "uint16  lane_attributes_parking";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__LaneAttributesParking__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__LaneAttributesParking__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 952, 952},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__LaneAttributesParking__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__LaneAttributesParking__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
