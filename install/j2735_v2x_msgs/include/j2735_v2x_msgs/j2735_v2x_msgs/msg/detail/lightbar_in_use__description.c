// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/LightbarInUse.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/lightbar_in_use__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__LightbarInUse__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfb, 0xc6, 0x92, 0x45, 0x64, 0xe1, 0xde, 0xe8,
      0x8d, 0xd9, 0xc5, 0xe3, 0x87, 0x69, 0x4c, 0x2e,
      0x1b, 0xe2, 0x07, 0x75, 0x2e, 0xb5, 0x2c, 0xe4,
      0x95, 0xa2, 0xb1, 0x39, 0x0b, 0x7f, 0x14, 0x06,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__LightbarInUse__TYPE_NAME[] = "j2735_v2x_msgs/msg/LightbarInUse";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__LightbarInUse__FIELD_NAME__lightbar_in_use[] = "lightbar_in_use";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__LightbarInUse__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__LightbarInUse__FIELD_NAME__lightbar_in_use, 15, 15},
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
j2735_v2x_msgs__msg__LightbarInUse__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__LightbarInUse__TYPE_NAME, 32, 32},
      {j2735_v2x_msgs__msg__LightbarInUse__FIELDS, 1, 1},
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
  "# LightbarInUse.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "#  LightbarInUse ::= ENUMERATED {\n"
  "#  unavailable (0), -- Not Equipped or unavailable\n"
  "#  notInUse (1), -- none active\n"
  "#  inUse (2),\n"
  "#  yellowCautionLights (3),\n"
  "#  schoolBusLights (4),\n"
  "#  arrowSignsActive (5),\n"
  "#  slowMovingVehicle (6),\n"
  "#  freqStops (7)\n"
  "#  }\n"
  "\n"
  "uint8 lightbar_in_use\n"
  "\n"
  "# enumeration values for lightbar_in_use:\n"
  "uint8 UNAVAILABLE=0\n"
  "uint8 NOT_IN_USE=1\n"
  "uint8 IN_USE=2\n"
  "uint8 YELLOW_CAUTION_LIGHTS=3\n"
  "uint8 SCHOOL_BUS_LIGHTS=4\n"
  "uint8 ARROW_SIGNS_ACTIVE=5\n"
  "uint8 SLOW_MOVING_VEHICLE=6\n"
  "uint8 FREQ_STOPS=7";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__LightbarInUse__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__LightbarInUse__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 561, 561},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__LightbarInUse__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__LightbarInUse__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
