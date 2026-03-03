// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/WiperStatus.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/wiper_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__WiperStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd1, 0xa2, 0x76, 0xb7, 0x40, 0xaa, 0x00, 0x2a,
      0xaa, 0x4b, 0x1d, 0xba, 0xdf, 0xb6, 0x69, 0xab,
      0x27, 0x1d, 0xf9, 0x1c, 0x91, 0xc2, 0xe4, 0xb4,
      0xa5, 0xcb, 0xee, 0x45, 0xee, 0x64, 0x0a, 0x0b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__WiperStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/WiperStatus";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__WiperStatus__FIELD_NAME__wiper_status[] = "wiper_status";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__WiperStatus__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__WiperStatus__FIELD_NAME__wiper_status, 12, 12},
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
j2735_v2x_msgs__msg__WiperStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__WiperStatus__TYPE_NAME, 30, 30},
      {j2735_v2x_msgs__msg__WiperStatus__FIELDS, 1, 1},
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
  "# WiperStatus.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# WiperStatus ::= ENUMERATED {\n"
  "#      unavailable         (0), -- Not Equipped with wiper status\n"
  "#                               -- or wiper status is unavailable\n"
  "#      off                 (1),  \n"
  "#      intermittent        (2), \n"
  "#      low                 (3),\n"
  "#      high                (4),\n"
  "#      washerInUse         (5), -- washing solution being used\n"
  "#      automaticPresent    (6), -- Auto wiper equipped\n"
  "#      ...  \n"
  "#      }\n"
  "uint8 wiper_status\n"
  "\n"
  "# Enumeration values for wiper_status\n"
  "uint8 UNAVAILABLE=0\n"
  "uint8 OFF=1\n"
  "uint8 INTERMITTENT=2\n"
  "uint8 LOW=3\n"
  "uint8 HIGH=4\n"
  "uint8 WASHER_IN_USE=5\n"
  "uint8 AUTOMATIC_PRESENT=6";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__WiperStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__WiperStatus__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 671, 671},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__WiperStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__WiperStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
