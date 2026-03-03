// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/TractionControlStatus.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/traction_control_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__TractionControlStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8a, 0x7e, 0x7f, 0x5e, 0x52, 0xc7, 0xe4, 0x6b,
      0x20, 0x6f, 0x54, 0xbc, 0xcf, 0xc2, 0x77, 0x7b,
      0x4f, 0x5f, 0x98, 0x6a, 0x76, 0x32, 0xc5, 0x09,
      0x29, 0x90, 0x4a, 0x78, 0x8a, 0x0d, 0x4d, 0x38,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__TractionControlStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/TractionControlStatus";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__TractionControlStatus__FIELD_NAME__traction_control_status[] = "traction_control_status";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__TractionControlStatus__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__TractionControlStatus__FIELD_NAME__traction_control_status, 23, 23},
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
j2735_v2x_msgs__msg__TractionControlStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__TractionControlStatus__TYPE_NAME, 40, 40},
      {j2735_v2x_msgs__msg__TractionControlStatus__FIELDS, 1, 1},
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
  "# TractionControlStatus.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "\n"
  "#TractionControlStatus ::= ENUMERATED {\n"
  "#   unavailable (0), -- B'00  Not Equipped with traction control \n"
  "#                    --       or traction control status is unavailable\n"
  "#   off         (1), -- B'01  traction control is Off\n"
  "#   on          (2), -- B'10  traction control is On (but not Engaged)\n"
  "#   engaged     (3)  -- B'11  traction control is Engaged\n"
  "#   }\n"
  "#\n"
  "\n"
  "uint8  traction_control_status \n"
  "\n"
  "# enumeration values for status:\n"
  "uint8  UNAVAILABLE=0\n"
  "uint8  OFF=1\n"
  "uint8  ON=2\n"
  "uint8  ENGAGED=3\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__TractionControlStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__TractionControlStatus__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 600, 600},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__TractionControlStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__TractionControlStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
