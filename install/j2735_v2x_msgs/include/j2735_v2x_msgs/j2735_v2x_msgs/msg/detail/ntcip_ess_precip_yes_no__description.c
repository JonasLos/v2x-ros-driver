// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/NTCIPEssPrecipYesNo.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_yes_no__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x64, 0xab, 0x29, 0x69, 0x23, 0x0c, 0x88, 0xff,
      0x5f, 0x1d, 0xf5, 0x7f, 0x42, 0x2d, 0xc6, 0x9f,
      0x67, 0x4b, 0x0e, 0x83, 0x0c, 0xcb, 0xf0, 0x71,
      0xec, 0xad, 0x8a, 0x67, 0xb3, 0x44, 0xc9, 0xb4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssPrecipYesNo";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__FIELD_NAME__precip_yes_no[] = "precip_yes_no";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__FIELD_NAME__precip_yes_no, 13, 13},
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
j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__TYPE_NAME, 38, 38},
      {j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__FIELDS, 1, 1},
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
  "# NTCIPEssPrecipYesNo.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# EssPrecipYesNo ::= ENUMERATED {precip (1), noPrecip (2), error (3)} \n"
  "uint8 precip_yes_no \n"
  "\n"
  "# Enumeration values for precip_yes_no\n"
  "uint8 PRECIP=1\n"
  "uint8 NO_PRECIP=2\n"
  "uint8 ERROR=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 240, 240},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
