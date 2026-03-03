// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/NTCIPEssSolarRadiation.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/ntcip_ess_solar_radiation__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x96, 0x2a, 0x39, 0x79, 0x91, 0x45, 0x79, 0x85,
      0x67, 0x09, 0x8f, 0x55, 0xdc, 0xa6, 0x62, 0x13,
      0xd8, 0x91, 0x0c, 0xc0, 0x02, 0xce, 0xc6, 0x75,
      0xee, 0x1c, 0x0e, 0x82, 0xc8, 0x4d, 0x6d, 0xfa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssSolarRadiation";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__FIELD_NAME__ess_solar_radiation[] = "ess_solar_radiation";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__FIELD_NAME__ess_solar_radiation, 19, 19},
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
j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__TYPE_NAME, 41, 41},
      {j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__FIELDS, 1, 1},
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
  "# NTCIPEssSolarRadiation.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# EssSolarRadiation ::= INTEGER (0..65535) \n"
  "# The direct solar radiation integrated over the 24 hours preceding the observation in Joules per square meter. A value\n"
  "# of 65535 shall indicate a missing value.\n"
  "uint16 ess_solar_radiation\n"
  "\n"
  "uint16 MISSING_VALUE=65535";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 326, 326},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
