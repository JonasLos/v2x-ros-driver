// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/ConnectionManeuverAssist.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__ConnectionManeuverAssist__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7a, 0x9b, 0x9b, 0x0d, 0x12, 0x22, 0xa9, 0x55,
      0xb3, 0x30, 0x1b, 0xf9, 0x9a, 0xaf, 0x1d, 0xfd,
      0x85, 0xf2, 0x3d, 0x55, 0x4c, 0xe4, 0xd5, 0x41,
      0xaf, 0xe5, 0xe9, 0x80, 0xd2, 0x4a, 0x57, 0x2b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__ConnectionManeuverAssist__TYPE_NAME[] = "j2735_v2x_msgs/msg/ConnectionManeuverAssist";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELD_NAME__connection_id[] = "connection_id";
static char j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELD_NAME__queue_length[] = "queue_length";
static char j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELD_NAME__queue_length_exists[] = "queue_length_exists";
static char j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELD_NAME__available_storage_length[] = "available_storage_length";
static char j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELD_NAME__available_storage_length_exists[] = "available_storage_length_exists";
static char j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELD_NAME__wait_on_stop[] = "wait_on_stop";
static char j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELD_NAME__wait_on_stop_exists[] = "wait_on_stop_exists";
static char j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELD_NAME__ped_bicycle_detect[] = "ped_bicycle_detect";
static char j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELD_NAME__ped_bicycle_detect_exists[] = "ped_bicycle_detect_exists";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELD_NAME__connection_id, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELD_NAME__queue_length, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELD_NAME__queue_length_exists, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELD_NAME__available_storage_length, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELD_NAME__available_storage_length_exists, 31, 31},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELD_NAME__wait_on_stop, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELD_NAME__wait_on_stop_exists, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELD_NAME__ped_bicycle_detect, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELD_NAME__ped_bicycle_detect_exists, 25, 25},
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
j2735_v2x_msgs__msg__ConnectionManeuverAssist__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__ConnectionManeuverAssist__TYPE_NAME, 43, 43},
      {j2735_v2x_msgs__msg__ConnectionManeuverAssist__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "# The ConnectionManeuverAssist data frame contains information about the the dynamic flow of traffic for the lane(s)\n"
  "# and maneuvers in question (as determined by the LaneConnectionID). Note that this information can be sent regarding\n"
  "# any lane-to-lane movement; it need not be limited to the lanes with active (non-red) phases when sent.\n"
  "#\n"
  "# ConnectionManeuverAssist ::= SEQUENCE {\n"
  "# connectionID LaneConnectionID,\n"
  "# -- the common connectionID used by all lanes to which\n"
  "# -- this data applies\n"
  "# -- (this value traces to ConnectsTo entries in lanes)\n"
  "# -- Expected Clearance Information\n"
  "# queueLength ZoneLength OPTIONAL,\n"
  "# -- Unit = 1 meter, 0 = no queue\n"
  "# -- The distance from the stop line to the back\n"
  "# -- edge of the last vehicle in the queue,\n"
  "# -- as measured along the lane center line.\n"
  "# availableStorageLength ZoneLength OPTIONAL,\n"
  "# -- Unit = 1 meter, 0 = no space remains\n"
  "# -- Distance (e.g. beginning from the downstream\n"
  "# -- stop-line up to a given distance) with a high\n"
  "# -- probability for successfully executing the\n"
  "# -- connecting maneuver between the two lanes\n"
  "# -- during the current cycle.\n"
  "# -- Used for enhancing the awareness of vehicles\n"
  "# -- to anticipate if they can pass the stop line\n"
  "# -- of the lane. Used for optimizing the green wave,\n"
  "# -- due to knowledge of vehicles waiting in front\n"
  "# -- of a red light (downstream).\n"
  "# -- The element nextTime in TimeChangeDetails\n"
  "# -- in the containing data frame contains the next\n"
  "# -- timemark at which an active phase is expected,\n"
  "# -- a form of storage flush interval.\n"
  "# waitOnStop WaitOnStopline OPTIONAL,\n"
  "# -- If \"true\", the vehicles on this specific connecting\n"
  "# -- maneuver have to stop on the stop-line and not\n"
  "# -- to enter the collision area\n"
  "# pedBicycleDetect PedestrianBicycleDetect OPTIONAL,\n"
  "# -- true if ANY ped or bicycles are detected crossing\n"
  "# -- the above lanes. Set to false ONLY if there is a\n"
  "# -- high certainty that there are none present,\n"
  "# -- otherwise element is not sent.\n"
  "# regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-ConnectionManeuverAssist}} OPTIONAL,\n"
  "# ...\n"
  "# }\n"
  "\n"
  "# LaneConnectionID ::= INTEGER (0..255)\n"
  "uint8 connection_id\n"
  "\n"
  "# ZoneLength ::= INTEGER (0..10000)\n"
  "# -- Unit = 1 meter, 0 = unknown,\n"
  "# -- The value 10000 to be used for Distances >=10000 m\n"
  "# -- (e.g. from known point to another point along a\n"
  "# -- known path, often against traffic flow direction\n"
  "# -- when used for measuring queues)\n"
  "uint16 queue_length\n"
  "bool queue_length_exists\n"
  "\n"
  "# ZoneLength ::= INTEGER (0..10000)\n"
  "uint16 available_storage_length\n"
  "bool available_storage_length_exists\n"
  "\n"
  "# WaitOnStopline ::= BOOLEAN --- True or False\n"
  "# -- If \"true\", the vehicles on this specific connecting\n"
  "# -- maneuver have to stop on the stop-line\n"
  "# -- and not to enter the collision area\n"
  "bool wait_on_stop\n"
  "bool wait_on_stop_exists\n"
  "\n"
  "# PedestrianBicycleDetect ::= BOOLEAN\n"
  "# -- true if ANY Pedestrians or Bicyclists are\n"
  "# -- detected crossing the target lane or lanes\n"
  "bool ped_bicycle_detect\n"
  "bool ped_bicycle_detect_exists\n"
  "\n"
  "# regional #TODO: RegionalExtensions are not yet implemented in asn1c";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__ConnectionManeuverAssist__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__ConnectionManeuverAssist__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 3056, 3056},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__ConnectionManeuverAssist__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__ConnectionManeuverAssist__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
