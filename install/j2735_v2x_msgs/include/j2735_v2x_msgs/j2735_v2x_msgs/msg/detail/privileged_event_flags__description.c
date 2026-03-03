// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PrivilegedEventFlags.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/privileged_event_flags__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PrivilegedEventFlags__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x92, 0xcb, 0x49, 0x88, 0x6a, 0xef, 0x29, 0xc6,
      0xf1, 0x82, 0xe9, 0x09, 0xac, 0xb9, 0xe0, 0x13,
      0xa7, 0xa3, 0xea, 0x4a, 0xd7, 0x9e, 0xed, 0xb9,
      0xc5, 0xeb, 0x8d, 0x8f, 0x6e, 0x1b, 0x34, 0x60,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__PrivilegedEventFlags__TYPE_NAME[] = "j2735_v2x_msgs/msg/PrivilegedEventFlags";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PrivilegedEventFlags__FIELD_NAME__privileged_event_flags[] = "privileged_event_flags";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PrivilegedEventFlags__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PrivilegedEventFlags__FIELD_NAME__privileged_event_flags, 22, 22},
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
j2735_v2x_msgs__msg__PrivilegedEventFlags__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PrivilegedEventFlags__TYPE_NAME, 39, 39},
      {j2735_v2x_msgs__msg__PrivilegedEventFlags__FIELDS, 1, 1},
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
  "# PrivilegedEventFlags.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# PrivilegedEventFlags ::= BIT STRING {\n"
  "#    -- These values require a suitable SSP to be sent\n"
  "#    peUnavailable                (0), -- Not Equipped or unavailable\n"
  "#    peEmergencyResponse          (1),\n"
  "#       -- The vehicle is a properly authorized public safety vehicle, \n"
  "#       -- is engaged in a service call, and is currently moving \n"
  "#       -- or is within the roadway.  Note that lights and sirens \n"
  "#       -- may not be evident during any given response call   \n"
  "# \n"
  "#    -- Emergency and Non Emergency Lights related\n"
  "#    peEmergencyLightsActive      (2),\n"
  "#    peEmergencySoundActive       (3),\n"
  "#    peNonEmergencyLightsActive   (4),\n"
  "#    peNonEmergencySoundActive    (5)\n"
  "# \n"
  "#    -- this list is likely to grow with further peer review\n"
  "#    } (SIZE (16))\n"
  "\n"
  "uint16 privileged_event_flags\n"
  "\n"
  "# Bit flags\n"
  "uint16 PE_UNAVAILABLE = 1\n"
  "uint16 PE_EMERGENCY_RESPONSE = 2\n"
  "uint16 PE_EMERGENCY_LIGHTS_ACTIVE = 4\n"
  "uint16 PE_EMERGENCY_SOUND_ACTIVE = 8\n"
  "uint16 PE_NON_EMERGENCY_LIGHTS_ACTIVE = 16\n"
  "uint16 PE_NON_EMERGENCY_SOUND_ACTIVE = 32";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PrivilegedEventFlags__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PrivilegedEventFlags__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1091, 1091},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PrivilegedEventFlags__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PrivilegedEventFlags__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
