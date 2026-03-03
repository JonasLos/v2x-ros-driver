// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/MotorizedPropelledType.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/motorized_propelled_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__MotorizedPropelledType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xea, 0xa7, 0x4d, 0x0c, 0x1e, 0xc3, 0xd1, 0x31,
      0x9f, 0x2d, 0x43, 0xfa, 0x33, 0xd1, 0xa5, 0xb8,
      0x6f, 0x6d, 0xdb, 0x29, 0x5e, 0x81, 0xc7, 0x03,
      0x69, 0x4b, 0x2d, 0x0e, 0xca, 0x2a, 0x4b, 0x50,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__MotorizedPropelledType__TYPE_NAME[] = "j2735_v2x_msgs/msg/MotorizedPropelledType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__MotorizedPropelledType__FIELD_NAME__type[] = "type";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__MotorizedPropelledType__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__MotorizedPropelledType__FIELD_NAME__type, 4, 4},
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
j2735_v2x_msgs__msg__MotorizedPropelledType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__MotorizedPropelledType__TYPE_NAME, 41, 41},
      {j2735_v2x_msgs__msg__MotorizedPropelledType__FIELDS, 1, 1},
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
  "# MotorizedPropelledType.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of MotorizedPropelledType from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# MotorizedPropelledType ::= ENUMERATED {   \n"
  "#    unavailable         (0),\n"
  "#    otherTypes          (1), -- any method not listed below\n"
  "#    wheelChair          (2),\n"
  "#    bicycle             (3),\n"
  "#    scooter             (4),\n"
  "#    selfBalancingDevice (5), -- such as Segway\n"
  "#    ...\n"
  "# }\n"
  "\n"
  "uint8 type\n"
  "\n"
  "uint8 UNAVAILABLE=0\n"
  "uint8 OTHER_TYPES=1\n"
  "uint8 WHEELCHAIR=2\n"
  "uint8 BICYCLE=3\n"
  "uint8 SCOOTER=4\n"
  "uint8 SELF_BALANCING_DEVICE=5";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__MotorizedPropelledType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__MotorizedPropelledType__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 627, 627},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__MotorizedPropelledType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__MotorizedPropelledType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
