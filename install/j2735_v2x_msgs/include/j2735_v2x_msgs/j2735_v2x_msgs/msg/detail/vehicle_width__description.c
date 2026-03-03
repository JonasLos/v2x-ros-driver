// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/VehicleWidth.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/vehicle_width__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__VehicleWidth__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x19, 0x60, 0x02, 0xee, 0xe5, 0x9c, 0xf0, 0xe7,
      0xae, 0xd7, 0x08, 0x54, 0xb8, 0x90, 0xad, 0xc1,
      0x74, 0x98, 0xb9, 0xaf, 0x34, 0x3e, 0x95, 0xdb,
      0x81, 0xc2, 0xa5, 0xe4, 0xce, 0x6e, 0x2c, 0x78,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__VehicleWidth__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleWidth";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__VehicleWidth__FIELD_NAME__vehicle_width[] = "vehicle_width";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__VehicleWidth__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__VehicleWidth__FIELD_NAME__vehicle_width, 13, 13},
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
j2735_v2x_msgs__msg__VehicleWidth__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__VehicleWidth__TYPE_NAME, 31, 31},
      {j2735_v2x_msgs__msg__VehicleWidth__FIELDS, 1, 1},
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
  "# VehicleWidth.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# VehicleWidth ::= INTEGER (0..1023) \n"
  "#    -- LSB units are 1 cm with a range of >10 meters\n"
  "#    -- The value zero shall be sent when data is unavailable. \n"
  "uint16 vehicle_width\n"
  "\n"
  "uint16 VEHICLE_WIDTH_UNAVAILABLE = 0\n"
  "uint16 VEHICLE_WIDTH_MAX = 1023\n"
  "uint16 VEHICLE_WIDTH_MIN = 1\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__VehicleWidth__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__VehicleWidth__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 332, 332},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__VehicleWidth__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__VehicleWidth__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
