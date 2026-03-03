// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/IntersectionReferenceID.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__IntersectionReferenceID__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x07, 0x43, 0x20, 0x64, 0x4a, 0xef, 0xab, 0x7c,
      0xf7, 0xfa, 0xba, 0x08, 0xc7, 0x88, 0xde, 0x34,
      0xcf, 0x44, 0x61, 0x80, 0x66, 0x57, 0x60, 0x47,
      0x7b, 0x2f, 0x74, 0x08, 0x80, 0xc3, 0x55, 0x29,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__IntersectionReferenceID__TYPE_NAME[] = "j2735_v2x_msgs/msg/IntersectionReferenceID";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__IntersectionReferenceID__FIELD_NAME__region[] = "region";
static char j2735_v2x_msgs__msg__IntersectionReferenceID__FIELD_NAME__region_exists[] = "region_exists";
static char j2735_v2x_msgs__msg__IntersectionReferenceID__FIELD_NAME__id[] = "id";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__IntersectionReferenceID__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__IntersectionReferenceID__FIELD_NAME__region, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__IntersectionReferenceID__FIELD_NAME__region_exists, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__IntersectionReferenceID__FIELD_NAME__id, 2, 2},
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
j2735_v2x_msgs__msg__IntersectionReferenceID__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__IntersectionReferenceID__TYPE_NAME, 42, 42},
      {j2735_v2x_msgs__msg__IntersectionReferenceID__FIELDS, 3, 3},
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
  "# IntersectionReferenceID.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The IntersectionReferenceID data frame conveys the combination of an optional RoadRegulatorID and of an\n"
  "# IntersectionID that is unique within that region. When the RoadRegulatorID is present the IntersectionReferenceID is\n"
  "# guaranteed to be globally unique.\n"
  "\n"
  "# region RoadRegulatorID OPTIONAL ::= INTEGER (0..65535)\n"
  "# -- a globally unique regional assignment value\n"
  "# -- typical assigned to a regional DOT authority\n"
  "# -- the value zero shall be used for testing needs\n"
  "# 0 is a J2735 value for testing needs, and carma can use it to indicate optional field was not set or unavailable.\n"
  "uint16 region\n"
  "uint16 REGION_UNAVAILABLE=0\n"
  "bool region_exists\n"
  "\n"
  "# id IntersectionID ::= INTEGER (0..65535)\n"
  "# -- a unique mapping to the intersection\n"
  "# -- in question within the above region of use\n"
  "uint16 id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__IntersectionReferenceID__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__IntersectionReferenceID__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 893, 893},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__IntersectionReferenceID__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__IntersectionReferenceID__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
