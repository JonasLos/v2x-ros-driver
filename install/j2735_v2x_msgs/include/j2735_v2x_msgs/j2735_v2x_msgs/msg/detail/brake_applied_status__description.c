// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/BrakeAppliedStatus.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/brake_applied_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__BrakeAppliedStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0x34, 0xf3, 0x6d, 0x46, 0x12, 0x93, 0x08,
      0x25, 0x48, 0xf1, 0x83, 0x74, 0x73, 0xa5, 0xdf,
      0xbf, 0x1b, 0xe3, 0xaa, 0x79, 0x5a, 0x37, 0x18,
      0x36, 0xec, 0xa0, 0x61, 0xb8, 0xa0, 0xb2, 0x07,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__BrakeAppliedStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/BrakeAppliedStatus";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__BrakeAppliedStatus__FIELD_NAME__brake_applied_status[] = "brake_applied_status";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__BrakeAppliedStatus__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__BrakeAppliedStatus__FIELD_NAME__brake_applied_status, 20, 20},
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
j2735_v2x_msgs__msg__BrakeAppliedStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__BrakeAppliedStatus__TYPE_NAME, 37, 37},
      {j2735_v2x_msgs__msg__BrakeAppliedStatus__FIELDS, 1, 1},
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
  "# BrakeAppliedStatus.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "# \n"
  "\n"
  "#BrakeAppliedStatus ::= BIT STRING {\n"
  "#   unavailable (0),  -- When set, the brake applied status is unavailable\n"
  "#   leftFront   (1),  -- Left Front Active\n"
  "#   leftRear    (2),  -- Left Rear Active\n"
  "#   rightFront  (3),  -- Right Front Active\n"
  "#   rightRear   (4)   -- Right Rear Active\n"
  "#   } (SIZE (5))\n"
  "#   \n"
  "\n"
  "uint8  brake_applied_status\n"
  "\n"
  "uint8 UNAVAILABLE=0\n"
  "uint8 LEFT_FRONT=1\n"
  "uint8 LEFT_REAR=2\n"
  "uint8 RIGHT_FRONT=3\n"
  "uint8 RIGHT_REAR=4\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__BrakeAppliedStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__BrakeAppliedStatus__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 532, 532},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__BrakeAppliedStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__BrakeAppliedStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
