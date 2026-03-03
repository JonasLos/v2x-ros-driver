// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/RoadSegmentReferenceID.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/road_segment_reference_id__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__RoadSegmentReferenceID__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xba, 0x3f, 0xec, 0x7e, 0x2f, 0x03, 0xa4, 0xa3,
      0x75, 0x94, 0xaf, 0x6e, 0x49, 0x00, 0x0d, 0x54,
      0x83, 0xb0, 0x06, 0x6b, 0x2b, 0x5b, 0x24, 0x65,
      0xef, 0xfb, 0x40, 0xac, 0xed, 0x16, 0xb1, 0x73,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__RoadSegmentReferenceID__TYPE_NAME[] = "j2735_v2x_msgs/msg/RoadSegmentReferenceID";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__RoadSegmentReferenceID__FIELD_NAME__region[] = "region";
static char j2735_v2x_msgs__msg__RoadSegmentReferenceID__FIELD_NAME__region_exists[] = "region_exists";
static char j2735_v2x_msgs__msg__RoadSegmentReferenceID__FIELD_NAME__id[] = "id";
static char j2735_v2x_msgs__msg__RoadSegmentReferenceID__FIELD_NAME__id_exists[] = "id_exists";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__RoadSegmentReferenceID__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__RoadSegmentReferenceID__FIELD_NAME__region, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__RoadSegmentReferenceID__FIELD_NAME__region_exists, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__RoadSegmentReferenceID__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__RoadSegmentReferenceID__FIELD_NAME__id_exists, 9, 9},
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
j2735_v2x_msgs__msg__RoadSegmentReferenceID__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__RoadSegmentReferenceID__TYPE_NAME, 41, 41},
      {j2735_v2x_msgs__msg__RoadSegmentReferenceID__FIELDS, 4, 4},
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
  "# RoadSegmentReferenceID.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The DF_RoadSegmentReferenceID data frame is used to convey theRoadSegmentID which is unique to a given\n"
  "# road segment of interest, and also the RoadRegulatorID assigned to the region in which it is operating (when required).\n"
  "\n"
  "# RoadSegmentReferenceID ::= SEQUENCE {\n"
  "# region RoadRegulatorID OPTIONAL,\n"
  "# -- a globally unique regional assignment value\n"
  "# -- typically assigned to a regional DOT authority\n"
  "# -- the value zero shall be used for testing needs\n"
  "# id RoadSegmentID\n"
  "# -- a unique mapping to the road segment\n"
  "# -- in question within the above region of use\n"
  "# -- during its period of assignment and use\n"
  "# -- note that unlike intersectionID values,\n"
  "# -- this value can be reused by the region\n"
  "# }\n"
  "\n"
  "# RoadRegulatorID ::= INTEGER (0..65535)\n"
  "uint16 region\n"
  "bool region_exists\n"
  "\n"
  "# RoadSegmentID ::= INTEGER (0..65535)\n"
  "# -- The values zero to 255 shall be used for testing only\n"
  "# -- Note that the value assigned to an RoadSegment will be\n"
  "# -- unique within a given regional ID only during its use\n"
  "uint16 id\n"
  "bool id_exists\n"
  "\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__RoadSegmentReferenceID__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__RoadSegmentReferenceID__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1125, 1125},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__RoadSegmentReferenceID__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__RoadSegmentReferenceID__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
