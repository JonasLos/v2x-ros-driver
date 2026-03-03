// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/IntersectionStatusObject.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/intersection_status_object__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__IntersectionStatusObject__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0x09, 0xcc, 0xd6, 0x8d, 0x40, 0x53, 0x26,
      0xf6, 0x29, 0x47, 0xd1, 0xed, 0x39, 0xe3, 0x6f,
      0xda, 0x2b, 0xf9, 0x2d, 0x5a, 0x2c, 0x43, 0x18,
      0x58, 0xab, 0x47, 0xe2, 0xa9, 0x99, 0x3a, 0xe6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__IntersectionStatusObject__TYPE_NAME[] = "j2735_v2x_msgs/msg/IntersectionStatusObject";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__IntersectionStatusObject__FIELD_NAME__intersection_status_object[] = "intersection_status_object";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__IntersectionStatusObject__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__IntersectionStatusObject__FIELD_NAME__intersection_status_object, 26, 26},
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
j2735_v2x_msgs__msg__IntersectionStatusObject__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__IntersectionStatusObject__TYPE_NAME, 43, 43},
      {j2735_v2x_msgs__msg__IntersectionStatusObject__FIELDS, 1, 1},
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
  "# IntersectionStatusObject.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The Intersection Status Object contains Advanced Traffic Controller (ATC) status information that may be sent to\n"
  "# local OBUs as part of the SPAT process.\n"
  "\n"
  "# IntersectionStatusObject ::= BIT STRING {\n"
  "# manualControlIsEnabled (0),\n"
  "# -- Timing reported is per programmed values, etc. but person\n"
  "# -- at cabinet can manually request that certain intervals are\n"
  "# -- terminated early (e.g. green).\n"
  "# stopTimeIsActivated (1),\n"
  "# -- And all counting/timing has stopped.\n"
  "# failureFlash (2),\n"
  "# -- Above to be used for any detected hardware failures,\n"
  "# -- e.g. conflict monitor as well as for police flash\n"
  "# preemptIsActive (3),\n"
  "# signalPriorityIsActive (4),\n"
  "# -- Additional states\n"
  "# fixedTimeOperation (5),\n"
  "# -- Schedule of signals is based on time only\n"
  "# -- (i.e. the state can be calculated)\n"
  "# trafficDependentOperation (6),\n"
  "# -- Operation is based on different levels of traffic parameters\n"
  "# -- (requests, duration of gaps or more complex parameters)\n"
  "# standbyOperation (7),\n"
  "# -- Controller: partially switched off or partially amber flashing\n"
  "# failureMode (8),\n"
  "# -- Controller has a problem or failure in operation\n"
  "# off (9),\n"
  "# -- Controller is switched off\n"
  "# -- Related to MAP and SPAT bindings\n"
  "# recentMAPmessageUpdate (10),\n"
  "# -- Map revision with content changes\n"
  "# recentChangeInMAPassignedLanesIDsUsed (11),\n"
  "# -- Change in MAP's assigned lanes used (lane changes)\n"
  "# -- Changes in the active lane list description\n"
  "# noValidMAPisAvailableAtThisTime (12),\n"
  "# -- MAP (and various lanes indexes) not available\n"
  "# noValidSPATisAvailableAtThisTime (13)\n"
  "# -- SPAT system is not working at this time\n"
  "# -- Bits 14,15 reserved at this time and shall be zero\n"
  "# } (SIZE(16))\n"
  "\n"
  "uint16 intersection_status_object";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__IntersectionStatusObject__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__IntersectionStatusObject__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1797, 1797},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__IntersectionStatusObject__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__IntersectionStatusObject__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
