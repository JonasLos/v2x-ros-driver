// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/movement_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__MovementState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfc, 0xcb, 0x78, 0xa9, 0x8a, 0x8f, 0xa9, 0x28,
      0x8e, 0x23, 0x0e, 0x54, 0xde, 0x55, 0xec, 0x66,
      0x8a, 0x49, 0x78, 0x57, 0xa3, 0x43, 0x6c, 0xb3,
      0xb2, 0xca, 0x60, 0x61, 0xf2, 0x36, 0xb5, 0x8d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/advisory_speed__functions.h"
#include "j2735_v2x_msgs/msg/detail/maneuver_assist_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/movement_phase_state__functions.h"
#include "j2735_v2x_msgs/msg/detail/advisory_speed_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/time_change_details__functions.h"
#include "j2735_v2x_msgs/msg/detail/movement_event__functions.h"
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__functions.h"
#include "j2735_v2x_msgs/msg/detail/movement_event_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/advisory_speed_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/speed_confidence__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AdvisorySpeed__EXPECTED_HASH = {1, {
    0x05, 0x16, 0x3d, 0x12, 0xed, 0x6c, 0xe3, 0x79,
    0xf0, 0xc5, 0x41, 0x46, 0xf4, 0xf9, 0xc9, 0x98,
    0x69, 0x06, 0xea, 0x43, 0x3a, 0x87, 0xce, 0x3e,
    0x37, 0x35, 0x3e, 0x67, 0x46, 0xa5, 0xab, 0xb2,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AdvisorySpeedList__EXPECTED_HASH = {1, {
    0x7f, 0xf1, 0x2d, 0xc8, 0x5e, 0x97, 0xc5, 0xd4,
    0x50, 0x81, 0x5f, 0x44, 0x1c, 0x60, 0xc2, 0x50,
    0x27, 0xf8, 0x74, 0x55, 0x97, 0x1d, 0xa0, 0x05,
    0xb7, 0x1f, 0xc2, 0xe4, 0x87, 0x22, 0xc0, 0x21,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AdvisorySpeedType__EXPECTED_HASH = {1, {
    0x82, 0xbc, 0xdb, 0x3e, 0x13, 0xa7, 0x4e, 0x6e,
    0xe1, 0xe5, 0x3f, 0x03, 0xc5, 0x51, 0xfe, 0x3b,
    0xe2, 0xc1, 0x1f, 0xae, 0x97, 0x44, 0xdb, 0x46,
    0x2a, 0x21, 0x08, 0x06, 0x41, 0x8e, 0x0c, 0x8b,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ConnectionManeuverAssist__EXPECTED_HASH = {1, {
    0x7a, 0x9b, 0x9b, 0x0d, 0x12, 0x22, 0xa9, 0x55,
    0xb3, 0x30, 0x1b, 0xf9, 0x9a, 0xaf, 0x1d, 0xfd,
    0x85, 0xf2, 0x3d, 0x55, 0x4c, 0xe4, 0xd5, 0x41,
    0xaf, 0xe5, 0xe9, 0x80, 0xd2, 0x4a, 0x57, 0x2b,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ManeuverAssistList__EXPECTED_HASH = {1, {
    0xc4, 0x06, 0x3e, 0x11, 0x45, 0x5a, 0x63, 0xb1,
    0x37, 0x07, 0x0c, 0x10, 0xef, 0x9e, 0xa3, 0x27,
    0xe6, 0x1b, 0x0b, 0x7f, 0x5a, 0x9c, 0x7b, 0xfa,
    0xb4, 0xa6, 0x6d, 0x41, 0xbb, 0x20, 0x53, 0xf6,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__MovementEvent__EXPECTED_HASH = {1, {
    0x24, 0xf9, 0x84, 0xf7, 0x9d, 0x0c, 0x51, 0x8e,
    0x63, 0x4f, 0xa3, 0xac, 0x32, 0x55, 0x50, 0x8d,
    0x0d, 0x84, 0x57, 0xef, 0xfa, 0xd0, 0xc0, 0x6f,
    0xc7, 0x7c, 0x4d, 0xa2, 0xd2, 0x4e, 0x4d, 0xb2,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__MovementEventList__EXPECTED_HASH = {1, {
    0x05, 0x99, 0x98, 0x53, 0xce, 0x79, 0xdf, 0x56,
    0xcc, 0x4c, 0xf1, 0x6e, 0x05, 0xe2, 0x57, 0x68,
    0x4f, 0x1d, 0x1e, 0xd3, 0xc2, 0xd7, 0x9d, 0xab,
    0x54, 0x56, 0x76, 0x90, 0xf2, 0xb2, 0x3d, 0x91,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__MovementPhaseState__EXPECTED_HASH = {1, {
    0xf8, 0xed, 0x24, 0x7c, 0x59, 0x2a, 0x8a, 0xb6,
    0x02, 0xd3, 0xa8, 0x5e, 0xdc, 0x89, 0x11, 0x18,
    0x2c, 0x51, 0x90, 0x1e, 0xd1, 0x32, 0x41, 0xfc,
    0x6f, 0x2a, 0x5a, 0xd8, 0x0c, 0xd7, 0x03, 0x83,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__SpeedConfidence__EXPECTED_HASH = {1, {
    0x60, 0x1a, 0x6a, 0xf8, 0x51, 0xec, 0x0e, 0x4d,
    0xfc, 0x8b, 0x6a, 0x0c, 0x60, 0x8f, 0x60, 0xb6,
    0xbe, 0x2d, 0xc5, 0x7b, 0x58, 0x7d, 0x3e, 0x76,
    0x56, 0xb2, 0x1c, 0x09, 0xd8, 0x59, 0x20, 0xa0,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TimeChangeDetails__EXPECTED_HASH = {1, {
    0x32, 0xb4, 0xb8, 0x90, 0xd3, 0xa8, 0x9a, 0x60,
    0x01, 0x8b, 0xed, 0xfd, 0xf0, 0x0e, 0xdf, 0x44,
    0xbd, 0x28, 0x12, 0x1e, 0x07, 0xe6, 0xce, 0xe9,
    0xfb, 0xba, 0x99, 0x14, 0xbd, 0x8f, 0xd4, 0x4b,
  }};
#endif

static char j2735_v2x_msgs__msg__MovementState__TYPE_NAME[] = "j2735_v2x_msgs/msg/MovementState";
static char j2735_v2x_msgs__msg__AdvisorySpeed__TYPE_NAME[] = "j2735_v2x_msgs/msg/AdvisorySpeed";
static char j2735_v2x_msgs__msg__AdvisorySpeedList__TYPE_NAME[] = "j2735_v2x_msgs/msg/AdvisorySpeedList";
static char j2735_v2x_msgs__msg__AdvisorySpeedType__TYPE_NAME[] = "j2735_v2x_msgs/msg/AdvisorySpeedType";
static char j2735_v2x_msgs__msg__ConnectionManeuverAssist__TYPE_NAME[] = "j2735_v2x_msgs/msg/ConnectionManeuverAssist";
static char j2735_v2x_msgs__msg__ManeuverAssistList__TYPE_NAME[] = "j2735_v2x_msgs/msg/ManeuverAssistList";
static char j2735_v2x_msgs__msg__MovementEvent__TYPE_NAME[] = "j2735_v2x_msgs/msg/MovementEvent";
static char j2735_v2x_msgs__msg__MovementEventList__TYPE_NAME[] = "j2735_v2x_msgs/msg/MovementEventList";
static char j2735_v2x_msgs__msg__MovementPhaseState__TYPE_NAME[] = "j2735_v2x_msgs/msg/MovementPhaseState";
static char j2735_v2x_msgs__msg__SpeedConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedConfidence";
static char j2735_v2x_msgs__msg__TimeChangeDetails__TYPE_NAME[] = "j2735_v2x_msgs/msg/TimeChangeDetails";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__MovementState__FIELD_NAME__movement_name[] = "movement_name";
static char j2735_v2x_msgs__msg__MovementState__FIELD_NAME__movement_name_exists[] = "movement_name_exists";
static char j2735_v2x_msgs__msg__MovementState__FIELD_NAME__signal_group[] = "signal_group";
static char j2735_v2x_msgs__msg__MovementState__FIELD_NAME__state_time_speed[] = "state_time_speed";
static char j2735_v2x_msgs__msg__MovementState__FIELD_NAME__maneuver_assist_list[] = "maneuver_assist_list";
static char j2735_v2x_msgs__msg__MovementState__FIELD_NAME__maneuver_assist_list_exists[] = "maneuver_assist_list_exists";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__MovementState__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__MovementState__FIELD_NAME__movement_name, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__MovementState__FIELD_NAME__movement_name_exists, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__MovementState__FIELD_NAME__signal_group, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__MovementState__FIELD_NAME__state_time_speed, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__MovementEventList__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__MovementState__FIELD_NAME__maneuver_assist_list, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__ManeuverAssistList__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__MovementState__FIELD_NAME__maneuver_assist_list_exists, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__MovementState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__AdvisorySpeed__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AdvisorySpeedList__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AdvisorySpeedType__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ConnectionManeuverAssist__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ManeuverAssistList__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__MovementEvent__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__MovementEventList__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__MovementPhaseState__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SpeedConfidence__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TimeChangeDetails__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__MovementState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__MovementState__TYPE_NAME, 32, 32},
      {j2735_v2x_msgs__msg__MovementState__FIELDS, 6, 6},
    },
    {j2735_v2x_msgs__msg__MovementState__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AdvisorySpeed__EXPECTED_HASH, j2735_v2x_msgs__msg__AdvisorySpeed__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__AdvisorySpeed__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AdvisorySpeedList__EXPECTED_HASH, j2735_v2x_msgs__msg__AdvisorySpeedList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__AdvisorySpeedList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AdvisorySpeedType__EXPECTED_HASH, j2735_v2x_msgs__msg__AdvisorySpeedType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__AdvisorySpeedType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ConnectionManeuverAssist__EXPECTED_HASH, j2735_v2x_msgs__msg__ConnectionManeuverAssist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__ConnectionManeuverAssist__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ManeuverAssistList__EXPECTED_HASH, j2735_v2x_msgs__msg__ManeuverAssistList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__ManeuverAssistList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__MovementEvent__EXPECTED_HASH, j2735_v2x_msgs__msg__MovementEvent__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__MovementEvent__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__MovementEventList__EXPECTED_HASH, j2735_v2x_msgs__msg__MovementEventList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = j2735_v2x_msgs__msg__MovementEventList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__MovementPhaseState__EXPECTED_HASH, j2735_v2x_msgs__msg__MovementPhaseState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = j2735_v2x_msgs__msg__MovementPhaseState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SpeedConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__SpeedConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = j2735_v2x_msgs__msg__SpeedConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TimeChangeDetails__EXPECTED_HASH, j2735_v2x_msgs__msg__TimeChangeDetails__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = j2735_v2x_msgs__msg__TimeChangeDetails__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# MovementState.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The MovementState data frame is used to convey various information about the current or future movement state of\n"
  "# a designated collection of one or more lanes of a common type. This is referred to as the GroupID. Note that lane object\n"
  "# types supported include both motorized vehicle lanes as well as pedestrian lanes and dedicated rail and transit lanes. Of\n"
  "# the reported data elements, the time to change (the time remaining in the current state) is often of the most value. Lanes\n"
  "# with a common state (typically adjacent sets of lanes in an approach) in a signalized intersection will have individual lane\n"
  "# values such as total vehicle counts, summed. It is used in the SPAT message to convey every active movement in a\n"
  "# given intersection so that vehicles, when combined with certain map information, can determine the state of the signal\n"
  "# phases.\n"
  "#\n"
  "# MovementState ::= SEQUENCE {\n"
  "# movementName DescriptiveName OPTIONAL,\n"
  "# -- uniquely defines movement by name\n"
  "# -- human readable name for intersection\n"
  "# -- to be used only in debug mode\n"
  "# signalGroup SignalGroupID,\n"
  "# -- the group id is used to map to lists\n"
  "# -- of lanes (and their descriptions)\n"
  "# -- which this MovementState data applies to\n"
  "# -- see comments in the Remarks for usage details\n"
  "# state-time-speed MovementEventList,\n"
  "# -- Consisting of sets of movement data with:\n"
  "# -- a) SignalPhaseState\n"
  "# -- b) TimeChangeDetails, and\n"
  "# -- c) AdvisorySpeeds (optional )\n"
  "# -- Note one or more of the movement events may be for\n"
  "# -- a future time and that this allows conveying multiple\n"
  "# -- predictive phase and movement timing for various uses\n"
  "# -- for the current signal group\n"
  "# maneuverAssistList ManeuverAssistList OPTIONAL,\n"
  "# -- This information may also be placed in the\n"
  "# -- IntersectionState when common information applies to\n"
  "# -- different lanes in the same way\n"
  "# regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-MovementState}} OPTIONAL,\n"
  "# ...\n"
  "# }\n"
  "\n"
  "\n"
  "# DescriptiveName OPTIONAL := IA5String (SIZE(1..63))\n"
  "# -- often for debug use only\n"
  "# -- but at times used to name ped crossings\n"
  "string movement_name\n"
  "bool movement_name_exists\n"
  "\n"
  "# SignalGroupID ::= INTEGER (0..255)\n"
  "# -- The value 0 shall be used when the ID is\n"
  "# -- not available or known\n"
  "# -- the value 255 is reserved to indicate a\n"
  "# -- permanent green movement state\n"
  "uint8 signal_group\n"
  "\n"
  "# state-time-speed MovementEventList\n"
  "j2735_v2x_msgs/MovementEventList state_time_speed\n"
  "\n"
  "j2735_v2x_msgs/ManeuverAssistList maneuver_assist_list\n"
  "bool maneuver_assist_list_exists\n"
  "\n"
  "# regional #TODO: RegionalExtensions are not yet implemented in asn1c";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__MovementState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__MovementState__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2667, 2667},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__MovementState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__MovementState__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__AdvisorySpeed__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__AdvisorySpeedList__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__AdvisorySpeedType__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__ConnectionManeuverAssist__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__ManeuverAssistList__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__MovementEvent__get_individual_type_description_source(NULL);
    sources[7] = *j2735_v2x_msgs__msg__MovementEventList__get_individual_type_description_source(NULL);
    sources[8] = *j2735_v2x_msgs__msg__MovementPhaseState__get_individual_type_description_source(NULL);
    sources[9] = *j2735_v2x_msgs__msg__SpeedConfidence__get_individual_type_description_source(NULL);
    sources[10] = *j2735_v2x_msgs__msg__TimeChangeDetails__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
