// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/BrakeSystemStatus.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/brake_system_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__BrakeSystemStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0xd7, 0xed, 0x3e, 0x86, 0x2a, 0x09, 0xcc,
      0xef, 0x22, 0x7b, 0xdd, 0xcb, 0xc0, 0xed, 0xeb,
      0x24, 0xa2, 0x51, 0xd7, 0xe2, 0x56, 0x54, 0x56,
      0xc7, 0x1b, 0x53, 0xc3, 0x53, 0x87, 0xf5, 0xbf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/stability_control_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/traction_control_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/brake_applied_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/anti_lock_brake_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/auxiliary_brake_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/brake_boost_applied__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AntiLockBrakeStatus__EXPECTED_HASH = {1, {
    0x58, 0x15, 0x5f, 0x60, 0xf0, 0x68, 0x34, 0x11,
    0xdc, 0x60, 0x64, 0x6e, 0x17, 0x20, 0xe6, 0x61,
    0x83, 0x7e, 0x02, 0x03, 0xd8, 0x58, 0x50, 0x7e,
    0x61, 0x64, 0x2f, 0x4a, 0xb5, 0xee, 0xe2, 0x74,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__EXPECTED_HASH = {1, {
    0x09, 0x2c, 0xba, 0x7e, 0x4e, 0x9e, 0x07, 0xbc,
    0x42, 0xf6, 0x3d, 0x5d, 0x30, 0xed, 0xed, 0x9f,
    0x80, 0x55, 0x26, 0xaf, 0x04, 0xc4, 0x50, 0x61,
    0x6f, 0x0b, 0x4d, 0x61, 0x59, 0x8c, 0x6b, 0x79,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__BrakeAppliedStatus__EXPECTED_HASH = {1, {
    0x72, 0x34, 0xf3, 0x6d, 0x46, 0x12, 0x93, 0x08,
    0x25, 0x48, 0xf1, 0x83, 0x74, 0x73, 0xa5, 0xdf,
    0xbf, 0x1b, 0xe3, 0xaa, 0x79, 0x5a, 0x37, 0x18,
    0x36, 0xec, 0xa0, 0x61, 0xb8, 0xa0, 0xb2, 0x07,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__BrakeBoostApplied__EXPECTED_HASH = {1, {
    0x79, 0x40, 0x3b, 0xd2, 0x40, 0x6b, 0xf6, 0xd1,
    0x9d, 0x66, 0x8e, 0xc2, 0x47, 0x26, 0xaa, 0xfa,
    0xe7, 0xa0, 0x8f, 0x39, 0x80, 0xb7, 0x7c, 0xb5,
    0x85, 0x37, 0x32, 0xaa, 0x4b, 0xde, 0x14, 0x96,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__StabilityControlStatus__EXPECTED_HASH = {1, {
    0x89, 0xa1, 0xab, 0xef, 0x37, 0xbe, 0x18, 0x08,
    0x5b, 0xaf, 0x6b, 0xab, 0x38, 0x92, 0x71, 0x76,
    0x9a, 0x7d, 0xee, 0x9c, 0x34, 0x76, 0x38, 0xf0,
    0xc4, 0x25, 0x1c, 0x81, 0x55, 0xb8, 0x16, 0x33,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TractionControlStatus__EXPECTED_HASH = {1, {
    0x8a, 0x7e, 0x7f, 0x5e, 0x52, 0xc7, 0xe4, 0x6b,
    0x20, 0x6f, 0x54, 0xbc, 0xcf, 0xc2, 0x77, 0x7b,
    0x4f, 0x5f, 0x98, 0x6a, 0x76, 0x32, 0xc5, 0x09,
    0x29, 0x90, 0x4a, 0x78, 0x8a, 0x0d, 0x4d, 0x38,
  }};
#endif

static char j2735_v2x_msgs__msg__BrakeSystemStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/BrakeSystemStatus";
static char j2735_v2x_msgs__msg__AntiLockBrakeStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/AntiLockBrakeStatus";
static char j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/AuxiliaryBrakeStatus";
static char j2735_v2x_msgs__msg__BrakeAppliedStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/BrakeAppliedStatus";
static char j2735_v2x_msgs__msg__BrakeBoostApplied__TYPE_NAME[] = "j2735_v2x_msgs/msg/BrakeBoostApplied";
static char j2735_v2x_msgs__msg__StabilityControlStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/StabilityControlStatus";
static char j2735_v2x_msgs__msg__TractionControlStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/TractionControlStatus";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__BrakeSystemStatus__FIELD_NAME__wheel_brakes[] = "wheel_brakes";
static char j2735_v2x_msgs__msg__BrakeSystemStatus__FIELD_NAME__traction[] = "traction";
static char j2735_v2x_msgs__msg__BrakeSystemStatus__FIELD_NAME__abs[] = "abs";
static char j2735_v2x_msgs__msg__BrakeSystemStatus__FIELD_NAME__scs[] = "scs";
static char j2735_v2x_msgs__msg__BrakeSystemStatus__FIELD_NAME__brake_boost[] = "brake_boost";
static char j2735_v2x_msgs__msg__BrakeSystemStatus__FIELD_NAME__aux_brakes[] = "aux_brakes";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__BrakeSystemStatus__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__BrakeSystemStatus__FIELD_NAME__wheel_brakes, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__BrakeAppliedStatus__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BrakeSystemStatus__FIELD_NAME__traction, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__TractionControlStatus__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BrakeSystemStatus__FIELD_NAME__abs, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__AntiLockBrakeStatus__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BrakeSystemStatus__FIELD_NAME__scs, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__StabilityControlStatus__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BrakeSystemStatus__FIELD_NAME__brake_boost, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__BrakeBoostApplied__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BrakeSystemStatus__FIELD_NAME__aux_brakes, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__BrakeSystemStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__AntiLockBrakeStatus__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BrakeAppliedStatus__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BrakeBoostApplied__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__StabilityControlStatus__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TractionControlStatus__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__BrakeSystemStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__BrakeSystemStatus__TYPE_NAME, 36, 36},
      {j2735_v2x_msgs__msg__BrakeSystemStatus__FIELDS, 6, 6},
    },
    {j2735_v2x_msgs__msg__BrakeSystemStatus__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AntiLockBrakeStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__AntiLockBrakeStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__AntiLockBrakeStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BrakeAppliedStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__BrakeAppliedStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__BrakeAppliedStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BrakeBoostApplied__EXPECTED_HASH, j2735_v2x_msgs__msg__BrakeBoostApplied__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__BrakeBoostApplied__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__StabilityControlStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__StabilityControlStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__StabilityControlStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TractionControlStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__TractionControlStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__TractionControlStatus__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# BrakeSystemStatus.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# Conveys a variety of information about the current brake and system control activity of the vehicle.\n"
  "\n"
  "#BrakeSystemStatus ::= SEQUENCE { \n"
  "#   wheelBrakes        BrakeAppliedStatus,\n"
  "#   traction           TractionControlStatus,\n"
  "#   abs                AntiLockBrakeStatus, \n"
  "#   scs                StabilityControlStatus,\n"
  "#   brakeBoost         BrakeBoostApplied, \n"
  "#   auxBrakes          AuxiliaryBrakeStatus\n"
  "#   }\n"
  "\n"
  "#BrakeAppliedStatus ::= BIT STRING {\n"
  "#   unavailable (0),  -- When set, the brake applied status is unavailable\n"
  "#   leftFront   (1),  -- Left Front Active\n"
  "#   leftRear    (2),  -- Left Rear Active\n"
  "#   rightFront  (3),  -- Right Front Active\n"
  "#   rightRear   (4)   -- Right Rear Active\n"
  "#   } (SIZE (5))\n"
  "#   \n"
  "j2735_v2x_msgs/BrakeAppliedStatus wheel_brakes\n"
  "\n"
  "#TractionControlStatus ::= ENUMERATED {\n"
  "#   unavailable (0), -- B'00  Not Equipped with traction control \n"
  "#                    --       or traction control status is unavailable\n"
  "#   off         (1), -- B'01  traction control is Off\n"
  "#   on          (2), -- B'10  traction control is On (but not Engaged)\n"
  "#   engaged     (3)  -- B'11  traction control is Engaged\n"
  "#   }\n"
  "#\n"
  "j2735_v2x_msgs/TractionControlStatus traction\n"
  "\n"
  "#AntiLockBrakeStatus ::= ENUMERATED {\n"
  "#   unavailable (0), -- B'00  Vehicle Not Equipped with ABS Brakes \n"
  "#                    --       or ABS Brakes status is unavailable\n"
  "#   off         (1), -- B'01  Vehicle's ABS are Off\n"
  "#   on          (2), -- B'10  Vehicle's ABS are On ( but not Engaged )\n"
  "#   engaged     (3)  -- B'11  Vehicle's ABS control is Engaged on any wheel\n"
  "#   }\n"
  "#\n"
  "j2735_v2x_msgs/AntiLockBrakeStatus abs\n"
  "\n"
  "#StabilityControlStatus ::= ENUMERATED {\n"
  "#   unavailable (0), -- B'00  Not Equipped with SC\n"
  "#                    --       or SC status is unavailable\n"
  "#   off         (1), -- B'01  Off\n"
  "#   on          (2), -- B'10  On or active (but not engaged)\n"
  "#   engaged     (3)  -- B'11  stability control is Engaged \n"
  "#   }\n"
  "#   \n"
  "j2735_v2x_msgs/StabilityControlStatus scs\n"
  "\n"
  "#BrakeBoostApplied ::= ENUMERATED {\n"
  "#   unavailable   (0), -- Vehicle not equipped with brake boost\n"
  "#                      -- or brake boost data is unavailable\n"
  "#   off           (1), -- Vehicle's brake boost is off\n"
  "#   on            (2)  -- Vehicle's brake boost is on (applied)\n"
  "#   }\n"
  "#   \n"
  "j2735_v2x_msgs/BrakeBoostApplied brake_boost\n"
  "\n"
  "#AuxiliaryBrakeStatus ::= ENUMERATED {\n"
  "#   unavailable (0), -- B'00  Vehicle Not Equipped with Aux Brakes \n"
  "#                    --       or Aux Brakes status is unavailable\n"
  "#   off         (1), -- B'01  Vehicle's Aux Brakes are Off\n"
  "#   on          (2), -- B'10  Vehicle's Aux Brakes are On ( Engaged )\n"
  "#   reserved    (3)  -- B'11 \n"
  "#   }   \n"
  "\n"
  "j2735_v2x_msgs/AuxiliaryBrakeStatus aux_brakes";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__BrakeSystemStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__BrakeSystemStatus__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2784, 2784},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__BrakeSystemStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__BrakeSystemStatus__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__AntiLockBrakeStatus__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__BrakeAppliedStatus__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__BrakeBoostApplied__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__StabilityControlStatus__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__TractionControlStatus__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
