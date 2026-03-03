// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PublicSafetyEventResponderWorkerType.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/public_safety_event_responder_worker_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb8, 0xdf, 0x89, 0xe4, 0x8d, 0x7c, 0x61, 0x94,
      0x1f, 0xba, 0xfa, 0xba, 0x06, 0x93, 0x83, 0x3d,
      0x63, 0xa2, 0x31, 0xec, 0xb6, 0xc3, 0x62, 0x70,
      0x0d, 0xcc, 0x83, 0x46, 0x8a, 0xff, 0xfd, 0x22,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__TYPE_NAME[] = "j2735_v2x_msgs/msg/PublicSafetyEventResponderWorkerType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__FIELD_NAME__type[] = "type";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__FIELD_NAME__type, 4, 4},
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
j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__TYPE_NAME, 55, 55},
      {j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__FIELDS, 1, 1},
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
  "# PublicSafetyEventResponderWorkerType.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of PublicSafetyDirectingTrafficSubType from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# PublicSafetyEventResponderWorkerType ::= ENUMERATED { \n"
  "#    unavailable               (0),\n"
  "#    towOperater               (1),\n"
  "#    fireAndEMSWorker          (2),\n"
  "#    aDOTWorker                (3),\n"
  "#    lawEnforcement            (4),\n"
  "#    hazmatResponder           (5), -- also any toxicSubstanceCleanupCrew\n"
  "#    animalControlWorker       (6),\n"
  "#    otherPersonnel            (7),\n"
  "#    ...\n"
  "#    }\n"
  "\n"
  "uint8 type\n"
  "\n"
  "uint8 UNAVAILABLE=0\n"
  "uint8 TOW_OPERATOR=1\n"
  "uint8 FIRE_EMS_WORKER=2\n"
  "uint8 ADOT_WORKER=3\n"
  "uint8 LAW_ENFORCEMENT=4\n"
  "uint8 HAZMAT_RESPONDER=5\n"
  "uint8 ANIMAL_CONTROL_WORKER=6\n"
  "uint8 OTHER_PERSONNEL=7";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__TYPE_NAME, 55, 55},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 833, 833},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
