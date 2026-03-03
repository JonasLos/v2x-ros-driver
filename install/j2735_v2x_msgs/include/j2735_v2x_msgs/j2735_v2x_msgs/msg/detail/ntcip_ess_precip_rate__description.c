// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/NTCIPEssPrecipRate.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_rate__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__NTCIPEssPrecipRate__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0xeb, 0x57, 0x6e, 0xc3, 0x7d, 0x47, 0x25,
      0x30, 0xa5, 0x11, 0xd5, 0x6f, 0x32, 0xe9, 0xb6,
      0x03, 0xe0, 0x2e, 0x51, 0xd4, 0xd8, 0xf4, 0x23,
      0x38, 0xd0, 0x0d, 0x04, 0xd7, 0x86, 0xde, 0xd4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__NTCIPEssPrecipRate__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssPrecipRate";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__NTCIPEssPrecipRate__FIELD_NAME__precip_rate[] = "precip_rate";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__NTCIPEssPrecipRate__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__NTCIPEssPrecipRate__FIELD_NAME__precip_rate, 11, 11},
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
j2735_v2x_msgs__msg__NTCIPEssPrecipRate__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__NTCIPEssPrecipRate__TYPE_NAME, 37, 37},
      {j2735_v2x_msgs__msg__NTCIPEssPrecipRate__FIELDS, 1, 1},
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
  "# NTCIPEssPrecipRate.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# EssPrecipRate ::= INTEGER (0..65535)\n"
  "# The rainfall, or water equivalent of snow, rate in tenths of grams per square meter per second. For rain, this is\n"
  "# approximately to 0.36 mm/h. A value of 65535 shall indicate an error condition or missing value.\n"
  "uint16 precip_rate\n"
  "\n"
  "uint16 ERROR_OR_MISSING_VALUE = 65535";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__NTCIPEssPrecipRate__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__NTCIPEssPrecipRate__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 372, 372},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__NTCIPEssPrecipRate__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__NTCIPEssPrecipRate__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
