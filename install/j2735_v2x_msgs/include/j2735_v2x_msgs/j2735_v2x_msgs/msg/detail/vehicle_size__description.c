// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/VehicleSize.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/vehicle_size__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__VehicleSize__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcd, 0x0c, 0x51, 0xef, 0xad, 0x8c, 0xb4, 0x12,
      0x64, 0x31, 0xc6, 0x64, 0xaa, 0x9d, 0xd3, 0x4f,
      0x55, 0x30, 0x85, 0x5e, 0x47, 0xb6, 0x5c, 0xb5,
      0xe7, 0x6b, 0x00, 0x6b, 0x56, 0x82, 0x19, 0xa9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__VehicleSize__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleSize";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__VehicleSize__FIELD_NAME__vehicle_width[] = "vehicle_width";
static char j2735_v2x_msgs__msg__VehicleSize__FIELD_NAME__vehicle_length[] = "vehicle_length";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__VehicleSize__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__VehicleSize__FIELD_NAME__vehicle_width, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleSize__FIELD_NAME__vehicle_length, 14, 14},
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
j2735_v2x_msgs__msg__VehicleSize__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__VehicleSize__TYPE_NAME, 30, 30},
      {j2735_v2x_msgs__msg__VehicleSize__FIELDS, 2, 2},
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
  "# VehicleSize.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The vehicle length and width \n"
  "\n"
  "#VehicleSize ::= SEQUENCE {\n"
  "#   width     VehicleWidth,\n"
  "#   length    VehicleLength\n"
  "#   }\n"
  "#\n"
  "\n"
  "#VehicleWidth ::= INTEGER (0..1023) -- LSB units are 1 cm with a range of >10 meters\n"
  "#  -- Convert to meter with factor 0.01 when this field is used\n"
  "uint16 vehicle_width\n"
  "\n"
  "uint16 VEHICLE_WIDTH_UNAVAILABLE = 0\n"
  "uint16 VEHICLE_WIDTH_MAX = 1023\n"
  "uint16 VEHICLE_WIDTH_MIN = 1\n"
  "\n"
  "#VehicleLength ::= INTEGER (0.. 4095) -- LSB units of 1 cm with a range of >40 meters\n"
  "#  -- Convert to meter with factor 0.01 when this field is used\n"
  "uint16 vehicle_length\n"
  "\n"
  "uint16 VEHICLE_LENGTH_UNAVAILABLE = 0\n"
  "uint16 VEHICLE_LENGTH_MAX = 4095\n"
  "uint16 VEHICLE_LENGTH_MIN = 1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__VehicleSize__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__VehicleSize__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 760, 760},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__VehicleSize__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__VehicleSize__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
