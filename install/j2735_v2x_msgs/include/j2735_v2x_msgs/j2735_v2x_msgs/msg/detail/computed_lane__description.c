// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/ComputedLane.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/computed_lane__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__ComputedLane__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0x3d, 0x9c, 0x11, 0xd2, 0x70, 0x04, 0x08,
      0xd5, 0x8a, 0xec, 0xae, 0x4c, 0xd1, 0x4d, 0x40,
      0xbf, 0xa6, 0x7a, 0xfa, 0x98, 0x77, 0x03, 0xa6,
      0xc3, 0x75, 0xb6, 0xc0, 0xad, 0x21, 0xea, 0xff,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/offset_xaxis__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_yaxis__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetXaxis__EXPECTED_HASH = {1, {
    0xd9, 0xdc, 0x93, 0xb3, 0xea, 0x9a, 0x6f, 0x55,
    0x48, 0xa4, 0x37, 0xac, 0x5f, 0xb9, 0x53, 0xa3,
    0x75, 0xd6, 0x9a, 0x8c, 0x24, 0x77, 0x83, 0x67,
    0xb8, 0x05, 0x4a, 0x3c, 0x6a, 0xfb, 0x1a, 0xe5,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetYaxis__EXPECTED_HASH = {1, {
    0x80, 0x40, 0x3a, 0x7c, 0x52, 0x01, 0x21, 0x54,
    0xdf, 0x15, 0xcd, 0x76, 0xc5, 0x97, 0x3a, 0x0f,
    0x17, 0xcc, 0x04, 0x6b, 0x70, 0x67, 0xfa, 0x86,
    0x20, 0x13, 0x34, 0x23, 0xf1, 0xaa, 0xd9, 0x35,
  }};
#endif

static char j2735_v2x_msgs__msg__ComputedLane__TYPE_NAME[] = "j2735_v2x_msgs/msg/ComputedLane";
static char j2735_v2x_msgs__msg__OffsetXaxis__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetXaxis";
static char j2735_v2x_msgs__msg__OffsetYaxis__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetYaxis";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__ComputedLane__FIELD_NAME__reference_lane_id[] = "reference_lane_id";
static char j2735_v2x_msgs__msg__ComputedLane__FIELD_NAME__offset_x_axis[] = "offset_x_axis";
static char j2735_v2x_msgs__msg__ComputedLane__FIELD_NAME__offset_y_axis[] = "offset_y_axis";
static char j2735_v2x_msgs__msg__ComputedLane__FIELD_NAME__rotate_xy[] = "rotate_xy";
static char j2735_v2x_msgs__msg__ComputedLane__FIELD_NAME__rotatexy_exists[] = "rotatexy_exists";
static char j2735_v2x_msgs__msg__ComputedLane__FIELD_NAME__scale_x_axis[] = "scale_x_axis";
static char j2735_v2x_msgs__msg__ComputedLane__FIELD_NAME__scale_x_axis_exists[] = "scale_x_axis_exists";
static char j2735_v2x_msgs__msg__ComputedLane__FIELD_NAME__scale_y_axis[] = "scale_y_axis";
static char j2735_v2x_msgs__msg__ComputedLane__FIELD_NAME__scale_y_axis_exists[] = "scale_y_axis_exists";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__ComputedLane__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__ComputedLane__FIELD_NAME__reference_lane_id, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ComputedLane__FIELD_NAME__offset_x_axis, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__OffsetXaxis__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ComputedLane__FIELD_NAME__offset_y_axis, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__OffsetYaxis__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ComputedLane__FIELD_NAME__rotate_xy, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ComputedLane__FIELD_NAME__rotatexy_exists, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ComputedLane__FIELD_NAME__scale_x_axis, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ComputedLane__FIELD_NAME__scale_x_axis_exists, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ComputedLane__FIELD_NAME__scale_y_axis, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ComputedLane__FIELD_NAME__scale_y_axis_exists, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__ComputedLane__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__OffsetXaxis__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetYaxis__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__ComputedLane__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__ComputedLane__TYPE_NAME, 31, 31},
      {j2735_v2x_msgs__msg__ComputedLane__FIELDS, 9, 9},
    },
    {j2735_v2x_msgs__msg__ComputedLane__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetXaxis__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetXaxis__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__OffsetXaxis__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetYaxis__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetYaxis__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__OffsetYaxis__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# NodeListXY.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# ComputedLane ::= SEQUENCE {\n"
  "# -- Data needed to created a computed lane\n"
  "# referenceLaneId LaneID,\n"
  "# \\t-- the lane ID upon which this\n"
  "# \\t-- computed lane will be based\n"
  "# \\t-- Lane Offset in X and Y direction\n"
  "# offsetXaxis CHOICE {\n"
  "# \\t\\tsmall DrivenLineOffsetSm,\n"
  "# \\t\\tlarge DrivenLineOffsetLg\n"
  "# \\t\\t},\n"
  "# offsetYaxis CHOICE {\n"
  "# \\t\\tsmall DrivenLineOffsetSm,\n"
  "# \\t\\tlarge DrivenLineOffsetLg\n"
  "# \\t\\t},\n"
  "# \\t-- A path X offset value for translations of the\n"
  "# \\t-- path's points when creating translated lanes.\n"
  "# \\t-- The values found in the reference lane are\n"
  "# \\t-- all offset based on the X and Y values from\n"
  "# \\t-- the coordinates of the reference lane's\n"
  "# \\t-- initial path point.\n"
  "#\n"
  "# -- Lane Rotation\n"
  "# rotateXY Angle OPTIONAL,\n"
  "# \\t-- A path rotation value for the entire lane\n"
  "# \\t-- Observe that this rotates the existing orientation\n"
  "# \\t-- of the referenced lane, it does not replace it.\n"
  "# \\t-- Rotation occurs about the initial path point.\n"
  "# -- Lane Path Scale (zooming)\n"
  "# scaleXaxis Scale-B12 OPTIONAL,\n"
  "# scaleYaxis Scale-B12 OPTIONAL,\n"
  "# \\t-- value for translations or zooming of the path's\n"
  "# \\t-- points. The values found in the reference lane\n"
  "# \\t-- are all expanded or contracted based on the X\n"
  "# \\t-- and Y and width values from the coordinates of\n"
  "# \\t-- the reference lane's initial path point.\n"
  "# \\t-- The Z axis remains untouched.\n"
  "# regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-ComputedLane}} OPTIONAL,\n"
  "# ...\n"
  "# }\n"
  "\n"
  "# LaneID ::= INTEGER (0..255)\n"
  "# -- the value 0 shall be used when the lane ID is\n"
  "# -- not available or not known\n"
  "# -- the value 255 is reserved for future use\n"
  "uint16 reference_lane_id\n"
  "\n"
  "# The DrivenLineOffsetSmall data element is an integer value expressing the offset in a defined axis from a reference\n"
  "# lane number from which a computed lane is offset.\n"
  "# DrivenLineOffsetSm ::= INTEGER (-2047..2047)\n"
  "# -- LSB units are 1 cm.\n"
  "# The DE_DrivenLineOffsetLarge data element is an integer value expressing the offset in a defined axis from a\n"
  "# reference lane number from which a computed lane is offset.\n"
  "# DrivenLineOffsetLg ::= INTEGER (-32767..32767)\n"
  "# -- LSB units are 1 cm.\n"
  "\n"
  "j2735_v2x_msgs/OffsetXaxis offset_x_axis\n"
  "\n"
  "j2735_v2x_msgs/OffsetYaxis offset_y_axis\n"
  "\n"
  "# Angle ::= INTEGER (0..239)\n"
  "#  -- Unsigned units of 1.5 degree, in 1 octet\n"
  "#  -- the true north is 0, positive is clockwise\n"
  "#  -- the values 240 to 254 shall not be sent\n"
  "#  -- the value 255 (0xFF) indicates an invalid value\n"
  "# NOTE: use invalid value to indicate unavailability as well.\n"
  "uint16 rotate_xy\n"
  "uint16 ROTATEXY_INVALID=255\n"
  "bool rotatexy_exists\n"
  "\n"
  "# Scale-B12 ::= INTEGER (-2048..2047)\n"
  "# A 12-bit signed scaling factor supporting scales from zero (which is not used) to >200%.\n"
  "# In this data element, the value zero is taken to represent a value of one (scale 1:1).\n"
  "int16 scale_x_axis\n"
  "bool scale_x_axis_exists\n"
  "\n"
  "int16 scale_y_axis\n"
  "bool scale_y_axis_exists\n"
  "\n"
  "# regional #TODO: RegionalExtensions are not yet implemented in asn1c";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__ComputedLane__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__ComputedLane__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2994, 2994},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__ComputedLane__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__ComputedLane__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__OffsetXaxis__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__OffsetYaxis__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
