// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/SpeedConfidence.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/speed_confidence__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__SpeedConfidence__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x60, 0x1a, 0x6a, 0xf8, 0x51, 0xec, 0x0e, 0x4d,
      0xfc, 0x8b, 0x6a, 0x0c, 0x60, 0x8f, 0x60, 0xb6,
      0xbe, 0x2d, 0xc5, 0x7b, 0x58, 0x7d, 0x3e, 0x76,
      0x56, 0xb2, 0x1c, 0x09, 0xd8, 0x59, 0x20, 0xa0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__SpeedConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedConfidence";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__SpeedConfidence__FIELD_NAME__speed_confidence[] = "speed_confidence";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__SpeedConfidence__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__SpeedConfidence__FIELD_NAME__speed_confidence, 16, 16},
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
j2735_v2x_msgs__msg__SpeedConfidence__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__SpeedConfidence__TYPE_NAME, 34, 34},
      {j2735_v2x_msgs__msg__SpeedConfidence__FIELDS, 1, 1},
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
  "# SpeedConfidence.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The DE_SpeedConfidence data element is used to provide the 95% confidence level for the currently reported\n"
  "# value of DE_Speed, taking into account the current calibration and precision of the sensor(s) used to measure and/or\n"
  "# calculate the value.\n"
  "\n"
  "# SpeedConfidence ::= ENUMERATED {\n"
  "# unavailable (0), -- Not Equipped or unavailable\n"
  "# prec100ms (1), -- 100 meters / sec\n"
  "# prec10ms(2), -- 10 meters / sec\n"
  "# prec5ms (3), -- 5 meters / sec\n"
  "# prec1ms (4), -- 1 meters / sec\n"
  "# prec0-1ms (5), -- 0.1 meters / sec\n"
  "# prec0-05ms (6), -- -- 0.05 meters / sec\n"
  "# prec0-01ms (7) -- -- 0.01 meters / sec\n"
  "# }\n"
  "\n"
  "uint8 speed_confidence\n"
  "\n"
  "uint8 UNAVAILABLE=0\n"
  "uint8 PREC100MS=1\n"
  "uint8 PREC10MS=2\n"
  "uint8 PREC5MS=3\n"
  "uint8 PREC1MS=4\n"
  "uint8 PREC0_1MS=5\n"
  "uint8 PREC0_05MS=6\n"
  "uint8 PREC0_01MS=7";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__SpeedConfidence__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__SpeedConfidence__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 859, 859},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__SpeedConfidence__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__SpeedConfidence__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
