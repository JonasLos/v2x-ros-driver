// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/VehicleLength.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/vehicle_length__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__VehicleLength__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0x34, 0x97, 0x26, 0xad, 0x1a, 0xf5, 0xf7,
      0x3d, 0x35, 0x20, 0xc2, 0xe0, 0x2c, 0x01, 0x75,
      0x37, 0x36, 0x68, 0xa8, 0x52, 0x69, 0xbc, 0x55,
      0xe1, 0x95, 0x59, 0xca, 0xfb, 0xb3, 0x16, 0xee,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__VehicleLength__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleLength";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__VehicleLength__FIELD_NAME__vehicle_length[] = "vehicle_length";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__VehicleLength__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__VehicleLength__FIELD_NAME__vehicle_length, 14, 14},
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
j2735_v2x_msgs__msg__VehicleLength__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__VehicleLength__TYPE_NAME, 32, 32},
      {j2735_v2x_msgs__msg__VehicleLength__FIELDS, 1, 1},
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
  "# VehicleLength.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# VehicleLength ::= INTEGER (0.. 4095) \n"
  "#     -- LSB units of 1 cm with a range of >40 meters\n"
  "uint16 vehicle_length\n"
  "\n"
  "uint16 VEHICLE_LENGTH_UNAVAILABLE = 0\n"
  "uint16 VEHICLE_LENGTH_MAX = 4095\n"
  "uint16 VEHICLE_LENGTH_MIN = 1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__VehicleLength__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__VehicleLength__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 274, 274},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__VehicleLength__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__VehicleLength__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
