// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/WiperRate.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/wiper_rate__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__WiperRate__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7a, 0x92, 0x19, 0x8c, 0x1d, 0x75, 0x12, 0xd3,
      0x12, 0xfb, 0x93, 0x2b, 0x07, 0xc0, 0x9e, 0x5f,
      0x58, 0x03, 0xb3, 0x3e, 0x0e, 0x99, 0xe1, 0x60,
      0xcd, 0x8d, 0x7f, 0x53, 0x1d, 0x1a, 0x9f, 0xfa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__WiperRate__TYPE_NAME[] = "j2735_v2x_msgs/msg/WiperRate";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__WiperRate__FIELD_NAME__wiper_rate[] = "wiper_rate";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__WiperRate__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__WiperRate__FIELD_NAME__wiper_rate, 10, 10},
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
j2735_v2x_msgs__msg__WiperRate__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__WiperRate__TYPE_NAME, 28, 28},
      {j2735_v2x_msgs__msg__WiperRate__FIELDS, 1, 1},
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
  "# WiperRate.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# WiperRate ::= INTEGER (0..127) -- units of sweeps per minute\n"
  "# The current rate at which wiper sweeps are taking place on the subject vehicle, in units of sweeps per minute. A value\n"
  "# of one is used for any sweep rate with a period greater than 60 seconds.\n"
  "uint8 wiper_rate\n"
  "\n"
  "uint8 WIPER_RATE_MIN=1\n"
  "uint8 WIPER_RATE_MAX=127";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__WiperRate__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__WiperRate__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 376, 376},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__WiperRate__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__WiperRate__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
