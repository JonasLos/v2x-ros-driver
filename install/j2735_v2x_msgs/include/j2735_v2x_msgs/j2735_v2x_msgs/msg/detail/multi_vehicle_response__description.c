// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/MultiVehicleResponse.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/multi_vehicle_response__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__MultiVehicleResponse__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0x21, 0xa6, 0x6d, 0x3d, 0x15, 0xec, 0xb6,
      0xe1, 0xc4, 0xa7, 0xa3, 0x25, 0xcc, 0xfa, 0xeb,
      0x32, 0xf2, 0xfe, 0xa4, 0x0a, 0x32, 0xb0, 0x54,
      0x1c, 0xa2, 0xd1, 0x7d, 0x44, 0xb5, 0xd4, 0xe8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__MultiVehicleResponse__TYPE_NAME[] = "j2735_v2x_msgs/msg/MultiVehicleResponse";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__MultiVehicleResponse__FIELD_NAME__multi_vehicle_response[] = "multi_vehicle_response";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__MultiVehicleResponse__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__MultiVehicleResponse__FIELD_NAME__multi_vehicle_response, 22, 22},
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
j2735_v2x_msgs__msg__MultiVehicleResponse__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__MultiVehicleResponse__TYPE_NAME, 39, 39},
      {j2735_v2x_msgs__msg__MultiVehicleResponse__FIELDS, 1, 1},
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
  "# MultiVehicleResponse.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# MultiVehicleResponse ::= ENUMERATED {\n"
  "#      unavailable   (0), -- Not Equipped or unavailable\n"
  "#      singleVehicle (1),  \n"
  "#      multiVehicle  (2),  \n"
  "#      reserved      (3)  -- for future use\n"
  "#      }\n"
  "\n"
  "uint8  multi_vehicle_response\n"
  "\n"
  "# enumeration values for multi_vehicle_response:\n"
  "uint8  UNAVAILABLE=0\n"
  "uint8  SINGLE_VEHICLE=1\n"
  "uint8  MULTI_VEHICLE=2\n"
  "uint8  RESERVED=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__MultiVehicleResponse__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__MultiVehicleResponse__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 435, 435},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__MultiVehicleResponse__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__MultiVehicleResponse__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
