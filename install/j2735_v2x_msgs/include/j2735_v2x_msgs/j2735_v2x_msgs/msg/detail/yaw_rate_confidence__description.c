// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/YawRateConfidence.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/yaw_rate_confidence__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__YawRateConfidence__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7a, 0xc1, 0xad, 0x23, 0xad, 0x59, 0x65, 0xfc,
      0xf2, 0x66, 0x10, 0xa7, 0x6a, 0x19, 0x67, 0x7a,
      0x7e, 0xc3, 0x07, 0xdd, 0xfa, 0x04, 0x0f, 0xc3,
      0xdd, 0x03, 0xc2, 0x4a, 0x7f, 0xce, 0xed, 0x8e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__YawRateConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/YawRateConfidence";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__YawRateConfidence__FIELD_NAME__yaw_rate_confidence[] = "yaw_rate_confidence";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__YawRateConfidence__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__YawRateConfidence__FIELD_NAME__yaw_rate_confidence, 19, 19},
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
j2735_v2x_msgs__msg__YawRateConfidence__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__YawRateConfidence__TYPE_NAME, 36, 36},
      {j2735_v2x_msgs__msg__YawRateConfidence__FIELDS, 1, 1},
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
  "# YawRateConfidence.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# YawRateConfidence ::= ENUMERATED {\n"
  "#    unavailable (0), -- B\\xe2\\x80\\x99000 Not Equipped with yaw rate status\n"
  "#    -- or yaw rate status is unavailable\n"
  "#    degSec-100-00 (1), -- B\\xe2\\x80\\x99001 100 deg/sec\n"
  "#    degSec-010-00 (2), -- B\\xe2\\x80\\x99010 10 deg/sec\n"
  "#    degSec-005-00 (3), -- B\\xe2\\x80\\x99011 5 deg/sec\n"
  "#    degSec-001-00 (4), -- B\\xe2\\x80\\x99100 1 deg/sec\n"
  "#    degSec-000-10 (5), -- B\\xe2\\x80\\x99101 0.1 deg/sec\n"
  "#    degSec-000-05 (6), -- B\\xe2\\x80\\x99110 0.05 deg/sec\n"
  "#    degSec-000-01 (7) -- B\\xe2\\x80\\x99111 0.01 deg/sec\n"
  "#    }\n"
  "#    -- Encoded as a 3 bit value\n"
  "\n"
  "uint8 yaw_rate_confidence\n"
  "\n"
  "# enumeration values for yaw_rate_confidence\n"
  "uint8 DEG_SEC_100_00 = 1\n"
  "uint8 DEG_SEC_010_00 = 2\n"
  "uint8 DEG_SEC_005_00 = 3\n"
  "uint8 DEG_SEC_001_00 = 4\n"
  "uint8 DEG_SEC_000_10 = 5\n"
  "uint8 DEG_SEC_000_05 = 6\n"
  "uint8 DEG_SEC_000_01 = 7";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__YawRateConfidence__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__YawRateConfidence__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 802, 802},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__YawRateConfidence__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__YawRateConfidence__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
