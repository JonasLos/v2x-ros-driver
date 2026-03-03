// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/BSMCoreData.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/bsm_core_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__BSMCoreData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc6, 0xe7, 0x1b, 0x35, 0x99, 0xc2, 0x22, 0xc0,
      0xe4, 0xf1, 0x95, 0xfd, 0x30, 0x7b, 0xe3, 0x9c,
      0x94, 0xca, 0x10, 0x99, 0xa1, 0xde, 0x36, 0x40,
      0xa1, 0xf3, 0xd3, 0x4c, 0xda, 0x94, 0x1c, 0x00,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_size__functions.h"
#include "j2735_v2x_msgs/msg/detail/stability_control_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__functions.h"
#include "j2735_v2x_msgs/msg/detail/traction_control_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/transmission_state__functions.h"
#include "j2735_v2x_msgs/msg/detail/brake_applied_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/anti_lock_brake_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/auxiliary_brake_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/brake_system_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/brake_boost_applied__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AccelerationSet4Way__EXPECTED_HASH = {1, {
    0xec, 0x74, 0xcc, 0xee, 0x1d, 0xc1, 0x15, 0x2e,
    0xd6, 0xb9, 0x8f, 0xec, 0x0c, 0x7f, 0xb0, 0x70,
    0x43, 0x36, 0x0f, 0xb5, 0x15, 0xd9, 0xa3, 0xdf,
    0xf5, 0x11, 0xb9, 0x2f, 0x43, 0x84, 0x3b, 0xc4,
  }};
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__BrakeSystemStatus__EXPECTED_HASH = {1, {
    0xd9, 0xd7, 0xed, 0x3e, 0x86, 0x2a, 0x09, 0xcc,
    0xef, 0x22, 0x7b, 0xdd, 0xcb, 0xc0, 0xed, 0xeb,
    0x24, 0xa2, 0x51, 0xd7, 0xe2, 0x56, 0x54, 0x56,
    0xc7, 0x1b, 0x53, 0xc3, 0x53, 0x87, 0xf5, 0xbf,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PositionalAccuracy__EXPECTED_HASH = {1, {
    0xc9, 0x81, 0xc5, 0xb3, 0x13, 0x72, 0xab, 0xba,
    0xca, 0x5a, 0xf5, 0xcd, 0xc2, 0xa2, 0x2b, 0xc9,
    0xfb, 0xa1, 0x73, 0x73, 0xed, 0x39, 0xf6, 0x8f,
    0x9e, 0xc7, 0x6c, 0xc3, 0xba, 0x5d, 0xfe, 0xdd,
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TransmissionState__EXPECTED_HASH = {1, {
    0x50, 0xd7, 0xde, 0x5a, 0x14, 0x37, 0xc5, 0x6a,
    0x34, 0x76, 0x3d, 0x70, 0xce, 0xe2, 0x12, 0xbe,
    0x56, 0xfc, 0x62, 0x1b, 0xb4, 0x34, 0x41, 0x63,
    0xa8, 0x34, 0x5d, 0x80, 0x64, 0x15, 0x53, 0x5c,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VehicleSize__EXPECTED_HASH = {1, {
    0xcd, 0x0c, 0x51, 0xef, 0xad, 0x8c, 0xb4, 0x12,
    0x64, 0x31, 0xc6, 0x64, 0xaa, 0x9d, 0xd3, 0x4f,
    0x55, 0x30, 0x85, 0x5e, 0x47, 0xb6, 0x5c, 0xb5,
    0xe7, 0x6b, 0x00, 0x6b, 0x56, 0x82, 0x19, 0xa9,
  }};
#endif

static char j2735_v2x_msgs__msg__BSMCoreData__TYPE_NAME[] = "j2735_v2x_msgs/msg/BSMCoreData";
static char j2735_v2x_msgs__msg__AccelerationSet4Way__TYPE_NAME[] = "j2735_v2x_msgs/msg/AccelerationSet4Way";
static char j2735_v2x_msgs__msg__AntiLockBrakeStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/AntiLockBrakeStatus";
static char j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/AuxiliaryBrakeStatus";
static char j2735_v2x_msgs__msg__BrakeAppliedStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/BrakeAppliedStatus";
static char j2735_v2x_msgs__msg__BrakeBoostApplied__TYPE_NAME[] = "j2735_v2x_msgs/msg/BrakeBoostApplied";
static char j2735_v2x_msgs__msg__BrakeSystemStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/BrakeSystemStatus";
static char j2735_v2x_msgs__msg__PositionalAccuracy__TYPE_NAME[] = "j2735_v2x_msgs/msg/PositionalAccuracy";
static char j2735_v2x_msgs__msg__StabilityControlStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/StabilityControlStatus";
static char j2735_v2x_msgs__msg__TractionControlStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/TractionControlStatus";
static char j2735_v2x_msgs__msg__TransmissionState__TYPE_NAME[] = "j2735_v2x_msgs/msg/TransmissionState";
static char j2735_v2x_msgs__msg__VehicleSize__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleSize";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__msg_count[] = "msg_count";
static char j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__id[] = "id";
static char j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__sec_mark[] = "sec_mark";
static char j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__longitude[] = "longitude";
static char j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__latitude[] = "latitude";
static char j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__elev[] = "elev";
static char j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__accuracy[] = "accuracy";
static char j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__transmission[] = "transmission";
static char j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__speed[] = "speed";
static char j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__heading[] = "heading";
static char j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__angle[] = "angle";
static char j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__accel_set[] = "accel_set";
static char j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__brakes[] = "brakes";
static char j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__size[] = "size";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__BSMCoreData__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__msg_count, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__sec_mark, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__elev, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__accuracy, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PositionalAccuracy__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__transmission, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__TransmissionState__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__angle, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__accel_set, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__AccelerationSet4Way__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__brakes, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__BrakeSystemStatus__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSMCoreData__FIELD_NAME__size, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__VehicleSize__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__BSMCoreData__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__AccelerationSet4Way__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
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
    {j2735_v2x_msgs__msg__BrakeSystemStatus__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PositionalAccuracy__TYPE_NAME, 37, 37},
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
  {
    {j2735_v2x_msgs__msg__TransmissionState__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleSize__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__BSMCoreData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__BSMCoreData__TYPE_NAME, 30, 30},
      {j2735_v2x_msgs__msg__BSMCoreData__FIELDS, 14, 14},
    },
    {j2735_v2x_msgs__msg__BSMCoreData__REFERENCED_TYPE_DESCRIPTIONS, 11, 11},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AccelerationSet4Way__EXPECTED_HASH, j2735_v2x_msgs__msg__AccelerationSet4Way__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__AccelerationSet4Way__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AntiLockBrakeStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__AntiLockBrakeStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__AntiLockBrakeStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BrakeAppliedStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__BrakeAppliedStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__BrakeAppliedStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BrakeBoostApplied__EXPECTED_HASH, j2735_v2x_msgs__msg__BrakeBoostApplied__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__BrakeBoostApplied__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BrakeSystemStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__BrakeSystemStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__BrakeSystemStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PositionalAccuracy__EXPECTED_HASH, j2735_v2x_msgs__msg__PositionalAccuracy__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = j2735_v2x_msgs__msg__PositionalAccuracy__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__StabilityControlStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__StabilityControlStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = j2735_v2x_msgs__msg__StabilityControlStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TractionControlStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__TractionControlStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = j2735_v2x_msgs__msg__TractionControlStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TransmissionState__EXPECTED_HASH, j2735_v2x_msgs__msg__TransmissionState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = j2735_v2x_msgs__msg__TransmissionState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleSize__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleSize__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = j2735_v2x_msgs__msg__VehicleSize__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# BSMCoreData.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# Contains critical core elements deemed to be needed with every BSM issued.  \n"
  "# \n"
  "\n"
  "#MsgCount ::= INTEGER (0..127)\n"
  "uint8 msg_count\n"
  "\n"
  "uint8 MSG_COUNT_MAX = 127\n"
  "\n"
  "#TemporaryID ::= OCTET STRING (SIZE(4))\n"
  "uint8[] id\n"
  "\n"
  "#TemporaryID will change every 3000 seconds.\n"
  "uint16 ID_TIME_MAX = 3000\n"
  "\n"
  "#DSecond ::= INTEGER (0..65535)\n"
  "#  -- Integer values from 0 to 59999 represent the milliseconds within a minute\n"
  "#  -- A leap second is represented by the value range 60000 to 60999\n"
  "#  -- The values from 61000 to 65534 are reserved\n"
  "#  -- The value of 65535 shall represent an unavailable value in the range of the minute\n"
  "#  -- Unit is milliseconds\n"
  "uint16 sec_mark\n"
  "\n"
  "uint16 SEC_MARK_MOD = 60000\n"
  "uint16 SEC_MARK_UNAVAILABLE = 65535\n"
  "\n"
  "#Longitude ::= INTEGER (-1799999999..1800000001)\n"
  "#  -- LSB = 1/10 micro degree\n"
  "#  -- Providing a range of plus-minus 180 degrees\n"
  "#  -- Convert to degree with factor 0.0000001 when field is used\n"
  "int32 longitude\n"
  "\n"
  "int32 LONGITUDE_UNAVAILABLE = 1800000001\n"
  "int32 LONGITUDE_MAX = 1800000000\n"
  "int32 LONGITUDE_MIN = -1799999999\n"
  "\n"
  "#Latitude ::= INTEGER (-900000000..900000001)\n"
  "#  -- LSB = 1/10 micro degree\n"
  "#  -- Providing a range of plus-minus 90 degrees\n"
  "#  -- Convert to degree with factor 0.0000001 when field is used\n"
  "int32 latitude\n"
  "\n"
  "int32 LATITUDE_UNAVAILABLE = 900000001\n"
  "int32 LATITUDE_MAX = 900000000\n"
  "int32 LATITUDE_MIN = -900000000\n"
  "\n"
  "#Elevation ::= INTEGER (-4096..61439)\n"
  "#  -- In units of 10 cm steps above or below the reference ellipsoid\n"
  "#  -- Providing a range of -409.5 to + 6143.9 meters\n"
  "#  -- The value -4096 shall be used when Unknown is to be sent\n"
  "#  -- Convert to meter with factor 0.1 when field is used\n"
  "int32 elev\n"
  "\n"
  "int32 ELEVATION_UNAVAILABLE = -4096\n"
  "int32 ELEVATION_MAX = 61439\n"
  "int32 ELEVATION_MIN = -4095\n"
  "\n"
  "# Used to model the accuracy of the positional determination with respect to each given axis.\n"
  "j2735_v2x_msgs/PositionalAccuracy accuracy\n"
  "\n"
  "# Provide the current state of the vehicle transmission\n"
  "j2735_v2x_msgs/TransmissionState transmission\n"
  "\n"
  "#Speed ::= INTEGER (0..8191) -- Units of 0.02 m/s\n"
  "#  -- The value 8191 indicates that speed is unavailable\n"
  "#  -- Convert to m/s with factor 0.02 when field is used\n"
  "uint16 speed\n"
  "\n"
  "uint16 SPEED_UNAVAILABLE = 8191\n"
  "uint16 SPEED_MAX = 8190\n"
  "uint16 SPEED_MIN = 0\n"
  "\n"
  "#Heading ::= INTEGER (0..28800)\n"
  "#  -- LSB of 0.0125 degrees\n"
  "#  -- A range of 0 to 359.9875 degrees\n"
  "#  -- Convert to degree with factor 0.0125 when field is used\n"
  "uint16 heading\n"
  "uint16 HEADING_UNAVAILABLE = 28800\n"
  "uint16 HEADING_MAX = 28798\n"
  "uint16 HEADING_MIN = 0\n"
  "\n"
  "#SteeringWheelAngle ::= INTEGER (-126..127)\n"
  "#  -- LSB units of 1.5 degrees, a range of -189 to +189 degrees\n"
  "#  -- +001 = +1.5 deg\n"
  "#  -- -126 = -189 deg and beyond\n"
  "#  -- +126 = +189 deg and beyond\n"
  "#  -- +127 to be used for unavailable\n"
  "#  -- Convert to degree with factor 1.5 when this field is used\n"
  "int8 angle\n"
  "int8 STEER_WHEEL_ANGLE_UNAVAILABLE = 127\n"
  "int8 STEER_WHEEL_ANGLE_MAX = 126\n"
  "int8 STEER_WHEEL_ANGLE_MIN = -126\n"
  "\n"
  "# Set of acceleration values in 3 orthogonal directions of the vehicle and with yaw rotation rates expressed as a structure.\n"
  "j2735_v2x_msgs/AccelerationSet4Way accel_set\n"
  "\n"
  "# Conveys a variety of information about the current brake and system control activity of the vehicle.\n"
  "j2735_v2x_msgs/BrakeSystemStatus brakes\n"
  "\n"
  "# The vehicle length and width\n"
  "j2735_v2x_msgs/VehicleSize size";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__BSMCoreData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__BSMCoreData__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 3371, 3371},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__BSMCoreData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[12];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 12, 12};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__BSMCoreData__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__AccelerationSet4Way__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__AntiLockBrakeStatus__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__BrakeAppliedStatus__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__BrakeBoostApplied__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__BrakeSystemStatus__get_individual_type_description_source(NULL);
    sources[7] = *j2735_v2x_msgs__msg__PositionalAccuracy__get_individual_type_description_source(NULL);
    sources[8] = *j2735_v2x_msgs__msg__StabilityControlStatus__get_individual_type_description_source(NULL);
    sources[9] = *j2735_v2x_msgs__msg__TractionControlStatus__get_individual_type_description_source(NULL);
    sources[10] = *j2735_v2x_msgs__msg__TransmissionState__get_individual_type_description_source(NULL);
    sources[11] = *j2735_v2x_msgs__msg__VehicleSize__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
