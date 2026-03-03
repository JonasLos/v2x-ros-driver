// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/NumberOfParticipantsInCluster.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/number_of_participants_in_cluster__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x78, 0x15, 0x52, 0x3a, 0xa2, 0xf3, 0x1f, 0xa4,
      0x46, 0xf5, 0x89, 0x9c, 0x00, 0x14, 0x21, 0x51,
      0xe5, 0x6e, 0x9a, 0x47, 0xf6, 0x4a, 0xfb, 0x72,
      0xd5, 0xf6, 0x36, 0x15, 0x20, 0x28, 0x53, 0x13,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__TYPE_NAME[] = "j2735_v2x_msgs/msg/NumberOfParticipantsInCluster";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__FIELD_NAME__cluster_size[] = "cluster_size";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__FIELD_NAME__cluster_size, 12, 12},
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
j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__TYPE_NAME, 48, 48},
      {j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__FIELDS, 1, 1},
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
  "# NumberOfParticipantsInCluster.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of NumberOfParticipantsInCluster from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# NumberOfParticipantsInCluster ::= ENUMERATED { \n"
  "#    unavailable  (0),\n"
  "#    small        (1),   -- 2-5\n"
  "#    medium       (2),   -- 6-10\n"
  "#    large        (3),   -- >10\n"
  "#    ...\n"
  "#    }\n"
  "\n"
  "uint8 cluster_size\n"
  "\n"
  "uint8 UNAVAILABLE=0\n"
  "uint8 SMALL=1\n"
  "uint8 MEDIUM=2\n"
  "uint8 LARGE=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__TYPE_NAME, 48, 48},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 490, 490},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
