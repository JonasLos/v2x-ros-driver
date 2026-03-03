// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/StabilityControlStatus.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/stability_control_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__StabilityControlStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x89, 0xa1, 0xab, 0xef, 0x37, 0xbe, 0x18, 0x08,
      0x5b, 0xaf, 0x6b, 0xab, 0x38, 0x92, 0x71, 0x76,
      0x9a, 0x7d, 0xee, 0x9c, 0x34, 0x76, 0x38, 0xf0,
      0xc4, 0x25, 0x1c, 0x81, 0x55, 0xb8, 0x16, 0x33,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__StabilityControlStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/StabilityControlStatus";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__StabilityControlStatus__FIELD_NAME__stability_control_status[] = "stability_control_status";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__StabilityControlStatus__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__StabilityControlStatus__FIELD_NAME__stability_control_status, 24, 24},
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
j2735_v2x_msgs__msg__StabilityControlStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__StabilityControlStatus__TYPE_NAME, 41, 41},
      {j2735_v2x_msgs__msg__StabilityControlStatus__FIELDS, 1, 1},
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
  "# StabilityControlStatus.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "\n"
  "#StabilityControlStatus ::= ENUMERATED {\n"
  "#   unavailable (0), -- B'00  Not Equipped with SC\n"
  "#                    --       or SC status is unavailable\n"
  "#   off         (1), -- B'01  Off\n"
  "#   on          (2), -- B'10  On or active (but not engaged)\n"
  "#   engaged     (3)  -- B'11  stability control is Engaged \n"
  "#   }\n"
  "#   \n"
  "\n"
  "uint8  stability_control_status \n"
  "\n"
  "# enumeration values for status:\n"
  "uint8  UNAVAILABLE=0\n"
  "uint8  OFF=1\n"
  "uint8  ON=2\n"
  "uint8  ENGAGED=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__StabilityControlStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__StabilityControlStatus__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 547, 547},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__StabilityControlStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__StabilityControlStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
