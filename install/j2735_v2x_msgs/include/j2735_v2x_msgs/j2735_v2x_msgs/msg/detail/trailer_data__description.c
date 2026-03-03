// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/TrailerData.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/trailer_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__TrailerData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8a, 0x2f, 0x75, 0x85, 0xaa, 0x70, 0xee, 0xd8,
      0x64, 0xb5, 0x23, 0x20, 0x56, 0x1a, 0xbd, 0x94,
      0xca, 0x21, 0xdd, 0xdc, 0xb5, 0xb2, 0x50, 0xf9,
      0x3e, 0x16, 0x63, 0xee, 0xb2, 0x39, 0x66, 0xab,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/pivoting_allowed__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_b12__functions.h"
#include "j2735_v2x_msgs/msg/detail/vert_offset_b07__functions.h"
#include "j2735_v2x_msgs/msg/detail/coarse_heading__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_length__functions.h"
#include "j2735_v2x_msgs/msg/detail/bumper_heights__functions.h"
#include "j2735_v2x_msgs/msg/detail/trailer_history_point_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/time_offset__functions.h"
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description__functions.h"
#include "j2735_v2x_msgs/msg/detail/angle__functions.h"
#include "j2735_v2x_msgs/msg/detail/trailer_history_point__functions.h"
#include "j2735_v2x_msgs/msg/detail/is_dolly__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_b11__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy24b__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_width__functions.h"
#include "j2735_v2x_msgs/msg/detail/bumper_height__functions.h"
#include "j2735_v2x_msgs/msg/detail/trailer_mass__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_height__functions.h"
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/pivot_point_description__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Angle__EXPECTED_HASH = {1, {
    0xd3, 0x71, 0x4d, 0x57, 0xd2, 0xda, 0x35, 0x97,
    0x4c, 0xd1, 0x0c, 0xcf, 0xca, 0xd6, 0x95, 0xb9,
    0x3f, 0xec, 0x8d, 0x61, 0x31, 0xa6, 0x53, 0x16,
    0x25, 0xda, 0x6a, 0x32, 0xc2, 0x83, 0x0c, 0x6d,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__BumperHeight__EXPECTED_HASH = {1, {
    0xfc, 0x35, 0xaf, 0x40, 0xa1, 0x1a, 0xac, 0x07,
    0x48, 0xb8, 0xe4, 0x34, 0xaf, 0x9b, 0x53, 0x78,
    0xe5, 0x94, 0xc8, 0x1c, 0x28, 0x43, 0x23, 0x10,
    0x09, 0xba, 0x6a, 0x42, 0xf8, 0x7b, 0xa2, 0x2d,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__BumperHeights__EXPECTED_HASH = {1, {
    0x82, 0x2c, 0x64, 0x57, 0x1c, 0xe9, 0xbe, 0xd0,
    0x17, 0xcd, 0x5a, 0x53, 0xf8, 0xc0, 0x68, 0x7e,
    0x05, 0xd9, 0xa9, 0x70, 0x18, 0x2e, 0xed, 0xe4,
    0x86, 0x79, 0x5a, 0x61, 0xfb, 0x36, 0x04, 0x16,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__CoarseHeading__EXPECTED_HASH = {1, {
    0x1f, 0x65, 0xfa, 0x36, 0x68, 0x7f, 0xac, 0x8e,
    0xcb, 0x56, 0x01, 0xff, 0x00, 0x6c, 0x22, 0x72,
    0xab, 0xbc, 0x40, 0xe8, 0x13, 0xef, 0xf1, 0x58,
    0xfb, 0x43, 0xd1, 0x0e, 0x99, 0x3d, 0xb9, 0xc8,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__IsDolly__EXPECTED_HASH = {1, {
    0xaf, 0x05, 0x51, 0x88, 0xdf, 0x86, 0x5a, 0x40,
    0x07, 0xb0, 0x6d, 0x2f, 0x41, 0x28, 0xeb, 0x9c,
    0x10, 0x27, 0x81, 0xf5, 0xad, 0x84, 0x97, 0x29,
    0x17, 0xc5, 0x67, 0x76, 0x9e, 0x95, 0xd8, 0xee,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeXY24b__EXPECTED_HASH = {1, {
    0xe7, 0xb7, 0x0d, 0x99, 0x15, 0xcd, 0x02, 0xbf,
    0x77, 0xde, 0xd9, 0x29, 0x4f, 0xf0, 0xa5, 0x12,
    0x03, 0xac, 0x3d, 0xa5, 0xb5, 0x93, 0x93, 0xaf,
    0x8a, 0x00, 0x6c, 0x47, 0x60, 0xc6, 0x23, 0x2c,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetB11__EXPECTED_HASH = {1, {
    0xfb, 0xde, 0x82, 0x51, 0xf0, 0xc5, 0x34, 0xf2,
    0xa0, 0x8a, 0x3e, 0x64, 0x1d, 0xb4, 0xb1, 0xc3,
    0x20, 0x29, 0x51, 0xf7, 0x00, 0x73, 0x4a, 0xde,
    0x14, 0xab, 0xdb, 0xe6, 0x71, 0x6d, 0xf8, 0x70,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetB12__EXPECTED_HASH = {1, {
    0x68, 0x42, 0xcd, 0x20, 0xa9, 0x18, 0x46, 0xec,
    0xb7, 0x01, 0xbc, 0x09, 0x3a, 0xdc, 0x8f, 0xfa,
    0xb9, 0x2b, 0x58, 0x72, 0xb9, 0x8e, 0x37, 0x38,
    0xd8, 0x41, 0x06, 0xc4, 0x85, 0x17, 0x1d, 0x76,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PivotPointDescription__EXPECTED_HASH = {1, {
    0x77, 0xdf, 0xb8, 0x7a, 0x91, 0xd9, 0x27, 0x1d,
    0x2a, 0x8c, 0x00, 0x6b, 0x7f, 0x41, 0xf1, 0x72,
    0x0d, 0xb8, 0x25, 0x3b, 0xc2, 0x2d, 0x1c, 0xbc,
    0x8f, 0xcb, 0x04, 0x2c, 0x6c, 0x7e, 0x0b, 0xb6,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PivotingAllowed__EXPECTED_HASH = {1, {
    0x0c, 0xfc, 0xca, 0xda, 0x20, 0x61, 0x89, 0x9a,
    0x96, 0xb9, 0x0c, 0xd9, 0x33, 0x78, 0x22, 0x4e,
    0xb7, 0x67, 0x9d, 0xfb, 0xe4, 0xca, 0x71, 0x2e,
    0xd3, 0x5a, 0x3a, 0x24, 0x4f, 0x51, 0x6d, 0xed,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TimeOffset__EXPECTED_HASH = {1, {
    0x9c, 0x0d, 0x74, 0xc8, 0xb3, 0xce, 0x4f, 0xa5,
    0x46, 0x07, 0x3b, 0xc3, 0x39, 0xa1, 0x4a, 0xe8,
    0x6b, 0x35, 0xb0, 0x94, 0x0b, 0x9b, 0x5b, 0x9f,
    0x7b, 0x61, 0x3c, 0xef, 0xb0, 0x88, 0xb1, 0x7c,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrailerHistoryPoint__EXPECTED_HASH = {1, {
    0xa5, 0xfb, 0xdb, 0xa4, 0x9f, 0x08, 0xbb, 0x04,
    0x00, 0x82, 0xe7, 0x2a, 0x5c, 0x8e, 0xa4, 0x6c,
    0x9d, 0x74, 0xa1, 0xdb, 0x53, 0x01, 0x4b, 0xfb,
    0x8c, 0x3c, 0xc7, 0x69, 0xe3, 0xd8, 0x9b, 0x2e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrailerHistoryPointList__EXPECTED_HASH = {1, {
    0x25, 0x89, 0xb0, 0x88, 0x09, 0xd7, 0xd8, 0xcc,
    0x36, 0xf3, 0xfa, 0x26, 0xda, 0xd3, 0xce, 0x34,
    0x20, 0xad, 0x2a, 0x27, 0xec, 0xee, 0x3a, 0xe9,
    0x38, 0x8d, 0xd6, 0x07, 0x01, 0x38, 0x3e, 0x52,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrailerMass__EXPECTED_HASH = {1, {
    0x8c, 0xba, 0x28, 0xbd, 0xf6, 0xba, 0x3a, 0x55,
    0x43, 0xcb, 0x70, 0x1f, 0xde, 0xa5, 0xe0, 0xb4,
    0x92, 0x31, 0xe7, 0x80, 0x01, 0xcf, 0x14, 0x78,
    0x91, 0x2f, 0xd7, 0x98, 0x47, 0x80, 0xdd, 0x8e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrailerUnitDescription__EXPECTED_HASH = {1, {
    0x94, 0x29, 0xcb, 0x57, 0xf7, 0x36, 0x2e, 0xa4,
    0x59, 0xa7, 0xa2, 0x6a, 0x1d, 0x3a, 0xd1, 0x4b,
    0x4a, 0x85, 0x6b, 0x0c, 0x85, 0x7d, 0x47, 0xa9,
    0xad, 0xc0, 0x22, 0x3e, 0xaa, 0xb2, 0x04, 0x33,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrailerUnitDescriptionList__EXPECTED_HASH = {1, {
    0x5e, 0x7c, 0xaa, 0x56, 0x2a, 0xcc, 0xc2, 0x6f,
    0x0c, 0x47, 0x0f, 0xa1, 0x18, 0xfc, 0xca, 0x19,
    0xfc, 0x5a, 0xc6, 0x4a, 0x49, 0xb5, 0xa3, 0x2e,
    0xeb, 0xd3, 0x23, 0x19, 0xeb, 0x1c, 0xb7, 0x38,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VehicleHeight__EXPECTED_HASH = {1, {
    0x10, 0x3f, 0x7b, 0x69, 0x2a, 0xe8, 0x14, 0xbb,
    0xf1, 0x71, 0x13, 0x51, 0x88, 0x00, 0xd6, 0x9c,
    0xc7, 0x8f, 0xfa, 0x1a, 0x9d, 0x5e, 0xfa, 0x51,
    0x56, 0x26, 0xea, 0x2d, 0x1d, 0x70, 0xe5, 0xb4,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VehicleLength__EXPECTED_HASH = {1, {
    0xf7, 0x34, 0x97, 0x26, 0xad, 0x1a, 0xf5, 0xf7,
    0x3d, 0x35, 0x20, 0xc2, 0xe0, 0x2c, 0x01, 0x75,
    0x37, 0x36, 0x68, 0xa8, 0x52, 0x69, 0xbc, 0x55,
    0xe1, 0x95, 0x59, 0xca, 0xfb, 0xb3, 0x16, 0xee,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VehicleWidth__EXPECTED_HASH = {1, {
    0x19, 0x60, 0x02, 0xee, 0xe5, 0x9c, 0xf0, 0xe7,
    0xae, 0xd7, 0x08, 0x54, 0xb8, 0x90, 0xad, 0xc1,
    0x74, 0x98, 0xb9, 0xaf, 0x34, 0x3e, 0x95, 0xdb,
    0x81, 0xc2, 0xa5, 0xe4, 0xce, 0x6e, 0x2c, 0x78,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VertOffsetB07__EXPECTED_HASH = {1, {
    0x0d, 0x59, 0x6e, 0xf1, 0x2d, 0xae, 0x7b, 0x4e,
    0xb9, 0x88, 0x8c, 0x0e, 0xc6, 0xac, 0x9c, 0xc8,
    0x2c, 0xd7, 0x1e, 0x7f, 0xd4, 0x9e, 0x58, 0xf4,
    0x86, 0x7d, 0x7e, 0xc0, 0xdf, 0x05, 0x97, 0x6b,
  }};
#endif

static char j2735_v2x_msgs__msg__TrailerData__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrailerData";
static char j2735_v2x_msgs__msg__Angle__TYPE_NAME[] = "j2735_v2x_msgs/msg/Angle";
static char j2735_v2x_msgs__msg__BumperHeight__TYPE_NAME[] = "j2735_v2x_msgs/msg/BumperHeight";
static char j2735_v2x_msgs__msg__BumperHeights__TYPE_NAME[] = "j2735_v2x_msgs/msg/BumperHeights";
static char j2735_v2x_msgs__msg__CoarseHeading__TYPE_NAME[] = "j2735_v2x_msgs/msg/CoarseHeading";
static char j2735_v2x_msgs__msg__IsDolly__TYPE_NAME[] = "j2735_v2x_msgs/msg/IsDolly";
static char j2735_v2x_msgs__msg__NodeXY24b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY24b";
static char j2735_v2x_msgs__msg__OffsetB11__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetB11";
static char j2735_v2x_msgs__msg__OffsetB12__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetB12";
static char j2735_v2x_msgs__msg__PivotPointDescription__TYPE_NAME[] = "j2735_v2x_msgs/msg/PivotPointDescription";
static char j2735_v2x_msgs__msg__PivotingAllowed__TYPE_NAME[] = "j2735_v2x_msgs/msg/PivotingAllowed";
static char j2735_v2x_msgs__msg__TimeOffset__TYPE_NAME[] = "j2735_v2x_msgs/msg/TimeOffset";
static char j2735_v2x_msgs__msg__TrailerHistoryPoint__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrailerHistoryPoint";
static char j2735_v2x_msgs__msg__TrailerHistoryPointList__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrailerHistoryPointList";
static char j2735_v2x_msgs__msg__TrailerMass__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrailerMass";
static char j2735_v2x_msgs__msg__TrailerUnitDescription__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrailerUnitDescription";
static char j2735_v2x_msgs__msg__TrailerUnitDescriptionList__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrailerUnitDescriptionList";
static char j2735_v2x_msgs__msg__VehicleHeight__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleHeight";
static char j2735_v2x_msgs__msg__VehicleLength__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleLength";
static char j2735_v2x_msgs__msg__VehicleWidth__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleWidth";
static char j2735_v2x_msgs__msg__VertOffsetB07__TYPE_NAME[] = "j2735_v2x_msgs/msg/VertOffsetB07";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__TrailerData__FIELD_NAME__ssp_index[] = "ssp_index";
static char j2735_v2x_msgs__msg__TrailerData__FIELD_NAME__connection[] = "connection";
static char j2735_v2x_msgs__msg__TrailerData__FIELD_NAME__units[] = "units";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__TrailerData__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__TrailerData__FIELD_NAME__ssp_index, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerData__FIELD_NAME__connection, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PivotPointDescription__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerData__FIELD_NAME__units, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__TrailerUnitDescriptionList__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__TrailerData__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__Angle__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BumperHeight__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BumperHeights__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__CoarseHeading__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__IsDolly__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY24b__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetB11__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetB12__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PivotPointDescription__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PivotingAllowed__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TimeOffset__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerHistoryPoint__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerHistoryPointList__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerMass__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerUnitDescription__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerUnitDescriptionList__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleHeight__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleLength__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleWidth__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VertOffsetB07__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__TrailerData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__TrailerData__TYPE_NAME, 30, 30},
      {j2735_v2x_msgs__msg__TrailerData__FIELDS, 3, 3},
    },
    {j2735_v2x_msgs__msg__TrailerData__REFERENCED_TYPE_DESCRIPTIONS, 20, 20},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Angle__EXPECTED_HASH, j2735_v2x_msgs__msg__Angle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__Angle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BumperHeight__EXPECTED_HASH, j2735_v2x_msgs__msg__BumperHeight__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__BumperHeight__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BumperHeights__EXPECTED_HASH, j2735_v2x_msgs__msg__BumperHeights__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__BumperHeights__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__CoarseHeading__EXPECTED_HASH, j2735_v2x_msgs__msg__CoarseHeading__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__CoarseHeading__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__IsDolly__EXPECTED_HASH, j2735_v2x_msgs__msg__IsDolly__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__IsDolly__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY24b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY24b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__NodeXY24b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetB11__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetB11__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = j2735_v2x_msgs__msg__OffsetB11__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetB12__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetB12__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = j2735_v2x_msgs__msg__OffsetB12__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PivotPointDescription__EXPECTED_HASH, j2735_v2x_msgs__msg__PivotPointDescription__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = j2735_v2x_msgs__msg__PivotPointDescription__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PivotingAllowed__EXPECTED_HASH, j2735_v2x_msgs__msg__PivotingAllowed__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = j2735_v2x_msgs__msg__PivotingAllowed__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TimeOffset__EXPECTED_HASH, j2735_v2x_msgs__msg__TimeOffset__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = j2735_v2x_msgs__msg__TimeOffset__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrailerHistoryPoint__EXPECTED_HASH, j2735_v2x_msgs__msg__TrailerHistoryPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = j2735_v2x_msgs__msg__TrailerHistoryPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrailerHistoryPointList__EXPECTED_HASH, j2735_v2x_msgs__msg__TrailerHistoryPointList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = j2735_v2x_msgs__msg__TrailerHistoryPointList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrailerMass__EXPECTED_HASH, j2735_v2x_msgs__msg__TrailerMass__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = j2735_v2x_msgs__msg__TrailerMass__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrailerUnitDescription__EXPECTED_HASH, j2735_v2x_msgs__msg__TrailerUnitDescription__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[14].fields = j2735_v2x_msgs__msg__TrailerUnitDescription__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrailerUnitDescriptionList__EXPECTED_HASH, j2735_v2x_msgs__msg__TrailerUnitDescriptionList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[15].fields = j2735_v2x_msgs__msg__TrailerUnitDescriptionList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleHeight__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleHeight__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[16].fields = j2735_v2x_msgs__msg__VehicleHeight__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleLength__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleLength__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[17].fields = j2735_v2x_msgs__msg__VehicleLength__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleWidth__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleWidth__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[18].fields = j2735_v2x_msgs__msg__VehicleWidth__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VertOffsetB07__EXPECTED_HASH, j2735_v2x_msgs__msg__VertOffsetB07__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[19].fields = j2735_v2x_msgs__msg__VertOffsetB07__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# TrailerData.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# TrailerData ::= SEQUENCE {\n"
  "#    notUsed SSPindex,\n"
  "#    -- always set to 0 and carries no meaning;\n"
  "#    -- legacy field maintained for backward compatibility\n"
  "uint8 ssp_index\n"
  "\n"
  "#    -- Offset connection point details from the \n"
  "#    -- hauling vehicle to the first trailer unit\n"
  "#    connection  PivotPointDescription\n"
  "j2735_v2x_msgs/PivotPointDescription connection\n"
  "\n"
  "#    -- One of more Trailer or Dolly Descriptions \n"
  "#    -- (each called a unit)\n"
  "#    units       TrailerUnitDescriptionList\n"
  "j2735_v2x_msgs/TrailerUnitDescriptionList units";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__TrailerData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__TrailerData__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 589, 589},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__TrailerData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[21];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 21, 21};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__TrailerData__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__Angle__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__BumperHeight__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__BumperHeights__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__CoarseHeading__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__IsDolly__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__NodeXY24b__get_individual_type_description_source(NULL);
    sources[7] = *j2735_v2x_msgs__msg__OffsetB11__get_individual_type_description_source(NULL);
    sources[8] = *j2735_v2x_msgs__msg__OffsetB12__get_individual_type_description_source(NULL);
    sources[9] = *j2735_v2x_msgs__msg__PivotPointDescription__get_individual_type_description_source(NULL);
    sources[10] = *j2735_v2x_msgs__msg__PivotingAllowed__get_individual_type_description_source(NULL);
    sources[11] = *j2735_v2x_msgs__msg__TimeOffset__get_individual_type_description_source(NULL);
    sources[12] = *j2735_v2x_msgs__msg__TrailerHistoryPoint__get_individual_type_description_source(NULL);
    sources[13] = *j2735_v2x_msgs__msg__TrailerHistoryPointList__get_individual_type_description_source(NULL);
    sources[14] = *j2735_v2x_msgs__msg__TrailerMass__get_individual_type_description_source(NULL);
    sources[15] = *j2735_v2x_msgs__msg__TrailerUnitDescription__get_individual_type_description_source(NULL);
    sources[16] = *j2735_v2x_msgs__msg__TrailerUnitDescriptionList__get_individual_type_description_source(NULL);
    sources[17] = *j2735_v2x_msgs__msg__VehicleHeight__get_individual_type_description_source(NULL);
    sources[18] = *j2735_v2x_msgs__msg__VehicleLength__get_individual_type_description_source(NULL);
    sources[19] = *j2735_v2x_msgs__msg__VehicleWidth__get_individual_type_description_source(NULL);
    sources[20] = *j2735_v2x_msgs__msg__VertOffsetB07__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
