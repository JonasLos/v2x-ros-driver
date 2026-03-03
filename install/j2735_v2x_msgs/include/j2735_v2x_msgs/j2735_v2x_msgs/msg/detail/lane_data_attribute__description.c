// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/lane_data_attribute__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__LaneDataAttribute__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6e, 0x84, 0x50, 0xa7, 0xca, 0xae, 0xff, 0x58,
      0xce, 0x1f, 0xba, 0x8f, 0x27, 0xe6, 0xe4, 0x1c,
      0xd8, 0x8a, 0x6e, 0x29, 0x71, 0xb8, 0x2b, 0xb9,
      0xdf, 0x0e, 0x43, 0xaa, 0x46, 0x86, 0xd8, 0x7e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/regulatory_speed_limit__functions.h"
#include "j2735_v2x_msgs/msg/detail/speed_limit_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/speed_limit_list__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__RegulatorySpeedLimit__EXPECTED_HASH = {1, {
    0x74, 0x39, 0x1f, 0x7d, 0x93, 0x52, 0x60, 0x91,
    0xcf, 0x37, 0xfe, 0xcd, 0x3b, 0xc7, 0xd9, 0xea,
    0x2b, 0xab, 0xf8, 0xcc, 0x58, 0x24, 0x00, 0xf5,
    0xc6, 0x99, 0xdc, 0x5e, 0x44, 0x95, 0x14, 0xf1,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__SpeedLimitList__EXPECTED_HASH = {1, {
    0xbd, 0x2c, 0x79, 0xa8, 0xcf, 0xeb, 0x3d, 0x56,
    0x4e, 0xd7, 0x1b, 0xe7, 0xe1, 0x71, 0x66, 0x73,
    0xb6, 0x5b, 0x0c, 0x17, 0x85, 0x17, 0x25, 0x4d,
    0x5b, 0x0d, 0x8e, 0xcc, 0x49, 0xe7, 0x49, 0x1b,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__SpeedLimitType__EXPECTED_HASH = {1, {
    0x42, 0xa5, 0xa7, 0x71, 0x95, 0x8f, 0x1a, 0xba,
    0xa6, 0x19, 0x8a, 0xce, 0x4e, 0x77, 0x78, 0xee,
    0x70, 0x09, 0x87, 0x29, 0xaa, 0x8f, 0x14, 0x89,
    0x02, 0xab, 0xcd, 0xf8, 0x82, 0x98, 0xeb, 0x2a,
  }};
#endif

static char j2735_v2x_msgs__msg__LaneDataAttribute__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneDataAttribute";
static char j2735_v2x_msgs__msg__RegulatorySpeedLimit__TYPE_NAME[] = "j2735_v2x_msgs/msg/RegulatorySpeedLimit";
static char j2735_v2x_msgs__msg__SpeedLimitList__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedLimitList";
static char j2735_v2x_msgs__msg__SpeedLimitType__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedLimitType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__LaneDataAttribute__FIELD_NAME__choice[] = "choice";
static char j2735_v2x_msgs__msg__LaneDataAttribute__FIELD_NAME__path_end_point_angle[] = "path_end_point_angle";
static char j2735_v2x_msgs__msg__LaneDataAttribute__FIELD_NAME__lane_crown_point_center[] = "lane_crown_point_center";
static char j2735_v2x_msgs__msg__LaneDataAttribute__FIELD_NAME__lane_crown_point_right[] = "lane_crown_point_right";
static char j2735_v2x_msgs__msg__LaneDataAttribute__FIELD_NAME__lane_crown_point_left[] = "lane_crown_point_left";
static char j2735_v2x_msgs__msg__LaneDataAttribute__FIELD_NAME__lane_angle[] = "lane_angle";
static char j2735_v2x_msgs__msg__LaneDataAttribute__FIELD_NAME__speed_limits[] = "speed_limits";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__LaneDataAttribute__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__LaneDataAttribute__FIELD_NAME__choice, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneDataAttribute__FIELD_NAME__path_end_point_angle, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneDataAttribute__FIELD_NAME__lane_crown_point_center, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneDataAttribute__FIELD_NAME__lane_crown_point_right, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneDataAttribute__FIELD_NAME__lane_crown_point_left, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneDataAttribute__FIELD_NAME__lane_angle, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneDataAttribute__FIELD_NAME__speed_limits, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__SpeedLimitList__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__LaneDataAttribute__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__RegulatorySpeedLimit__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SpeedLimitList__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SpeedLimitType__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__LaneDataAttribute__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__LaneDataAttribute__TYPE_NAME, 36, 36},
      {j2735_v2x_msgs__msg__LaneDataAttribute__FIELDS, 7, 7},
    },
    {j2735_v2x_msgs__msg__LaneDataAttribute__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__RegulatorySpeedLimit__EXPECTED_HASH, j2735_v2x_msgs__msg__RegulatorySpeedLimit__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__RegulatorySpeedLimit__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SpeedLimitList__EXPECTED_HASH, j2735_v2x_msgs__msg__SpeedLimitList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__SpeedLimitList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SpeedLimitType__EXPECTED_HASH, j2735_v2x_msgs__msg__SpeedLimitType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__SpeedLimitType__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "\n"
  "# The data frame DF_LaneDataAttribute is used to relate an attribute and a control value at a node point or along a\n"
  "# lane segment from an enumerated list of defined choices. It is then followed by a defined data value associated with it and\n"
  "# which is defined elsewhere in this standard.\n"
  "\n"
  "\n"
  "# LaneDataAttribute ::= CHOICE {\n"
  "# -- Segment attribute types and the data needed for each\n"
  "# pathEndPointAngle DeltaAngle,\n"
  "# -- adjusts final point/width slant\n"
  "# -- of the lane to align with the stop line\n"
  "# laneCrownPointCenter RoadwayCrownAngle,\n"
  "# -- sets the canter of the road bed\n"
  "# -- from centerline point\n"
  "# laneCrownPointLeft RoadwayCrownAngle,\n"
  "# -- sets the canter of the road bed\n"
  "# -- from left edge\n"
  "# laneCrownPointRight RoadwayCrownAngle,\n"
  "# -- sets the canter of the road bed\n"
  "# -- from right edge\n"
  "# laneAngle MergeDivergeNodeAngle,\n"
  "# -- the angle or direction of another lane\n"
  "# -- this is required to support Japan style\n"
  "# -- when a merge point angle is required\n"
  "# speedLimits SpeedLimitList,\n"
  "# -- Reference regulatory speed limits\n"
  "# -- used by all segments\n"
  "# -- Add others as needed, in regional space\n"
  "# regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-LaneDataAttribute}},\n"
  "# ...\n"
  "# }\n"
  "\n"
  "uint8 choice\n"
  "uint8 PATH_END_POINT_ANGLE=0\n"
  "uint8 LANE_CROWN_POINT_CENTER=1\n"
  "uint8 LANE_CROWN_POINT_LEFT=2\n"
  "uint8 LANE_CROWN_POINT_RIGHT=3\n"
  "uint8 LANE_ANGLE=4\n"
  "uint8 SPEED_LIMITS=5\n"
  "\n"
  "# DeltaAngle ::= INTEGER (-150..150)\n"
  "# -- With an angle range from\n"
  "# -- negative 150 to positive 150\n"
  "# -- in one degree steps where zero is directly\n"
  "# -- along the axis or the lane center line as defined by the\n"
  "# -- two closest points\n"
  "#\n"
  "# The DeltaAngle data element provides the final angle used in the last point of the lane path.\n"
  "# Used to \"cant\" the stop line of the lane.\n"
  "\n"
  "int16 path_end_point_angle\n"
  "\n"
  "# RoadwayCrownAngle ::= INTEGER (-128..127)\n"
  "# -- In LSB units of 0.3 degrees of angle\n"
  "# -- over a range of -38.1 to + 38.1 degrees\n"
  "# -- The value -128 shall be used for unknown\n"
  "# -- The value zero shall be used for angles\n"
  "# -- which are between -0.15 and +0.15\n"
  "#\n"
  "# The RoadwayCrownAngle data element relates the gross tangential angle of the roadway surface with respect to\n"
  "# the local horizontal axis and is measured at the indicated part of the lane.\n"
  "\n"
  "int8 lane_crown_point_center\n"
  "int8 lane_crown_point_right\n"
  "int8 lane_crown_point_left\n"
  "\n"
  "# MergeDivergeNodeAngle ::= INTEGER (-180..180)\n"
  "# -- In units of 1.5 degrees from north\n"
  "# -- the value -180 shall be used to represent\n"
  "# -- data is not available or unknown\n"
  "int16 lane_angle\n"
  "\n"
  "# SpeedLimitList ::= SEQUENCE (SIZE(1..9)) OF RegulatorySpeedLimit\n"
  "j2735_v2x_msgs/SpeedLimitList speed_limits\n"
  "\n"
  "# regional #TODO: RegionalExtensions are not yet implemented in asn1c";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__LaneDataAttribute__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__LaneDataAttribute__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2698, 2698},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__LaneDataAttribute__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__LaneDataAttribute__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__RegulatorySpeedLimit__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__SpeedLimitList__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__SpeedLimitType__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
