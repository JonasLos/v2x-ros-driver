// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/MovementPhaseState.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/movement_phase_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__MovementPhaseState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf8, 0xed, 0x24, 0x7c, 0x59, 0x2a, 0x8a, 0xb6,
      0x02, 0xd3, 0xa8, 0x5e, 0xdc, 0x89, 0x11, 0x18,
      0x2c, 0x51, 0x90, 0x1e, 0xd1, 0x32, 0x41, 0xfc,
      0x6f, 0x2a, 0x5a, 0xd8, 0x0c, 0xd7, 0x03, 0x83,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__MovementPhaseState__TYPE_NAME[] = "j2735_v2x_msgs/msg/MovementPhaseState";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__MovementPhaseState__FIELD_NAME__movement_phase_state[] = "movement_phase_state";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__MovementPhaseState__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__MovementPhaseState__FIELD_NAME__movement_phase_state, 20, 20},
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
j2735_v2x_msgs__msg__MovementPhaseState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__MovementPhaseState__TYPE_NAME, 37, 37},
      {j2735_v2x_msgs__msg__MovementPhaseState__FIELDS, 1, 1},
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
  "# MovementEvent.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The DE_MovementPhaseState data element provides the overall current state of the movement (in many cases a\n"
  "# signal state), including its core phase state and an indication of whether this state is permissive or protected.\n"
  "#\n"
  "# MovementPhaseState ::= ENUMERATED {\n"
  "# -- Note that based on the regions and the operating mode not every\n"
  "# -- phase will be used in all transportation modes and that not\n"
  "# -- every phase will be used in all transportation modes\n"
  "# unavailable (0),\n"
  "# -- This state is used for unknown or error\n"
  "# dark (1),\n"
  "# -- The signal head is dark (unlit)\n"
  "# -- Reds\n"
  "# stop-Then-Proceed (2),\n"
  "# -- Often called 'flashing red' in US\n"
  "# -- Driver Action:\n"
  "# -Stop vehicle at stop line.\n"
  "# -Do not proceed unless it is safe.\n"
  "# -- Note that the right to proceed either right or left\n"
  "# -- it is safe may be contained in the lane description\n"
  "# -- handle what is called a 'right on red'\n"
  "# stop-And-Remain (3),\n"
  "# -- e.g. called 'red light' in US\n"
  "# -- Driver Action:\n"
  "# -Stop vehicle at stop line.\n"
  "# -Do not proceed.\n"
  "# -- Note that the right to proceed either right or left\n"
  "# -- it is safe may be contained in the lane description\n"
  "# -- handle what is called a 'right on red'\n"
  "# -- Greens\n"
  "# pre-Movement (4),\n"
  "# -- Not used in the US, red+yellow partly in EU\n"
  "# -- Driver Action:\n"
  "# -Stop vehicle.\n"
  "# -Prepare to proceed (pending green)\n"
  "# -(Prepare for transition to green/go)\n"
  "# permissive-Movement-Allowed (5),\n"
  "# -- Often called 'permissive green' in US\n"
  "# -- Driver Action:\n"
  "# -Proceed with caution,\n"
  "# -must yield to all conflicting traffic\n"
  "# -- Conflicting traffic may be present\n"
  "# -- in the intersection conflict area\n"
  "# protected-Movement-Allowed (6),\n"
  "# -- Often called 'protected green' in US\n"
  "# -- Driver Action:\n"
  "# -Proceed, tossing caution to the wind,\n"
  "# -in indicated (allowed) direction.\n"
  "# -- Yellows / Ambers\n"
  "# -- The vehicle is not allowed to cross the stop bar if it is possible\n"
  "# -- to stop without danger.\n"
  "# permissive-clearance (7),\n"
  "# -- Often called 'permissive yellow' in US\n"
  "# -- Driver Action:\n"
  "# -Prepare to stop.\n"
  "# -Proceed if unable to stop,\n"
  "# -Clear Intersection.\n"
  "# -- Conflicting traffic may be present\n"
  "# -- in the intersection conflict area\n"
  "# protected-clearance (8),\n"
  "# -- Often called 'protected yellow' in US\n"
  "# -- Driver Action:\n"
  "# -Prepare to stop.\n"
  "# -Proceed if unable to stop,\n"
  "# -in indicated direction (to connected lane)\n"
  "# -Clear Intersection.\n"
  "# caution-Conflicting-Traffic (9)\n"
  "# -- Often called 'flashing yellow' in US\n"
  "# -- Often used for extended periods of time\n"
  "# -- Driver Action:\n"
  "# -Proceed with caution,\n"
  "# -- Conflicting traffic may be present\n"
  "# -- in the intersection conflict area\n"
  "# }\n"
  "# -- The above number assignments are not used with UPER encoding\n"
  "# -- and are only to be used with DER or implicit encoding\n"
  "\n"
  "uint8 movement_phase_state\n"
  "\n"
  "uint8 UNAVAILABLE=0\n"
  "uint8 DARK=1\n"
  "uint8 STOP_THEN_PROCEED=2\n"
  "uint8 STOP_AND_REMAIN=3\n"
  "uint8 PRE_MOVEMENT=4\n"
  "uint8 PERMISSIVE_MOVEMENT_ALLOWED=5\n"
  "uint8 PROTECTED_MOVEMENT_ALLOWED=6\n"
  "uint8 PERMISSIVE_CLEARANCE=7\n"
  "uint8 PROTECTED_CLEARANCE=8\n"
  "uint8 CAUTION_CONFLICTING_TRAFFIC=9\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__MovementPhaseState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__MovementPhaseState__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 3127, 3127},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__MovementPhaseState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__MovementPhaseState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
