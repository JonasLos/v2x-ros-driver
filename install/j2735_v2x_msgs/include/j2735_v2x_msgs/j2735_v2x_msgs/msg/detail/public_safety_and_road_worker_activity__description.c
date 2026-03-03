// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PublicSafetyAndRoadWorkerActivity.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/public_safety_and_road_worker_activity__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0x97, 0xdf, 0x31, 0x2b, 0x67, 0xb2, 0xb2,
      0x76, 0x50, 0x65, 0xc9, 0x1b, 0xa6, 0x2d, 0xea,
      0x09, 0xb5, 0x84, 0xc3, 0xe2, 0x65, 0x81, 0x75,
      0x09, 0x1c, 0x9d, 0x03, 0x4e, 0xd1, 0x23, 0x92,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__TYPE_NAME[] = "j2735_v2x_msgs/msg/PublicSafetyAndRoadWorkerActivity";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__FIELD_NAME__activities[] = "activities";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__FIELD_NAME__activities, 10, 10},
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
j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__TYPE_NAME, 52, 52},
      {j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__FIELDS, 1, 1},
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
  "# PublicSafetyAndRoadWorkerActivity.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of PropelledInformation from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# PublicSafetyAndRoadWorkerActivity ::= BIT STRING {\n"
  "#    unavailable          (0), -- Not specified\n"
  "#    workingOnRoad        (1), -- Road workers on foot, in or out of \n"
  "#                              -- a closure, performing activities like: \n"
  "#                              -- construction, land surveying, \n"
  "#                              -- trash removal, or site inspection.\n"
  "#    settingUpClosures    (2), -- Road workers on foot performing\n"
  "#                              -- activities like: setting up signs, \n"
  "#                              -- placing cones/barrels/pylons, or placing \n"
  "#                              -- flares.  Note: People are in the road \n"
  "#                              -- redirecting traffic, but the closure is \n"
  "#                              -- not complete, so utmost care is required \n"
  "#                              -- to determine the allowed path to take to \n"
  "#                              -- avoid entering the work zone and/or \n"
  "#                              -- harming the workers.\n"
  "#    respondingToEvents   (3), -- Public safety or other road workers on\n"
  "#                              -- foot performing activities like: treating \n"
  "#                              -- injured people, putting out fires, \n"
  "#                              -- cleaning chemical spills, aiding disabled \n"
  "#                              -- vehicles, criminal investigations, \n"
  "#                              -- or animal control.  Note: These events tend \n"
  "#                              -- to be more dynamic than workingOnRoad\n"
  "#    directingTraffic     (4), -- Public safety or other road workers on\n"
  "#                              -- foot directing traffic in situations like: \n"
  "#                              -- a traffic signal out of operation, \n"
  "#                              -- a construction or crash site with a short \n"
  "#                              -- term lane closure, a single lane flagging \n"
  "#                              -- operation, or ingress/egress to a special event.\n"
  "#    otherActivities      (5)  -- Designated by regional authorities  \n"
  "#    } (SIZE (6, ...))\n"
  "\n"
  "# A BIT STRING defining the presence of optional flags.\n"
  "# Compare with bitwise-and\n"
  "# if (activities & SETTING_UP_CLOSURES) etc.\n"
  "# Create with bitwise-or\n"
  "# activities = activities | SETTING_UP_CLOSURES\n"
  "uint8 activities\n"
  "\n"
  "uint8 UNAVAILABLE=0\n"
  "uint8 WORKING_ON_ROAD=1\n"
  "uint8 SETTING_UP_CLOSURES=2\n"
  "uint8 RESPONDING_TO_EVENTS=4\n"
  "uint8 DIRECTING_TRAFFIC=8\n"
  "uint8 OTHER_ACTIVITIES=16";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__TYPE_NAME, 52, 52},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2675, 2675},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
