// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/AllowedManeuvers.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/allowed_maneuvers__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__AllowedManeuvers__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x88, 0x10, 0x46, 0x7e, 0x1b, 0xf6, 0x40, 0x6f,
      0x24, 0x4a, 0x8f, 0xcf, 0x3c, 0x7d, 0xfb, 0x07,
      0x3f, 0xeb, 0x18, 0x34, 0xf7, 0x84, 0xda, 0xb5,
      0x70, 0x37, 0x05, 0x14, 0x4d, 0xcf, 0x62, 0x7e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__AllowedManeuvers__TYPE_NAME[] = "j2735_v2x_msgs/msg/AllowedManeuvers";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__AllowedManeuvers__FIELD_NAME__allowed_maneuvers[] = "allowed_maneuvers";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__AllowedManeuvers__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__AllowedManeuvers__FIELD_NAME__allowed_maneuvers, 17, 17},
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
j2735_v2x_msgs__msg__AllowedManeuvers__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__AllowedManeuvers__TYPE_NAME, 35, 35},
      {j2735_v2x_msgs__msg__AllowedManeuvers__FIELDS, 1, 1},
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
  "# AllowedManeuvers.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# AllowedManeuvers ::= BIT STRING {\n"
  "# -- With bits as defined:\n"
  "# -- Allowed maneuvers at path end (stop line)\n"
  "# -- All maneuvers with bits not set are therefore prohibited !\n"
  "# -- A value of zero shall be used for unknown, indicating no Maneuver\n"
  "# maneuverStraightAllowed(0),\n"
  "# -- a Straight movement is allowed in this lane\n"
  "# maneuverLeftAllowed(1),\n"
  "# -- a Left Turn movement is allowed in this lane\n"
  "# maneuverRightAllowed(2),\n"
  "# -- a Right Turn movement is allowed in this lane\n"
  "# maneuverUTurnAllowed(3),\n"
  "# -- a U turn movement is allowed in this lane\n"
  "# maneuverLeftTurnOnRedAllowed (4),\n"
  "# -- a Stop, and then proceed when safe movement\n"
  "# -- is allowed in this lane\n"
  "# maneuverRightTurnOnRedAllowed (5),\n"
  "# -- a Stop, and then proceed when safe movement\n"
  "# -- is allowed in this lane\n"
  "# maneuverLaneChangeAllowed(6),\n"
  "# -- a movement which changes to an outer lane\n"
  "# -- on the egress side is allowed in this lane\n"
  "# -- (example: left into either outbound lane)\n"
  "# maneuverNoStoppingAllowed(7),\n"
  "# -- the vehicle should not stop at the stop line\n"
  "# -- (example: a flashing green arrow)\n"
  "# yieldAllwaysRequired(8),\n"
  "# -- the allowed movements above are not protected\n"
  "# -- (example: an permanent yellow condition)\n"
  "# goWithHalt(9),\n"
  "# -- after making a full stop, may proceed\n"
  "# caution(10),\n"
  "# -- proceed past stop line with caution\n"
  "# reserved1(11)\n"
  "# -- used to align to 12 Bit Field\n"
  "# } (SIZE(12))\n"
  "\n"
  "uint16 allowed_maneuvers\n"
  "\n"
  "# Bit flags\n"
  "uint16 STRAIGHT=1\n"
  "uint16 LEFT_TURN=2\n"
  "uint16 RIGHT_TURN=4\n"
  "uint16 U_TURN=8\n"
  "uint16 LEFT_TURN_ON_RED=16\n"
  "uint16 RIGHT_TURN_ON_RED=32\n"
  "uint16 LANE_CHANGE=64\n"
  "uint16 NO_STOPPING_ALLOWED=128\n"
  "uint16 ALWAYS_YIELD=256\n"
  "uint16 GO_WITH_HALT=512\n"
  "uint16 CAUTION=1024";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__AllowedManeuvers__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__AllowedManeuvers__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1765, 1765},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__AllowedManeuvers__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__AllowedManeuvers__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
