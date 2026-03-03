// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PathPrediction.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/path_prediction__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PathPrediction__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x06, 0x02, 0xab, 0x43, 0x01, 0x44, 0x84, 0x15,
      0xfa, 0xe5, 0x87, 0xf2, 0x00, 0xe2, 0x80, 0xe6,
      0x97, 0x6e, 0xdc, 0x30, 0x8d, 0x64, 0x4b, 0xb9,
      0x2e, 0xa7, 0x3e, 0xee, 0x18, 0x94, 0x8a, 0x70,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__PathPrediction__TYPE_NAME[] = "j2735_v2x_msgs/msg/PathPrediction";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PathPrediction__FIELD_NAME__radius_of_curvature[] = "radius_of_curvature";
static char j2735_v2x_msgs__msg__PathPrediction__FIELD_NAME__confidence[] = "confidence";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PathPrediction__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PathPrediction__FIELD_NAME__radius_of_curvature, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PathPrediction__FIELD_NAME__confidence, 10, 10},
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
j2735_v2x_msgs__msg__PathPrediction__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PathPrediction__TYPE_NAME, 33, 33},
      {j2735_v2x_msgs__msg__PathPrediction__FIELDS, 2, 2},
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
  "# PathPrediction.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of PathPrediction from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# PathPrediction ::= SEQUENCE {\n"
  "#    radiusOfCurve RadiusOfCurvature, \n"
  "#                  -- LSB units of 10cm\n"
  "#                  -- straight path to use value of 32767\n"
  "#    confidence    Confidence, \n"
  "#                  -- LSB units of 0.5 percent\n"
  "#    ...  \n"
  "#    }\n"
  "\n"
  "# RadiusOfCurvature ::= INTEGER (-32767..32767)\n"
  "#    -- LSB units of 10cm\n"
  "#    -- A straight path to use value of 32767\n"
  "int16 radius_of_curvature\n"
  "\n"
  "\n"
  "# Confidence ::= INTEGER (0..200)\n"
  "#    -- LSB units of 0.5 percent\n"
  "uint8 confidence";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PathPrediction__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PathPrediction__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 689, 689},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PathPrediction__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PathPrediction__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
