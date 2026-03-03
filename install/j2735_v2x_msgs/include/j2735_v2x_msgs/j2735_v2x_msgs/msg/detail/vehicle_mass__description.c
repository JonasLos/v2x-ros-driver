// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/VehicleMass.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/vehicle_mass__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__VehicleMass__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x28, 0x2c, 0x24, 0xd0, 0x88, 0xa1, 0x78, 0x5c,
      0x1c, 0x39, 0x71, 0x22, 0x58, 0x08, 0xa5, 0x89,
      0x78, 0xf2, 0x42, 0xa7, 0x4d, 0x7b, 0xa3, 0x2e,
      0x16, 0x7a, 0x72, 0xd5, 0x85, 0xa1, 0x90, 0x5b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__VehicleMass__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleMass";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__VehicleMass__FIELD_NAME__vehicle_mass[] = "vehicle_mass";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__VehicleMass__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__VehicleMass__FIELD_NAME__vehicle_mass, 12, 12},
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
j2735_v2x_msgs__msg__VehicleMass__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__VehicleMass__TYPE_NAME, 30, 30},
      {j2735_v2x_msgs__msg__VehicleMass__FIELDS, 1, 1},
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
  "# VehicleMass.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# VehicleMass ::= INTEGER (0..255)\n"
  "#     -- Values 000 to 080 in steps of 50kg\n"
  "#     -- Values 081 to 200 in steps of 500kg\n"
  "#     -- Values 201 to 253 in steps of 2000kg\n"
  "#     -- The Value 254 shall be used for weights above 170000 kg\n"
  "#     -- The Value 255 shall be used when the value is unknown or unavailable\n"
  "#     -- Encoded such that the values:\n"
  "#     --  81 represents   4500 kg\n"
  "#     -- 181 represents  54500 kg\n"
  "#     -- 253 represents 170000 kg\n"
  "uint8 vehicle_mass\n"
  "\n"
  "uint8 MASS_UNAVAILABLE=255";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__VehicleMass__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__VehicleMass__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 554, 554},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__VehicleMass__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__VehicleMass__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
