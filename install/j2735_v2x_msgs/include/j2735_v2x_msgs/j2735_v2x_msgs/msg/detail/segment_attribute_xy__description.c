// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/SegmentAttributeXY.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__SegmentAttributeXY__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xde, 0x72, 0xc9, 0xca, 0x8e, 0x75, 0xaa, 0xe9,
      0x7d, 0x26, 0xc1, 0x3f, 0x63, 0xba, 0x1b, 0xe6,
      0xd9, 0x61, 0xee, 0x85, 0x3a, 0xbd, 0xa5, 0x69,
      0xbc, 0x4e, 0x94, 0xb3, 0x38, 0x6e, 0x88, 0x5e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__SegmentAttributeXY__TYPE_NAME[] = "j2735_v2x_msgs/msg/SegmentAttributeXY";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__SegmentAttributeXY__FIELD_NAME__segment_attribute_xy[] = "segment_attribute_xy";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__SegmentAttributeXY__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__SegmentAttributeXY__FIELD_NAME__segment_attribute_xy, 20, 20},
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
j2735_v2x_msgs__msg__SegmentAttributeXY__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__SegmentAttributeXY__TYPE_NAME, 37, 37},
      {j2735_v2x_msgs__msg__SegmentAttributeXY__FIELDS, 1, 1},
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
  "# SegmentAttributeXY.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The DE_SegmentAttributeXY data element is an enumerated list of attributes about the current lane segment which\n"
  "# may be enabled or disabled to indicate the presence or absence of the selected attribute on the segment.\n"
  "#\n"
  "# SegmentAttributeXY ::= ENUMERATED {\n"
  "# -- Various values which can be Enabled and Disabled for a lane segment\n"
  "#\n"
  "# -- General Items\n"
  "# reserved\\t,\n"
  "# doNotBlock\\t, \\t-- segment where a vehicle\n"
  "# \\t\\t  \\t-- may not come to a stop\n"
  "# whiteLine\\t, \\t-- segment where lane crossing not allowed\n"
  "# \\t\\t  \\t-- such as the final few meters of a lane\n"
  "#\n"
  "# -- Porous Lane states, merging, turn outs, parking etc.\n"
  "# mergingLaneLeft,  \\t-- indicates porous lanes\n"
  "# mergingLaneRight,\n"
  "# curbOnLeft,\\t  \\t-- indicates presence of curbs\n"
  "# curbOnRight,\n"
  "# loadingzoneOnLeft,\\t-- loading or drop off zones\n"
  "# loadingzoneOnRight,\n"
  "# turnOutPointOnLeft,\\t-- opening to adjacent street/alley/road\n"
  "# turnOutPointOnRight,\n"
  "# adjacentParkingOnLeft, \\t-- side of road parking\n"
  "# adjacentParkingOnRight,\n"
  "#\n"
  "# -- Bike Lane Needs\n"
  "# adjacentBikeLaneOnLeft, -- presence of marked bike lanes\n"
  "# adjacentBikeLaneOnRight,\n"
  "# sharedBikeLane, \\t-- right of way is shared with bikes\n"
  "# \\t\\t\\t-- who may occupy entire lane width\n"
  "# bikeBoxInFront,\n"
  "#\n"
  "# -- Transit Needs\n"
  "# transitStopOnLeft,\\t-- any form of bus/transit loading\n"
  "# \\t\\t\\t-- with pull in-out access to lane on left\n"
  "# transitStopOnRight, \\t-- any form of bus/transit loading\n"
  "# \\t\\t\\t-- with pull in-out access to lane on right\n"
  "# transitStopInLane, \\t-- any form of bus/transit loading\n"
  "# \\t\\t\\t-- in mid path of the lane\n"
  "# sharedWithTrackedVehicle, -- lane is shared with train or trolley\n"
  "# \\t\\t\\t-- not used for crossing tracks\n"
  "#\n"
  "# -- Pedestrian Support Attributes\n"
  "# safeIsland, \\t\\t-- begin/end a safety island in path\n"
  "# lowCurbsPresent, \\t-- for ADA support\n"
  "# rumbleStripPresent, \\t-- for ADA support\n"
  "# audibleSignalingPresent, -- for ADA support\n"
  "# adaptiveTimingPresent, \\t-- for ADA support\n"
  "# rfSignalRequestPresent, -- Supports RF push to walk technologies\n"
  "# partialCurbIntrusion, \\t-- path is blocked by a median or curb\n"
  "# \\t\\t\\t-- but at least 1 meter remains open for use\n"
  "# \\t\\t\\t-- and at-grade passage\n"
  "#\n"
  "# -- Lane geometry details\n"
  "# taperToLeft,\\t\\t-- Used to control final path shape\n"
  "# taperToRight,\\t\\t-- Used to control final path shape\n"
  "# taperToCenterLine,\\t-- Used to control final path shape\n"
  "#\n"
  "# -- Parking Lane and Curb Attributes\n"
  "# parallelParking, \\t-- Parking at an angle with the street\n"
  "# freeParking, \\t\\t-- no restriction on use of parking\n"
  "# timeRestrictionsOnParking , -- Parking is not permitted at all times\n"
  "# \\t\\t\\t-- typically used when the 'parking' lane\n"
  "# \\t\\t\\t-- becomes a driving lane at times\n"
  "# costToPark, \\t\\t-- Used where parking has a cost\n"
  "# midBlockCurbPresent, \\t-- a protruding curb near lane edge\n"
  "# unEvenPavementPresent, \\t-- a disjoint height at lane edge\n"
  "# ...\n"
  "# }\n"
  "\n"
  "uint8  segment_attribute_xy\n"
  "\n"
  "uint8 RESERVED=0\n"
  "uint8 DONOTBLOCK=1\n"
  "uint8 WHITELINE=2\n"
  "uint8 MERGINGLANELEFT=3\n"
  "uint8 MERGINGLANERIGHT=4\n"
  "uint8 CURBONLEFT=5\n"
  "uint8 CURBONRIGHT=6\n"
  "uint8 LOADINGZONEONLEFT=7\n"
  "uint8 LOADINGZONEONRIGHT=8\n"
  "uint8 TURNOUTPOINTONLEFT=9\n"
  "uint8 TURNOUTPOINTONRIGHT=10\n"
  "uint8 ADJACENTPARKINGONLEFT=11\n"
  "uint8 ADJACENTPARKINGONRIGHT=12\n"
  "uint8 ADJACENTBIKELANEONLEFT=13\n"
  "uint8 ADJACENTBIKELANEONRIGHT=14\n"
  "uint8 SHAREDBIKELANE=15\n"
  "uint8 BIKEBOXINFRONT=16\n"
  "uint8 TRANSITSTOPONLEFT=17\n"
  "uint8 TRANSITSTOPONRIGHT=18\n"
  "uint8 TRANSITSTOPINLANE=19\n"
  "uint8 SHAREDWITHTRACKEDVEHICLE=20\n"
  "uint8 SAFEISLAND=21\n"
  "uint8 LOWCURBSPRESENT=22\n"
  "uint8 RUMBLESTRIPPRESENT=23\n"
  "uint8 AUDIBLESIGNALINGPRESENT=24\n"
  "uint8 ADAPTIVETIMINGPRESENT=25\n"
  "uint8 RFSIGNALREQUESTPRESENT=26\n"
  "uint8 PARTIALCURBINTRUSION=27\n"
  "uint8 TAPERTOLEFT=28\n"
  "uint8 TAPERTORIGHT=29\n"
  "uint8 TAPERTOCENTERLINE=30\n"
  "uint8 PARALLELPARKING=31\n"
  "uint8 FREEPARKING=32\n"
  "uint8 TIMERESTRICTIONSONPARKING=33\n"
  "uint8 COSTTOPARK=34\n"
  "uint8 MIDBLOCKCURBPRESENT=35\n"
  "uint8 UNEVENPAVEMENTPRESENT=36\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__SegmentAttributeXY__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__SegmentAttributeXY__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 3878, 3878},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__SegmentAttributeXY__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__SegmentAttributeXY__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
