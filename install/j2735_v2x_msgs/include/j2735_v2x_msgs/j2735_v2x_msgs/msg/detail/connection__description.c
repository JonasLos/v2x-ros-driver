// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/connection__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__Connection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9b, 0x2f, 0x8f, 0x7b, 0x08, 0x61, 0x53, 0x13,
      0xd4, 0xa2, 0x9c, 0xdc, 0x90, 0x4c, 0xf8, 0x45,
      0x17, 0xf9, 0x07, 0x74, 0x47, 0x95, 0x85, 0xd5,
      0x1e, 0x22, 0x1b, 0xe5, 0x30, 0xc3, 0xe4, 0xee,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/allowed_maneuvers__functions.h"
#include "j2735_v2x_msgs/msg/detail/connecting_lane__functions.h"
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AllowedManeuvers__EXPECTED_HASH = {1, {
    0x88, 0x10, 0x46, 0x7e, 0x1b, 0xf6, 0x40, 0x6f,
    0x24, 0x4a, 0x8f, 0xcf, 0x3c, 0x7d, 0xfb, 0x07,
    0x3f, 0xeb, 0x18, 0x34, 0xf7, 0x84, 0xda, 0xb5,
    0x70, 0x37, 0x05, 0x14, 0x4d, 0xcf, 0x62, 0x7e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ConnectingLane__EXPECTED_HASH = {1, {
    0xa8, 0xe3, 0xc4, 0x7b, 0xb0, 0xff, 0x57, 0x0d,
    0x48, 0x21, 0x01, 0x5c, 0x86, 0xa0, 0xdf, 0x53,
    0x9a, 0x4c, 0x8e, 0xf5, 0x9c, 0x0d, 0x44, 0xb7,
    0xdc, 0x48, 0xc0, 0xd0, 0x4b, 0x67, 0x51, 0xd0,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__IntersectionReferenceID__EXPECTED_HASH = {1, {
    0x07, 0x43, 0x20, 0x64, 0x4a, 0xef, 0xab, 0x7c,
    0xf7, 0xfa, 0xba, 0x08, 0xc7, 0x88, 0xde, 0x34,
    0xcf, 0x44, 0x61, 0x80, 0x66, 0x57, 0x60, 0x47,
    0x7b, 0x2f, 0x74, 0x08, 0x80, 0xc3, 0x55, 0x29,
  }};
#endif

static char j2735_v2x_msgs__msg__Connection__TYPE_NAME[] = "j2735_v2x_msgs/msg/Connection";
static char j2735_v2x_msgs__msg__AllowedManeuvers__TYPE_NAME[] = "j2735_v2x_msgs/msg/AllowedManeuvers";
static char j2735_v2x_msgs__msg__ConnectingLane__TYPE_NAME[] = "j2735_v2x_msgs/msg/ConnectingLane";
static char j2735_v2x_msgs__msg__IntersectionReferenceID__TYPE_NAME[] = "j2735_v2x_msgs/msg/IntersectionReferenceID";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__Connection__FIELD_NAME__connecting_lane[] = "connecting_lane";
static char j2735_v2x_msgs__msg__Connection__FIELD_NAME__remote_intersection[] = "remote_intersection";
static char j2735_v2x_msgs__msg__Connection__FIELD_NAME__remote_intersection_exists[] = "remote_intersection_exists";
static char j2735_v2x_msgs__msg__Connection__FIELD_NAME__signal_group[] = "signal_group";
static char j2735_v2x_msgs__msg__Connection__FIELD_NAME__signal_group_exists[] = "signal_group_exists";
static char j2735_v2x_msgs__msg__Connection__FIELD_NAME__user_class[] = "user_class";
static char j2735_v2x_msgs__msg__Connection__FIELD_NAME__user_class_exists[] = "user_class_exists";
static char j2735_v2x_msgs__msg__Connection__FIELD_NAME__connection_id[] = "connection_id";
static char j2735_v2x_msgs__msg__Connection__FIELD_NAME__connection_id_exists[] = "connection_id_exists";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__Connection__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__Connection__FIELD_NAME__connecting_lane, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__ConnectingLane__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Connection__FIELD_NAME__remote_intersection, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__IntersectionReferenceID__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Connection__FIELD_NAME__remote_intersection_exists, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Connection__FIELD_NAME__signal_group, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Connection__FIELD_NAME__signal_group_exists, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Connection__FIELD_NAME__user_class, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Connection__FIELD_NAME__user_class_exists, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Connection__FIELD_NAME__connection_id, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Connection__FIELD_NAME__connection_id_exists, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__Connection__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__AllowedManeuvers__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ConnectingLane__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__IntersectionReferenceID__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__Connection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__Connection__TYPE_NAME, 29, 29},
      {j2735_v2x_msgs__msg__Connection__FIELDS, 9, 9},
    },
    {j2735_v2x_msgs__msg__Connection__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AllowedManeuvers__EXPECTED_HASH, j2735_v2x_msgs__msg__AllowedManeuvers__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__AllowedManeuvers__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ConnectingLane__EXPECTED_HASH, j2735_v2x_msgs__msg__ConnectingLane__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__ConnectingLane__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__IntersectionReferenceID__EXPECTED_HASH, j2735_v2x_msgs__msg__IntersectionReferenceID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__IntersectionReferenceID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# Connection.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The Connection data structure is used in the ConnectsToList data frame to provide data about how the stop line at\n"
  "# the end of a single lane connects to another lane beyond its stop point. The ConnectingLane entry ties an outbound\n"
  "# (egress) lane by its index to a valid single maneuver required to reach that outbound lane. The SignalGroupID maps this\n"
  "# to a single SPAT index. (Note that more than one entry can exist for any given lane to handle admissive and protected\n"
  "# conditions).\n"
  "#\n"
  "# Connection ::= SEQUENCE {\n"
  "# -- The subject lane connecting to this lane is:\n"
  "# connectingLane ConnectingLane,\n"
  "# -- The index of the connecting lane and also\n"
  "# -- the maneuver from the current lane to it\n"
  "# remoteIntersection IntersectionReferenceID OPTIONAL,\n"
  "# -- This entry is only used when the\n"
  "# -- indicated connecting lane belongs\n"
  "# -- to another intersection layout. This\n"
  "# -- provides a means to create meshes of lanes\n"
  "# -- SPAT mapping details at the stop line are:\n"
  "# signalGroup SignalGroupID OPTIONAL,\n"
  "# -- The matching signal group send by\n"
  "# -- the SPAT message for this lane/maneuver.\n"
  "# -- Shall be present unless the connectingLane\n"
  "# -- has no signal group (is un-signalized)\n"
  "# userClass RestrictionClassID OPTIONAL,\n"
  "# -- The Restriction Class of users this applies to\n"
  "# -- The use of some lane/maneuver and SignalGroupID\n"
  "# -- pairings are restricted to selected users.\n"
  "# -- When absent, the SignalGroupID applies to all\n"
  "# -- Movement assist details are given by:\n"
  "# connectionID LaneConnectionID OPTIONAL\n"
  "# -- An optional connection index used to\n"
  "# -- relate this lane connection to any dynamic\n"
  "# -- clearance data in the SPAT. Note that\n"
  "# -- the index may be shared with other\n"
  "# -- connections if the clearance data is common\n"
  "# }\n"
  "\n"
  "j2735_v2x_msgs/ConnectingLane connecting_lane\n"
  "\n"
  "j2735_v2x_msgs/IntersectionReferenceID remote_intersection\n"
  "bool remote_intersection_exists\n"
  "\n"
  "# SignalGroupID ::= INTEGER (0..255)\n"
  "uint8 signal_group\n"
  "bool signal_group_exists\n"
  "\n"
  "# RestrictionClassID ::= INTEGER (0..255)\n"
  "uint8 user_class\n"
  "bool user_class_exists\n"
  "\n"
  "# LaneConnectionID ::= INTEGER (0..255)\n"
  "uint8 connection_id\n"
  "bool connection_id_exists";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__Connection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__Connection__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2216, 2216},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__Connection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__Connection__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__AllowedManeuvers__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__ConnectingLane__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__IntersectionReferenceID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
