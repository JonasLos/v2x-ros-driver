// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/AntiLockBrakeStatus.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/anti_lock_brake_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__AntiLockBrakeStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x58, 0x15, 0x5f, 0x60, 0xf0, 0x68, 0x34, 0x11,
      0xdc, 0x60, 0x64, 0x6e, 0x17, 0x20, 0xe6, 0x61,
      0x83, 0x7e, 0x02, 0x03, 0xd8, 0x58, 0x50, 0x7e,
      0x61, 0x64, 0x2f, 0x4a, 0xb5, 0xee, 0xe2, 0x74,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__AntiLockBrakeStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/AntiLockBrakeStatus";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__AntiLockBrakeStatus__FIELD_NAME__anti_lock_brake_status[] = "anti_lock_brake_status";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__AntiLockBrakeStatus__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__AntiLockBrakeStatus__FIELD_NAME__anti_lock_brake_status, 22, 22},
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
j2735_v2x_msgs__msg__AntiLockBrakeStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__AntiLockBrakeStatus__TYPE_NAME, 38, 38},
      {j2735_v2x_msgs__msg__AntiLockBrakeStatus__FIELDS, 1, 1},
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
  "# AntiLockBrakeStatus.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "\n"
  "#AntiLockBrakeStatus ::= ENUMERATED {\n"
  "#   unavailable (0), -- B'00  Vehicle Not Equipped with ABS Brakes \n"
  "#                    --       or ABS Brakes status is unavailable\n"
  "#   off         (1), -- B'01  Vehicle's ABS are Off\n"
  "#   on          (2), -- B'10  Vehicle's ABS are On ( but not Engaged )\n"
  "#   engaged     (3)  -- B'11  Vehicle's ABS control is Engaged on any wheel\n"
  "#   }\n"
  "#\n"
  "\n"
  "uint8  anti_lock_brake_status \n"
  "\n"
  "# enumeration values for status:\n"
  "uint8  UNAVAILABLE=0\n"
  "uint8  OFF=1\n"
  "uint8  ON=2\n"
  "uint8  ENGAGED=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__AntiLockBrakeStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__AntiLockBrakeStatus__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 605, 605},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__AntiLockBrakeStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__AntiLockBrakeStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
