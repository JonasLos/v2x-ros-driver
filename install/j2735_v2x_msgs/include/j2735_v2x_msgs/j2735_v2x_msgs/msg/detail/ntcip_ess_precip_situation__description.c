// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/NTCIPEssPrecipSituation.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_situation__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8d, 0xed, 0xd9, 0xea, 0x73, 0x6f, 0x3b, 0x37,
      0xbb, 0x84, 0x8f, 0x42, 0x58, 0x7b, 0xa4, 0x64,
      0x28, 0xae, 0x48, 0x30, 0xaf, 0x58, 0xfe, 0xb6,
      0x37, 0xb2, 0x38, 0x8a, 0x92, 0x30, 0xb6, 0x26,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssPrecipSituation";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__FIELD_NAME__ess_precip_situation[] = "ess_precip_situation";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__FIELD_NAME__ess_precip_situation, 20, 20},
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
j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__TYPE_NAME, 42, 42},
      {j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__FIELDS, 1, 1},
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
  "# NTCIPEssPrecipSituation.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# EssPrecipSituation ::= ENUMERATED {\n"
  "#    other (1), \n"
  "#    unknown (2), \n"
  "#    noPrecipitation (3), \n"
  "#    unidentifiedSlight (4), \n"
  "#    unidentifiedModerate (5), \n"
  "#    unidentifiedHeavy (6), \n"
  "#    snowSlight (7), \n"
  "#    snowModerate (8), \n"
  "#    snowHeavy (9), \n"
  "#    rainSlight (10), \n"
  "#    rainModerate (11), \n"
  "#    rainHeavy (12), \n"
  "#    frozenPrecipitationSlight (13), \n"
  "#    frozenPrecipitationModerate (14), \n"
  "#    frozenPrecipitationHeavy (15)\n"
  "#    }\n"
  "\n"
  "uint8 ess_precip_situation\n"
  "\n"
  "# Enumeration values for ess_precip_situation \n"
  "uint8 OTHER=1\n"
  "uint8 UNKNOWN=2\n"
  "uint8 NO_PRECIPITATION=3\n"
  "uint8 UNIDENTIFIED_SLIGHT=4\n"
  "uint8 UNIDENTIFIED_MODERATE=5\n"
  "uint8 UNIDENTIFIED_HEAVY=6\n"
  "uint8 SNOW_SLIGHT=7\n"
  "uint8 SNOW_MODERATE=8\n"
  "uint8 SNOW_HEAVY=9\n"
  "uint8 RAIN_SLIGHT=10\n"
  "uint8 RAIN_MODERATE=11\n"
  "uint8 RAIN_HEAVY=12\n"
  "uint8 FROZEN_PRECIPITATION_SLIGHT=13\n"
  "uint8 FROZEN_PRECIPITATION_MODERATE=14\n"
  "uint8 FROZEN_PRECIPITATION_HEAVY=15";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 967, 967},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
