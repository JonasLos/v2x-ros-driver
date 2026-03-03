// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/NTCIPEssMobileFriction.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/ntcip_ess_mobile_friction__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__NTCIPEssMobileFriction__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x96, 0x05, 0x73, 0x8c, 0x22, 0x28, 0x3b, 0x54,
      0x06, 0x1e, 0x20, 0xfa, 0x2c, 0x2d, 0x3c, 0x17,
      0x50, 0xfb, 0x08, 0x8b, 0x1c, 0x03, 0x91, 0x00,
      0x9b, 0x2d, 0x15, 0x5b, 0x5a, 0x8c, 0x7e, 0x9a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__NTCIPEssMobileFriction__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssMobileFriction";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__NTCIPEssMobileFriction__FIELD_NAME__ess_mobile_friction[] = "ess_mobile_friction";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__NTCIPEssMobileFriction__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__NTCIPEssMobileFriction__FIELD_NAME__ess_mobile_friction, 19, 19},
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
j2735_v2x_msgs__msg__NTCIPEssMobileFriction__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__NTCIPEssMobileFriction__TYPE_NAME, 41, 41},
      {j2735_v2x_msgs__msg__NTCIPEssMobileFriction__FIELDS, 1, 1},
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
  "# NTCIPEssMobileFriction.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# EssMobileFriction ::= INTEGER (0..101)\n"
  "# Indicates measured coefficient of friction in percent. The value 101 shall indicate an error condition or missing value.\n"
  "uint8 ess_mobile_friction\n"
  "\n"
  "uint8 ESS_MOBILE_FRICTION_MIN=0\n"
  "uint8 ESS_MOBILE_FRICTION_MAX=100\n"
  "uint8 ERROR_OR_MISSING_VALUE=101";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__NTCIPEssMobileFriction__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__NTCIPEssMobileFriction__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 354, 354},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__NTCIPEssMobileFriction__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__NTCIPEssMobileFriction__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
