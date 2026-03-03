// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/ConnectsToList.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/connects_to_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__ConnectsToList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5c, 0x5b, 0xb0, 0xd4, 0x3a, 0xf5, 0xb7, 0xff,
      0x0e, 0x57, 0x2a, 0x59, 0xdc, 0x04, 0x62, 0x6a,
      0x55, 0xae, 0xde, 0x11, 0x23, 0x1b, 0xef, 0xb0,
      0x6a, 0xbd, 0xf8, 0xd5, 0x92, 0x94, 0xe8, 0xff,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/allowed_maneuvers__functions.h"
#include "j2735_v2x_msgs/msg/detail/connecting_lane__functions.h"
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__functions.h"
#include "j2735_v2x_msgs/msg/detail/connection__functions.h"

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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Connection__EXPECTED_HASH = {1, {
    0x9b, 0x2f, 0x8f, 0x7b, 0x08, 0x61, 0x53, 0x13,
    0xd4, 0xa2, 0x9c, 0xdc, 0x90, 0x4c, 0xf8, 0x45,
    0x17, 0xf9, 0x07, 0x74, 0x47, 0x95, 0x85, 0xd5,
    0x1e, 0x22, 0x1b, 0xe5, 0x30, 0xc3, 0xe4, 0xee,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__IntersectionReferenceID__EXPECTED_HASH = {1, {
    0x07, 0x43, 0x20, 0x64, 0x4a, 0xef, 0xab, 0x7c,
    0xf7, 0xfa, 0xba, 0x08, 0xc7, 0x88, 0xde, 0x34,
    0xcf, 0x44, 0x61, 0x80, 0x66, 0x57, 0x60, 0x47,
    0x7b, 0x2f, 0x74, 0x08, 0x80, 0xc3, 0x55, 0x29,
  }};
#endif

static char j2735_v2x_msgs__msg__ConnectsToList__TYPE_NAME[] = "j2735_v2x_msgs/msg/ConnectsToList";
static char j2735_v2x_msgs__msg__AllowedManeuvers__TYPE_NAME[] = "j2735_v2x_msgs/msg/AllowedManeuvers";
static char j2735_v2x_msgs__msg__ConnectingLane__TYPE_NAME[] = "j2735_v2x_msgs/msg/ConnectingLane";
static char j2735_v2x_msgs__msg__Connection__TYPE_NAME[] = "j2735_v2x_msgs/msg/Connection";
static char j2735_v2x_msgs__msg__IntersectionReferenceID__TYPE_NAME[] = "j2735_v2x_msgs/msg/IntersectionReferenceID";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__ConnectsToList__FIELD_NAME__connect_to_list[] = "connect_to_list";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__ConnectsToList__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__ConnectsToList__FIELD_NAME__connect_to_list, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__Connection__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__ConnectsToList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__AllowedManeuvers__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ConnectingLane__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Connection__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__IntersectionReferenceID__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__ConnectsToList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__ConnectsToList__TYPE_NAME, 33, 33},
      {j2735_v2x_msgs__msg__ConnectsToList__FIELDS, 1, 1},
    },
    {j2735_v2x_msgs__msg__ConnectsToList__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AllowedManeuvers__EXPECTED_HASH, j2735_v2x_msgs__msg__AllowedManeuvers__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__AllowedManeuvers__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ConnectingLane__EXPECTED_HASH, j2735_v2x_msgs__msg__ConnectingLane__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__ConnectingLane__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Connection__EXPECTED_HASH, j2735_v2x_msgs__msg__Connection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__Connection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__IntersectionReferenceID__EXPECTED_HASH, j2735_v2x_msgs__msg__IntersectionReferenceID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__IntersectionReferenceID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# ConnectsToList.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The ConnectsToList data structure is used in the generic lane descriptions to provide a sequence of other defined\n"
  "# lanes to which each lane connects beyond its stop point. See the Connection data frame entry for details. Note that this\n"
  "# data frame is not used in some lane object types.\n"
  "#\n"
  "# ConnectsToList ::= SEQUENCE (SIZE(1..16)) OF Connection\n"
  "\n"
  "j2735_v2x_msgs/Connection[] connect_to_list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__ConnectsToList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__ConnectsToList__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 489, 489},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__ConnectsToList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__ConnectsToList__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__AllowedManeuvers__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__ConnectingLane__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__Connection__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__IntersectionReferenceID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
