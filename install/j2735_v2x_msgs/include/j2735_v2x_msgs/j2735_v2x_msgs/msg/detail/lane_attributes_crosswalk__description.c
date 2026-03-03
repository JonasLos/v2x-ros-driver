// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/LaneAttributesCrosswalk.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/lane_attributes_crosswalk__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5f, 0x50, 0x48, 0xe1, 0xd4, 0x5a, 0x51, 0xc6,
      0x2a, 0xdc, 0x3c, 0x5f, 0x49, 0x11, 0xca, 0xa0,
      0x7b, 0x79, 0x87, 0x08, 0x0c, 0xe4, 0x67, 0x0b,
      0xad, 0xdb, 0xe8, 0x8a, 0xe5, 0x3d, 0x85, 0x4c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__LaneAttributesCrosswalk__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesCrosswalk";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__LaneAttributesCrosswalk__FIELD_NAME__lane_attributes_crosswalk[] = "lane_attributes_crosswalk";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__LaneAttributesCrosswalk__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__LaneAttributesCrosswalk__FIELD_NAME__lane_attributes_crosswalk, 25, 25},
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
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__LaneAttributesCrosswalk__TYPE_NAME, 42, 42},
      {j2735_v2x_msgs__msg__LaneAttributesCrosswalk__FIELDS, 1, 1},
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
  "# LaneAttributesCrosswalk.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "\n"
  "# LaneAttributes-Crosswalk ::= BIT STRING {\n"
  "# \\t-- With bits as defined:\n"
  "# \\t-- MUTCD provides no suitable \"types\" to use here\n"
  "# \\tcrosswalkRevocableLane (0),\n"
  "# \\t\\t-- this lane may be activated or not based\n"
  "# \\t\\t-- on the current SPAT message contents\n"
  "# \\t\\t-- if not asserted, the lane is ALWAYS present\n"
  "# \\tbicyleUseAllowed (1),\n"
  "# \\t\\t-- The path allows bicycle traffic,\n"
  "# \\t\\t-- if not set, this mode is prohibited\n"
  "# \\tisXwalkFlyOverLane (2),\n"
  "# \\t\\t-- path of lane is not at grade\n"
  "# \\tfixedCycleTime (3),\n"
  "# \\t\\t-- ped walk phases use preset times\n"
  "# \\t\\t-- i.e. there is not a 'push to cross' button\n"
  "# \\tbiDirectionalCycleTimes (4),\n"
  "# \\t\\t-- ped walk phases use different SignalGroupID\n"
  "# \\t\\t-- for each direction. The first SignalGroupID\n"
  "# \\t\\t-- in the first Connection represents 'inbound'\n"
  "# \\t\\t-- flow (the direction of travel towards the first\n"
  "# \\t\\t-- node point) while second SignalGroupID in the\n"
  "# \\t\\t-- next Connection entry represents the 'outbound'\n"
  "# \\t\\t-- flow. And use of RestrictionClassID entries\n"
  "# \\t\\t-- in the Connect follow this same pattern in pairs.\n"
  "# \\thasPushToWalkButton (5),\n"
  "# \\t\\t-- Has a demand input\n"
  "# \\taudioSupport (6),\n"
  "# \\t\\t-- audio crossing cues present\n"
  "# \\trfSignalRequestPresent (7),\n"
  "# \\t\\t-- Supports RF push to walk technologies\n"
  "# \\tunsignalizedSegmentsPresent (8)\n"
  "# \\t\\t-- The lane path consists of one of more segments\n"
  "# \\t\\t-- which are not part of a signal group ID\n"
  "# } (SIZE (16))\n"
  "\n"
  "uint16  lane_attributes_crosswalk";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__LaneAttributesCrosswalk__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1514, 1514},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__LaneAttributesCrosswalk__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__LaneAttributesCrosswalk__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
