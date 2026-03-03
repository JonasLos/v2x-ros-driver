// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/DailySchedule.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/daily_schedule__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__DailySchedule__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x58, 0x68, 0xa0, 0x55, 0xfa, 0x85, 0xdb, 0xe5,
      0xfe, 0x17, 0x25, 0xfa, 0x02, 0x71, 0xfa, 0x87,
      0x4e, 0xeb, 0xe1, 0xa0, 0x96, 0x1b, 0xd8, 0x0c,
      0x20, 0x42, 0x10, 0xf1, 0x0e, 0xe3, 0x1a, 0xc3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__DailySchedule__TYPE_NAME[] = "j2735_v2x_msgs/msg/DailySchedule";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__DailySchedule__FIELD_NAME__begin[] = "begin";
static char j2735_v2x_msgs__msg__DailySchedule__FIELD_NAME__duration[] = "duration";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__DailySchedule__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__DailySchedule__FIELD_NAME__begin, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DailySchedule__FIELD_NAME__duration, 8, 8},
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
j2735_v2x_msgs__msg__DailySchedule__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__DailySchedule__TYPE_NAME, 32, 32},
      {j2735_v2x_msgs__msg__DailySchedule__FIELDS, 2, 2},
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
  "# DailySchedule.msg\n"
  "#\n"
  "# Part of the CARMA Cloud geo-fence specification for vehicle internal use.\n"
  "#\n"
  "# @author Misheel Bayartsengel \n"
  "# @version 0.1\n"
  "#\n"
  "# Description\n"
  "# The schedule bounds of a geofence within a specific day of the week\n"
  "\n"
  "# DailySchedule ::= SEQUENCE\n"
  "# {\n"
  "# \\tbegin INTEGER (0..1439), -- minutes relative to midnight local time\n"
  "# \\tduration INTEGER (0..1439) -- the number of active minutes, up to one day\n"
  "# }\n"
  "\n"
  "# begin INTEGER (0..1439), -- minutes relative to midnight local time\n"
  "uint16 begin\n"
  "\n"
  "# duration INTEGER (0..1439) -- the number of active minutes, up to one day\n"
  "uint16 duration";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__DailySchedule__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__DailySchedule__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 597, 597},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__DailySchedule__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__DailySchedule__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
