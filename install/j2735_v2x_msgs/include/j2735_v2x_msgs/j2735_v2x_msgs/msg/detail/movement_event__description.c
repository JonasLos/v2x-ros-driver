// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/MovementEvent.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/movement_event__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__MovementEvent__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x24, 0xf9, 0x84, 0xf7, 0x9d, 0x0c, 0x51, 0x8e,
      0x63, 0x4f, 0xa3, 0xac, 0x32, 0x55, 0x50, 0x8d,
      0x0d, 0x84, 0x57, 0xef, 0xfa, 0xd0, 0xc0, 0x6f,
      0xc7, 0x7c, 0x4d, 0xa2, 0xd2, 0x4e, 0x4d, 0xb2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/advisory_speed__functions.h"
#include "j2735_v2x_msgs/msg/detail/movement_phase_state__functions.h"
#include "j2735_v2x_msgs/msg/detail/advisory_speed_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/time_change_details__functions.h"
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

static char j2735_v2x_msgs__msg__MovementEvent__TYPE_NAME[] = "j2735_v2x_msgs/msg/MovementEvent";
static char j2735_v2x_msgs__msg__AdvisorySpeed__TYPE_NAME[] = "j2735_v2x_msgs/msg/AdvisorySpeed";
static char j2735_v2x_msgs__msg__AdvisorySpeedList__TYPE_NAME[] = "j2735_v2x_msgs/msg/AdvisorySpeedList";
static char j2735_v2x_msgs__msg__AdvisorySpeedType__TYPE_NAME[] = "j2735_v2x_msgs/msg/AdvisorySpeedType";
static char j2735_v2x_msgs__msg__MovementPhaseState__TYPE_NAME[] = "j2735_v2x_msgs/msg/MovementPhaseState";
static char j2735_v2x_msgs__msg__SpeedConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedConfidence";
static char j2735_v2x_msgs__msg__TimeChangeDetails__TYPE_NAME[] = "j2735_v2x_msgs/msg/TimeChangeDetails";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__MovementEvent__FIELD_NAME__event_state[] = "event_state";
static char j2735_v2x_msgs__msg__MovementEvent__FIELD_NAME__timing[] = "timing";
static char j2735_v2x_msgs__msg__MovementEvent__FIELD_NAME__timing_exists[] = "timing_exists";
static char j2735_v2x_msgs__msg__MovementEvent__FIELD_NAME__speeds[] = "speeds";
static char j2735_v2x_msgs__msg__MovementEvent__FIELD_NAME__speeds_exists[] = "speeds_exists";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__MovementEvent__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__MovementEvent__FIELD_NAME__event_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__MovementPhaseState__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__MovementEvent__FIELD_NAME__timing, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__TimeChangeDetails__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__MovementEvent__FIELD_NAME__timing_exists, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__MovementEvent__FIELD_NAME__speeds, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__AdvisorySpeedList__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__MovementEvent__FIELD_NAME__speeds_exists, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__MovementEvent__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
j2735_v2x_msgs__msg__MovementEvent__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__MovementEvent__TYPE_NAME, 32, 32},
      {j2735_v2x_msgs__msg__MovementEvent__FIELDS, 5, 5},
    },
    {j2735_v2x_msgs__msg__MovementEvent__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AdvisorySpeed__EXPECTED_HASH, j2735_v2x_msgs__msg__AdvisorySpeed__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__AdvisorySpeed__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AdvisorySpeedList__EXPECTED_HASH, j2735_v2x_msgs__msg__AdvisorySpeedList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__AdvisorySpeedList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AdvisorySpeedType__EXPECTED_HASH, j2735_v2x_msgs__msg__AdvisorySpeedType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__AdvisorySpeedType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__MovementPhaseState__EXPECTED_HASH, j2735_v2x_msgs__msg__MovementPhaseState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__MovementPhaseState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SpeedConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__SpeedConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__SpeedConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TimeChangeDetails__EXPECTED_HASH, j2735_v2x_msgs__msg__TimeChangeDetails__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__TimeChangeDetails__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# MovementEvent.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The MovementEvent data frame contains details about a single movement. It is used by the movement state to\n"
  "# convey one of number of movements (typically occurring over a sequence of times) for a SignalGroupID.\n"
  "#\n"
  "# MovementEvent ::= SEQUENCE {\n"
  "# eventState MovementPhaseState,\n"
  "# -- Consisting of:\n"
  "# -- Phase state (the basic 11 states)\n"
  "# -- Directional, protected, or permissive state\n"
  "# timing TimeChangeDetails OPTIONAL,\n"
  "# -- Timing Data in UTC time stamps for event\n"
  "# -- includes start and min/max end times of phase\n"
  "# -- confidence and estimated next occurrence\n"
  "# speeds AdvisorySpeedList OPTIONAL,\n"
  "# -- various speed advisories for use by\n"
  "# -- general and specific types of vehicles\n"
  "# -- supporting green-wave and other flow needs\n"
  "# -- See Section 11 for converting and translating\n"
  "# -- speed expressed in mph into units of m/s\n"
  "# regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-MovementEvent}} OPTIONAL,\n"
  "# ...\n"
  "# }\n"
  "\n"
  "j2735_v2x_msgs/MovementPhaseState event_state\n"
  "\n"
  "j2735_v2x_msgs/TimeChangeDetails timing\n"
  "bool timing_exists\n"
  "\n"
  "j2735_v2x_msgs/AdvisorySpeedList speeds\n"
  "bool speeds_exists\n"
  "\n"
  "#regional #TODO: RegionalExtensions are not yet implemented in asn1c\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__MovementEvent__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__MovementEvent__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1268, 1268},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__MovementEvent__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__MovementEvent__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__AdvisorySpeed__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__AdvisorySpeedList__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__AdvisorySpeedType__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__MovementPhaseState__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__SpeedConfidence__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__TimeChangeDetails__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
