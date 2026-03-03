// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlVehClass.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/traffic_control_veh_class__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__TrafficControlVehClass__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x24, 0x3d, 0xa3, 0x9e, 0x70, 0x72, 0x66, 0xec,
      0x58, 0xb1, 0x72, 0x0c, 0xf2, 0x3a, 0x4b, 0xd9,
      0x4c, 0x10, 0xc3, 0xd0, 0x62, 0x74, 0x76, 0xae,
      0xcb, 0x9f, 0xd4, 0x8c, 0x5e, 0x07, 0x27, 0x85,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__TrafficControlVehClass__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrafficControlVehClass";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__TrafficControlVehClass__FIELD_NAME__vehicle_class[] = "vehicle_class";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__TrafficControlVehClass__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__TrafficControlVehClass__FIELD_NAME__vehicle_class, 13, 13},
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
j2735_v2x_msgs__msg__TrafficControlVehClass__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__TrafficControlVehClass__TYPE_NAME, 41, 41},
      {j2735_v2x_msgs__msg__TrafficControlVehClass__FIELDS, 1, 1},
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
  "# TrafficControlVehClass.msg\n"
  "#\n"
  "# Part of the CARMA Cloud geo-fence specification not part of the official SAE j2735 standard\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# \n"
  "# @version 0.1\n"
  "#\n"
  "# Description\n"
  "# ...\n"
  "\n"
  "# TrafficControlVehClass ::= ENUMERATED\n"
  "# {\n"
  "# \\tany, \n"
  "# \\tpedestrian,\n"
  "# \\tbicycle,\n"
  "# \\tmicromobile,\n"
  "# \\tmotorcycle,\n"
  "# \\tpassenger-car,\n"
  "# \\tlight-truck-van,\n"
  "# \\tbus,\n"
  "# \\ttwo-axle-six-tire-single-unit-truck,\n"
  "# \\tthree-axle-single-unit-truck,\n"
  "# \\tfour-or-more-axle-single-unit-truck,\n"
  "# \\tfour-or-fewer-axle-single-trailer-truck,\n"
  "# \\tfive-axle-single-trailer-truck,\n"
  "# \\tsix-or-more-axle-single-trailer-truck,\n"
  "# \\tfive-or-fewer-axle-multi-trailer-truck,\n"
  "# \\tsix-axle-multi-trailer-truck,\n"
  "# \\tseven-or-more-axle-multi-trailer-truck,\n"
  "# \\trail,\n"
  "# \\tunclassified, \n"
  "# \\t...\n"
  "# }\n"
  "\n"
  "uint8 vehicle_class\n"
  "\n"
  "# enumeration values for vehicle_class:\n"
  "\n"
  "uint8 ANY = 0\n"
  "uint8 PEDESTRIAN = 1\n"
  "uint8 BICYCLE = 2\n"
  "uint8 MICROMOBILE = 3\n"
  "uint8 MOTORCYCLE = 4\n"
  "uint8 PASSENGER_CAR = 5\n"
  "uint8 LIGHT_TRUCK_VAN = 6\n"
  "uint8 BUS = 7\n"
  "uint8 TWO_AXLE_SIX_TIRE_SINGLE_UNIT_TRUCK = 8\n"
  "uint8 THREE_AXLE_SINGLE_UNIT_TRUCK = 9\n"
  "uint8 FOUR_OR_MORE_AXLE_SINGLE_UNIT_TRUCK = 10\n"
  "uint8 FOUR_OR_FEWER_AXLE_SINGLE_TRAILER_TRUCK = 11\n"
  "uint8 FIVE_AXLE_SINGLE_TRAILER_TRUCK = 12\n"
  "uint8 SIX_OR_MORE_AXLE_SINGLE_TRAILER_TRUCK = 13\n"
  "uint8 FIVE_OR_FEWER_AXLE_MULTI_TRAILER_TRUCK = 14\n"
  "uint8 SIX_AXLE_MULTI_TRAILER_TRUCK = 15\n"
  "uint8 SEVEN_OR_MORE_AXLE_MULTI_TRAILER_TRUCK = 16\n"
  "uint8 RAIL = 17\n"
  "uint8 UNCLASSIFIED = 18";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__TrafficControlVehClass__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__TrafficControlVehClass__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1425, 1425},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__TrafficControlVehClass__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__TrafficControlVehClass__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
