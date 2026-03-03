// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/TransmissionState.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/transmission_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__TransmissionState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0xd7, 0xde, 0x5a, 0x14, 0x37, 0xc5, 0x6a,
      0x34, 0x76, 0x3d, 0x70, 0xce, 0xe2, 0x12, 0xbe,
      0x56, 0xfc, 0x62, 0x1b, 0xb4, 0x34, 0x41, 0x63,
      0xa8, 0x34, 0x5d, 0x80, 0x64, 0x15, 0x53, 0x5c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__TransmissionState__TYPE_NAME[] = "j2735_v2x_msgs/msg/TransmissionState";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__TransmissionState__FIELD_NAME__transmission_state[] = "transmission_state";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__TransmissionState__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__TransmissionState__FIELD_NAME__transmission_state, 18, 18},
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
j2735_v2x_msgs__msg__TransmissionState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__TransmissionState__TYPE_NAME, 36, 36},
      {j2735_v2x_msgs__msg__TransmissionState__FIELDS, 1, 1},
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
  "# TransmissionState.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# Provide the current state of the vehicle transmission.\n"
  "\n"
  "#TransmissionState ::= ENUMERATED {\n"
  "#   neutral      (0), -- Neutral\n"
  "#   park         (1), -- Park\n"
  "#   forwardGears (2), -- Forward gears\n"
  "#   reverseGears (3), -- Reverse gears\n"
  "#   reserved1    (4),\n"
  "#   reserved2    (5),\n"
  "#   reserved3    (6),\n"
  "#   unavailable  (7)  -- not-equipped or unavailable value,\n"
  "#   -- Any related speed is relative to the vehicle reference frame used\n"
  "#   }\n"
  "\n"
  "uint8  transmission_state\n"
  "\n"
  "# enumeration values for status:\n"
  "uint8 NEUTRAL=0\n"
  "uint8 PARK=1\n"
  "uint8 FORWARDGEARS=2\n"
  "uint8 REVERSEGEARS=3\n"
  "uint8 RESERVED1=4\n"
  "uint8 RESERVED2=5\n"
  "uint8 RESERVED3=6\n"
  "uint8 UNAVAILABLE=7";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__TransmissionState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__TransmissionState__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 742, 742},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__TransmissionState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__TransmissionState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
