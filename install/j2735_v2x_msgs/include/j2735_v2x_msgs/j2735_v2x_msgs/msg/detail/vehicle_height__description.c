// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/VehicleHeight.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/vehicle_height__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__VehicleHeight__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x10, 0x3f, 0x7b, 0x69, 0x2a, 0xe8, 0x14, 0xbb,
      0xf1, 0x71, 0x13, 0x51, 0x88, 0x00, 0xd6, 0x9c,
      0xc7, 0x8f, 0xfa, 0x1a, 0x9d, 0x5e, 0xfa, 0x51,
      0x56, 0x26, 0xea, 0x2d, 0x1d, 0x70, 0xe5, 0xb4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__VehicleHeight__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleHeight";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__VehicleHeight__FIELD_NAME__vehicle_height[] = "vehicle_height";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__VehicleHeight__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__VehicleHeight__FIELD_NAME__vehicle_height, 14, 14},
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
j2735_v2x_msgs__msg__VehicleHeight__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__VehicleHeight__TYPE_NAME, 32, 32},
      {j2735_v2x_msgs__msg__VehicleHeight__FIELDS, 1, 1},
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
  "# VehicleHeight.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# VehicleHeight ::= INTEGER (0..127) \n"
  "#     -- the height of the vehicle\n"
  "#     -- LSB units of 5 cm, range to 6.35 meters\n"
  "uint8 vehicle_height\n"
  "\n"
  "uint8 VEHICLE_HEIGHT_UNAVAILABLE = 0\n"
  "uint8 VEHICLE_HEIGHT_MAX = 127\n"
  "uint8 VEHICLE_HEIGHT_MIN = 1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__VehicleHeight__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__VehicleHeight__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 296, 296},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__VehicleHeight__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__VehicleHeight__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
