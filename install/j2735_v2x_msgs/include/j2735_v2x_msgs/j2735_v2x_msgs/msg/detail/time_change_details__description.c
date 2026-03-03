// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/TimeChangeDetails.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/time_change_details__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__TimeChangeDetails__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0xb4, 0xb8, 0x90, 0xd3, 0xa8, 0x9a, 0x60,
      0x01, 0x8b, 0xed, 0xfd, 0xf0, 0x0e, 0xdf, 0x44,
      0xbd, 0x28, 0x12, 0x1e, 0x07, 0xe6, 0xce, 0xe9,
      0xfb, 0xba, 0x99, 0x14, 0xbd, 0x8f, 0xd4, 0x4b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__TimeChangeDetails__TYPE_NAME[] = "j2735_v2x_msgs/msg/TimeChangeDetails";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__start_time[] = "start_time";
static char j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__start_time_exists[] = "start_time_exists";
static char j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__min_end_time[] = "min_end_time";
static char j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__max_end_time[] = "max_end_time";
static char j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__max_end_time_exists[] = "max_end_time_exists";
static char j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__likely_time[] = "likely_time";
static char j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__likely_time_exists[] = "likely_time_exists";
static char j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__confidence[] = "confidence";
static char j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__confidence_exists[] = "confidence_exists";
static char j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__next_time[] = "next_time";
static char j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__next_time_exists[] = "next_time_exists";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__TimeChangeDetails__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__start_time, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__start_time_exists, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__min_end_time, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__max_end_time, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__max_end_time_exists, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__likely_time, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__likely_time_exists, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__confidence, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__confidence_exists, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__next_time, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TimeChangeDetails__FIELD_NAME__next_time_exists, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__TimeChangeDetails__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__TimeChangeDetails__TYPE_NAME, 36, 36},
      {j2735_v2x_msgs__msg__TimeChangeDetails__FIELDS, 11, 11},
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
  "# TimeChangeDetails.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The DF_TimeChangeDetails data frame conveys details about the timing of a phase within a movement. The core\n"
  "# data concept expressed is the time stamp (time mark) at which the related phase will change to the next state. This is\n"
  "# often found in the MinEndTime element, but the other elements may be needed to convey the full concept when adaptive\n"
  "# timing is employed.\n"
  "#\n"
  "#\n"
  "# TimeChangeDetails ::= SEQUENCE {\n"
  "# startTime TimeMark OPTIONAL,\n"
  "# -- When this phase 1st started\n"
  "# minEndTime TimeMark,\n"
  "# -- Expected shortest end time\n"
  "# maxEndTime TimeMark OPTIONAL,\n"
  "# -- Expected longest end time\n"
  "# likelyTime TimeMark OPTIONAL,\n"
  "# -- Best predicted value based on other data\n"
  "# confidence TimeIntervalConfidence OPTIONAL,\n"
  "# -- Applies to above time element only\n"
  "# nextTime TimeMark OPTIONAL\n"
  "# -- A rough estimate of time when\n"
  "# -- this phase may next occur again\n"
  "# -- used to support various ECO driving power\n"
  "# -- management needs.\n"
  "# }\n"
  "\n"
  "# TimeMark ::= INTEGER (0..36001)\n"
  "# -- Tenths of a second in the current or next hour\n"
  "# -- In units of 1/10th second from UTC time\n"
  "# -- A range of 0~36000 covers one hour\n"
  "# -- The values 35991..35999 are used when a leap second occurs\n"
  "# -- The value 36000 is used to indicate time >3600 seconds\n"
  "# -- 36001 is to be used when value undefined or unknown\n"
  "# -- Note that this is NOT expressed in GPS time\n"
  "# -- or in local time\n"
  "uint16 start_time\n"
  "bool start_time_exists\n"
  "\n"
  "uint16 min_end_time\n"
  "\n"
  "uint16 max_end_time\n"
  "bool max_end_time_exists\n"
  "\n"
  "uint16 likely_time\n"
  "bool likely_time_exists\n"
  "\n"
  "#TimeIntervalConfidence ::= INTEGER (0..15)\n"
  "uint8 confidence\n"
  "bool confidence_exists\n"
  "\n"
  "# TimeMark ::= INTEGER (0..36001)\n"
  "uint16 next_time\n"
  "bool next_time_exists\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__TimeChangeDetails__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__TimeChangeDetails__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1764, 1764},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__TimeChangeDetails__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__TimeChangeDetails__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
