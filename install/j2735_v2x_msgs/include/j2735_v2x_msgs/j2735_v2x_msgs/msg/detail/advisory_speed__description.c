// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/AdvisorySpeed.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/advisory_speed__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__AdvisorySpeed__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x05, 0x16, 0x3d, 0x12, 0xed, 0x6c, 0xe3, 0x79,
      0xf0, 0xc5, 0x41, 0x46, 0xf4, 0xf9, 0xc9, 0x98,
      0x69, 0x06, 0xea, 0x43, 0x3a, 0x87, 0xce, 0x3e,
      0x37, 0x35, 0x3e, 0x67, 0x46, 0xa5, 0xab, 0xb2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/speed_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/advisory_speed_type__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AdvisorySpeedType__EXPECTED_HASH = {1, {
    0x82, 0xbc, 0xdb, 0x3e, 0x13, 0xa7, 0x4e, 0x6e,
    0xe1, 0xe5, 0x3f, 0x03, 0xc5, 0x51, 0xfe, 0x3b,
    0xe2, 0xc1, 0x1f, 0xae, 0x97, 0x44, 0xdb, 0x46,
    0x2a, 0x21, 0x08, 0x06, 0x41, 0x8e, 0x0c, 0x8b,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__SpeedConfidence__EXPECTED_HASH = {1, {
    0x60, 0x1a, 0x6a, 0xf8, 0x51, 0xec, 0x0e, 0x4d,
    0xfc, 0x8b, 0x6a, 0x0c, 0x60, 0x8f, 0x60, 0xb6,
    0xbe, 0x2d, 0xc5, 0x7b, 0x58, 0x7d, 0x3e, 0x76,
    0x56, 0xb2, 0x1c, 0x09, 0xd8, 0x59, 0x20, 0xa0,
  }};
#endif

static char j2735_v2x_msgs__msg__AdvisorySpeed__TYPE_NAME[] = "j2735_v2x_msgs/msg/AdvisorySpeed";
static char j2735_v2x_msgs__msg__AdvisorySpeedType__TYPE_NAME[] = "j2735_v2x_msgs/msg/AdvisorySpeedType";
static char j2735_v2x_msgs__msg__SpeedConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedConfidence";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__AdvisorySpeed__FIELD_NAME__type[] = "type";
static char j2735_v2x_msgs__msg__AdvisorySpeed__FIELD_NAME__speed[] = "speed";
static char j2735_v2x_msgs__msg__AdvisorySpeed__FIELD_NAME__speed_exists[] = "speed_exists";
static char j2735_v2x_msgs__msg__AdvisorySpeed__FIELD_NAME__confidence[] = "confidence";
static char j2735_v2x_msgs__msg__AdvisorySpeed__FIELD_NAME__distance[] = "distance";
static char j2735_v2x_msgs__msg__AdvisorySpeed__FIELD_NAME__distance_exists[] = "distance_exists";
static char j2735_v2x_msgs__msg__AdvisorySpeed__FIELD_NAME__restriction_class_id[] = "restriction_class_id";
static char j2735_v2x_msgs__msg__AdvisorySpeed__FIELD_NAME__restriction_class_id_exists[] = "restriction_class_id_exists";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__AdvisorySpeed__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__AdvisorySpeed__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__AdvisorySpeedType__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AdvisorySpeed__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AdvisorySpeed__FIELD_NAME__speed_exists, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AdvisorySpeed__FIELD_NAME__confidence, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__SpeedConfidence__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AdvisorySpeed__FIELD_NAME__distance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AdvisorySpeed__FIELD_NAME__distance_exists, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AdvisorySpeed__FIELD_NAME__restriction_class_id, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AdvisorySpeed__FIELD_NAME__restriction_class_id_exists, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__AdvisorySpeed__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__AdvisorySpeedType__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SpeedConfidence__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__AdvisorySpeed__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__AdvisorySpeed__TYPE_NAME, 32, 32},
      {j2735_v2x_msgs__msg__AdvisorySpeed__FIELDS, 8, 8},
    },
    {j2735_v2x_msgs__msg__AdvisorySpeed__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AdvisorySpeedType__EXPECTED_HASH, j2735_v2x_msgs__msg__AdvisorySpeedType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__AdvisorySpeedType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SpeedConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__SpeedConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__SpeedConfidence__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# AdvisorySpeed.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The DF_AdvisorySpeed data frame is used to convey a recommended traveling approach speed to an intersection\n"
  "# from the message issuer to various travelers and vehicle types. Besides support for various eco-driving applications, this\n"
  "# allows transmitting recommended speeds for specialty vehicles such as transit buses.\n"
  "# AdvisorySpeed ::= SEQUENCE {\n"
  "# type AdvisorySpeedType,\n"
  "# -- the type of advisory which this is.\n"
  "# speed SpeedAdvice OPTIONAL,\n"
  "# -- See Section 11 for converting and translating speed\n"
  "# -- expressed in mph into units of m/s\n"
  "# -- This element is optional ONLY when superceded\n"
  "# -- by the presence of a regional speed element found in\n"
  "# -- Reg-AdvisorySpeed entry\n"
  "# confidence SpeedConfidence OPTIONAL,\n"
  "# -- A confidence value for the above speed\n"
  "# distance ZoneLength OPTIONAL,\n"
  "# -- Unit = 1 meter,\n"
  "# -- The distance indicates the region for which the advised speed\n"
  "# -- is recommended, it is specified upstream from the stop bar\n"
  "# -- along the connected egressing lane\n"
  "# class RestrictionClassID OPTIONAL,\n"
  "# -- the vehicle types to which it applies\n"
  "# -- when absent, the AdvisorySpeed applies to\n"
  "# -- all motor vehicle types\n"
  "# regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-AdvisorySpeed}} OPTIONAL,\n"
  "# ...\n"
  "# }\n"
  "\n"
  "j2735_v2x_msgs/AdvisorySpeedType type\n"
  "\n"
  "# SpeedAdvice ::= INTEGER (0..500) OPTIONAL\n"
  "# This data element represents the recommended velocity of an object, typically a vehicle speed along a roadway,\n"
  "# expressed in unsigned units of 0.1 meters per second.\n"
  "#-- LSB units are 0.1 m/s^2\n"
  "#-- the value 499 shall be used for values at or greater than 49.9 m/s\n"
  "#-- the value 500 shall be used to indicate that speed is unavailable\n"
  "float32 speed\n"
  "float32 SPEED_UNAVAILABLE = 500\n"
  "bool speed_exists\n"
  "\n"
  "# SpeedConfidence is an enum already with 0 as unavailable.\n"
  "j2735_v2x_msgs/SpeedConfidence confidence\n"
  "\n"
  "# ZoneLength ::= INTEGER (0..10000)\n"
  "# -- Unit = 1 meter, 0 = unknown,\n"
  "# -- The value 10000 to be used for Distances >=10000 m\n"
  "# -- (e.g. from known point to another point along a\n"
  "# -- known path, often against traffic flow direction\n"
  "# -- when used for measuring queues)\n"
  "uint16 distance\n"
  "uint16 DISTANCE_UNKNOWN=0\n"
  "bool distance_exists\n"
  "\n"
  "# RestrictionClassID ::= INTEGER (0..255)\n"
  "uint8 restriction_class_id\n"
  "bool restriction_class_id_exists\n"
  "\n"
  "# regional #TODO: RegionalExtensions are not yet implemented in asn1c\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__AdvisorySpeed__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__AdvisorySpeed__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2442, 2442},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__AdvisorySpeed__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__AdvisorySpeed__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__AdvisorySpeedType__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__SpeedConfidence__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
