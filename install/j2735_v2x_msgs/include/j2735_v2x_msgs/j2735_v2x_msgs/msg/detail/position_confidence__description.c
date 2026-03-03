// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PositionConfidence.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/position_confidence__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PositionConfidence__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x61, 0x21, 0xfa, 0x3f, 0xed, 0x8e, 0x09, 0x3b,
      0xde, 0x31, 0x48, 0xa5, 0xb7, 0xd5, 0x21, 0x79,
      0x02, 0x69, 0x79, 0x4b, 0xb3, 0xce, 0xe6, 0x93,
      0xa0, 0xd8, 0x48, 0x6b, 0x34, 0xdb, 0x8b, 0x17,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__PositionConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/PositionConfidence";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PositionConfidence__FIELD_NAME__confidence[] = "confidence";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PositionConfidence__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PositionConfidence__FIELD_NAME__confidence, 10, 10},
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
j2735_v2x_msgs__msg__PositionConfidence__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PositionConfidence__TYPE_NAME, 37, 37},
      {j2735_v2x_msgs__msg__PositionConfidence__FIELDS, 1, 1},
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
  "# PositionConfidence.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of PositionConfidence from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# PositionConfidence ::= ENUMERATED {\n"
  "#    unavailable (0),  -- B'0000  Not Equipped or unavailable\n"
  "#    a500m   (1), -- B'0001  500m  or about 5 * 10 ^ -3 decimal degrees\n"
  "#    a200m   (2), -- B'0010  200m  or about 2 * 10 ^ -3 decimal degrees\n"
  "#    a100m   (3), -- B'0011  100m  or about 1 * 10 ^ -3 decimal degrees\n"
  "#    a50m    (4), -- B'0100  50m   or about 5 * 10 ^ -4 decimal degrees \n"
  "#    a20m    (5), -- B'0101  20m   or about 2 * 10 ^ -4 decimal degrees \n"
  "#    a10m    (6), -- B'0110  10m   or about 1 * 10 ^ -4 decimal degrees \n"
  "#    a5m     (7), -- B'0111  5m    or about 5 * 10 ^ -5 decimal degrees \n"
  "#    a2m     (8), -- B'1000  2m    or about 2 * 10 ^ -5 decimal degrees \n"
  "#    a1m     (9), -- B'1001  1m    or about 1 * 10 ^ -5 decimal degrees \n"
  "#    a50cm  (10), -- B'1010  0.50m or about 5 * 10 ^ -6 decimal degrees \n"
  "#    a20cm  (11), -- B'1011  0.20m or about 2 * 10 ^ -6 decimal degrees \n"
  "#    a10cm  (12), -- B'1100  0.10m or about 1 * 10 ^ -6 decimal degrees \n"
  "#    a5cm   (13), -- B'1101  0.05m or about 5 * 10 ^ -7 decimal degrees \n"
  "#    a2cm   (14), -- B'1110  0.02m or about 2 * 10 ^ -7 decimal degrees \n"
  "#    a1cm   (15)  -- B'1111  0.01m or about 1 * 10 ^ -7 decimal degrees \n"
  "#    } \n"
  "\n"
  "uint8 confidence\n"
  "\n"
  "uint8 UNAVAILABLE=0\n"
  "uint8 A500M=1\n"
  "uint8 A200M=2\n"
  "uint8 A100M=3\n"
  "uint8 A50M=4\n"
  "uint8 A20M=5\n"
  "uint8 A10M=6\n"
  "uint8 A5M=7\n"
  "uint8 A2M=8\n"
  "uint8 A1M=9\n"
  "uint8 A50CM=10\n"
  "uint8 A20CM=11\n"
  "uint8 A10CM=12\n"
  "uint8 A5CM=13\n"
  "uint8 A2CM=14\n"
  "uint8 A1CM=15";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PositionConfidence__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PositionConfidence__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1641, 1641},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PositionConfidence__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PositionConfidence__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
