// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/ObstacleDetection.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/obstacle_detection__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__ObstacleDetection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x67, 0xf5, 0x25, 0x3a, 0x4f, 0x4a, 0x33, 0xcc,
      0xdd, 0x1e, 0x35, 0xf9, 0xa4, 0xb0, 0x5d, 0x87,
      0x64, 0x86, 0xcf, 0xd7, 0xa3, 0xfd, 0xd8, 0x29,
      0x7f, 0x35, 0x66, 0x0e, 0x95, 0x3c, 0x03, 0xc7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/d_day__functions.h"
#include "j2735_v2x_msgs/msg/detail/angle__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_offset__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_minute__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_hour__functions.h"
#include "j2735_v2x_msgs/msg/detail/obstacle_direction__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_second__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_year__functions.h"
#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_month__functions.h"
#include "j2735_v2x_msgs/msg/detail/vertical_acceleration_threshold__functions.h"
#include "j2735_v2x_msgs/msg/detail/obstacle_distance__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_date_time__functions.h"
#include "j2735_v2x_msgs/msg/detail/iti_scodes__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Angle__EXPECTED_HASH = {1, {
    0xd3, 0x71, 0x4d, 0x57, 0xd2, 0xda, 0x35, 0x97,
    0x4c, 0xd1, 0x0c, 0xcf, 0xca, 0xd6, 0x95, 0xb9,
    0x3f, 0xec, 0x8d, 0x61, 0x31, 0xa6, 0x53, 0x16,
    0x25, 0xda, 0x6a, 0x32, 0xc2, 0x83, 0x0c, 0x6d,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DDateTime__EXPECTED_HASH = {1, {
    0x20, 0x7d, 0x4a, 0x5e, 0xa7, 0x89, 0xa3, 0xfc,
    0xb5, 0x0a, 0x91, 0xb1, 0xa6, 0xcf, 0x8b, 0xe4,
    0x41, 0xb6, 0xfe, 0x07, 0x1e, 0x14, 0x44, 0x33,
    0x0f, 0x1a, 0x85, 0x0a, 0xa1, 0x93, 0x30, 0xc8,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DDay__EXPECTED_HASH = {1, {
    0x07, 0xee, 0x90, 0x8c, 0xb8, 0xfa, 0x01, 0x01,
    0x65, 0x42, 0x4f, 0x94, 0x79, 0x93, 0x0c, 0x20,
    0x5f, 0x19, 0xfa, 0x7f, 0xa8, 0x3d, 0x97, 0xfd,
    0xc8, 0x38, 0xa5, 0x2f, 0x1f, 0xeb, 0xba, 0xae,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DHour__EXPECTED_HASH = {1, {
    0x0b, 0x61, 0xb8, 0xa5, 0x7f, 0x7c, 0xd5, 0xc1,
    0xcc, 0x3f, 0xe5, 0x50, 0xa5, 0x19, 0xfd, 0xbf,
    0x42, 0xde, 0xe0, 0xe9, 0x08, 0xf0, 0xd8, 0x54,
    0x23, 0x46, 0x4d, 0x20, 0x59, 0xac, 0x75, 0x8f,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DMinute__EXPECTED_HASH = {1, {
    0x36, 0x2f, 0x1c, 0xf0, 0xcb, 0xb9, 0xba, 0x3f,
    0xdd, 0x53, 0xf8, 0xba, 0xe8, 0x58, 0x69, 0xbb,
    0x89, 0x63, 0x98, 0xb8, 0xeb, 0xb9, 0x19, 0x8a,
    0x04, 0xa5, 0x69, 0xb9, 0xdc, 0x96, 0x3f, 0xec,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DMonth__EXPECTED_HASH = {1, {
    0x60, 0xf7, 0xdd, 0xa8, 0x95, 0xe8, 0x06, 0xe6,
    0xb5, 0xeb, 0x4d, 0x54, 0x9d, 0xed, 0xe7, 0xdf,
    0xec, 0xdc, 0x5d, 0xa3, 0x8d, 0xa5, 0x9a, 0xa8,
    0x27, 0x40, 0xd4, 0x14, 0x65, 0xac, 0xf4, 0x10,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DOffset__EXPECTED_HASH = {1, {
    0xa9, 0xed, 0x8e, 0x6b, 0x5e, 0x57, 0x73, 0x09,
    0x5e, 0xcb, 0x92, 0xee, 0xd7, 0xd0, 0x38, 0x73,
    0xfc, 0x10, 0xea, 0x2d, 0x26, 0x25, 0xdc, 0x0a,
    0x23, 0x91, 0xf1, 0x3d, 0x0a, 0xbf, 0x62, 0x84,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DSecond__EXPECTED_HASH = {1, {
    0x30, 0x1d, 0x97, 0x44, 0x35, 0x12, 0xb0, 0x3b,
    0xed, 0xf4, 0xa3, 0x19, 0x4e, 0x90, 0x4a, 0xb4,
    0x9f, 0xd6, 0x29, 0x54, 0xe6, 0xc0, 0x1a, 0x55,
    0x0f, 0x55, 0xb2, 0xc3, 0xd3, 0x15, 0x12, 0xc0,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DYear__EXPECTED_HASH = {1, {
    0xa5, 0xab, 0x56, 0x67, 0x6a, 0xc6, 0xdb, 0x81,
    0xb2, 0xa4, 0xd5, 0x66, 0x01, 0xda, 0x13, 0xaa,
    0xfd, 0xfd, 0x79, 0x33, 0x25, 0x78, 0x22, 0x91,
    0x96, 0x69, 0xe3, 0xac, 0xfe, 0x9c, 0xd4, 0x26,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ITISGenericLocations__EXPECTED_HASH = {1, {
    0x10, 0x13, 0x26, 0xf3, 0x6d, 0x6b, 0x8c, 0x2f,
    0xef, 0x25, 0xcd, 0x5b, 0x67, 0x9e, 0x05, 0xf9,
    0xc4, 0x32, 0xdf, 0x5f, 0xf1, 0xfd, 0xf3, 0xa4,
    0xe3, 0xf3, 0x47, 0xc2, 0xb2, 0x7b, 0x09, 0x9e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ITIScodes__EXPECTED_HASH = {1, {
    0x5c, 0xe9, 0x4e, 0x8e, 0xb9, 0x8c, 0xd8, 0x67,
    0xc6, 0x1d, 0x9c, 0xe9, 0x75, 0xc2, 0xee, 0x55,
    0x04, 0x79, 0x97, 0xb6, 0xe9, 0x2d, 0xec, 0xda,
    0xeb, 0x57, 0xd9, 0xa6, 0x2e, 0x14, 0x09, 0x5e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ObstacleDirection__EXPECTED_HASH = {1, {
    0xb8, 0x5f, 0x5d, 0xb3, 0x38, 0xec, 0x05, 0x81,
    0x94, 0xf7, 0x79, 0x99, 0x37, 0x77, 0xbe, 0x41,
    0xbf, 0x24, 0xce, 0xbe, 0x96, 0xf2, 0xee, 0xe3,
    0x94, 0x83, 0x3d, 0x45, 0xba, 0xb1, 0x56, 0xa7,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ObstacleDistance__EXPECTED_HASH = {1, {
    0x62, 0x60, 0x60, 0xdf, 0xe4, 0xec, 0x12, 0x67,
    0x57, 0xbc, 0x0d, 0x09, 0x84, 0xa5, 0xe7, 0x56,
    0xfb, 0x6b, 0xbb, 0x44, 0xfa, 0xb3, 0x21, 0x46,
    0x24, 0xb3, 0x3f, 0xca, 0x51, 0x58, 0x40, 0xe7,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VerticalAccelerationThreshold__EXPECTED_HASH = {1, {
    0x5c, 0xd9, 0x9d, 0xa5, 0x58, 0x03, 0xc5, 0xb8,
    0x59, 0x21, 0x7e, 0xce, 0xc8, 0xf5, 0x5a, 0x3d,
    0xec, 0xc6, 0xca, 0xbb, 0x50, 0x00, 0x41, 0xf8,
    0xd3, 0x3a, 0x2e, 0xd2, 0x05, 0x24, 0x5f, 0xbc,
  }};
#endif

static char j2735_v2x_msgs__msg__ObstacleDetection__TYPE_NAME[] = "j2735_v2x_msgs/msg/ObstacleDetection";
static char j2735_v2x_msgs__msg__Angle__TYPE_NAME[] = "j2735_v2x_msgs/msg/Angle";
static char j2735_v2x_msgs__msg__DDateTime__TYPE_NAME[] = "j2735_v2x_msgs/msg/DDateTime";
static char j2735_v2x_msgs__msg__DDay__TYPE_NAME[] = "j2735_v2x_msgs/msg/DDay";
static char j2735_v2x_msgs__msg__DHour__TYPE_NAME[] = "j2735_v2x_msgs/msg/DHour";
static char j2735_v2x_msgs__msg__DMinute__TYPE_NAME[] = "j2735_v2x_msgs/msg/DMinute";
static char j2735_v2x_msgs__msg__DMonth__TYPE_NAME[] = "j2735_v2x_msgs/msg/DMonth";
static char j2735_v2x_msgs__msg__DOffset__TYPE_NAME[] = "j2735_v2x_msgs/msg/DOffset";
static char j2735_v2x_msgs__msg__DSecond__TYPE_NAME[] = "j2735_v2x_msgs/msg/DSecond";
static char j2735_v2x_msgs__msg__DYear__TYPE_NAME[] = "j2735_v2x_msgs/msg/DYear";
static char j2735_v2x_msgs__msg__ITISGenericLocations__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITISGenericLocations";
static char j2735_v2x_msgs__msg__ITIScodes__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITIScodes";
static char j2735_v2x_msgs__msg__ObstacleDirection__TYPE_NAME[] = "j2735_v2x_msgs/msg/ObstacleDirection";
static char j2735_v2x_msgs__msg__ObstacleDistance__TYPE_NAME[] = "j2735_v2x_msgs/msg/ObstacleDistance";
static char j2735_v2x_msgs__msg__VerticalAccelerationThreshold__TYPE_NAME[] = "j2735_v2x_msgs/msg/VerticalAccelerationThreshold";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__ObstacleDetection__FIELD_NAME__presence_vector[] = "presence_vector";
static char j2735_v2x_msgs__msg__ObstacleDetection__FIELD_NAME__ob_dist[] = "ob_dist";
static char j2735_v2x_msgs__msg__ObstacleDetection__FIELD_NAME__ob_direct[] = "ob_direct";
static char j2735_v2x_msgs__msg__ObstacleDetection__FIELD_NAME__date_time[] = "date_time";
static char j2735_v2x_msgs__msg__ObstacleDetection__FIELD_NAME__description[] = "description";
static char j2735_v2x_msgs__msg__ObstacleDetection__FIELD_NAME__location_details[] = "location_details";
static char j2735_v2x_msgs__msg__ObstacleDetection__FIELD_NAME__vert_event[] = "vert_event";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__ObstacleDetection__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__ObstacleDetection__FIELD_NAME__presence_vector, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ObstacleDetection__FIELD_NAME__ob_dist, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__ObstacleDistance__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ObstacleDetection__FIELD_NAME__ob_direct, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__ObstacleDirection__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ObstacleDetection__FIELD_NAME__date_time, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__DDateTime__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ObstacleDetection__FIELD_NAME__description, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__ITIScodes__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ObstacleDetection__FIELD_NAME__location_details, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__ITISGenericLocations__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ObstacleDetection__FIELD_NAME__vert_event, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__VerticalAccelerationThreshold__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__ObstacleDetection__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__Angle__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DDateTime__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DDay__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DHour__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DMinute__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DMonth__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DOffset__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DSecond__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DYear__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ITISGenericLocations__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ITIScodes__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ObstacleDirection__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ObstacleDistance__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VerticalAccelerationThreshold__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__ObstacleDetection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__ObstacleDetection__TYPE_NAME, 36, 36},
      {j2735_v2x_msgs__msg__ObstacleDetection__FIELDS, 7, 7},
    },
    {j2735_v2x_msgs__msg__ObstacleDetection__REFERENCED_TYPE_DESCRIPTIONS, 14, 14},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Angle__EXPECTED_HASH, j2735_v2x_msgs__msg__Angle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__Angle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DDateTime__EXPECTED_HASH, j2735_v2x_msgs__msg__DDateTime__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__DDateTime__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DDay__EXPECTED_HASH, j2735_v2x_msgs__msg__DDay__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__DDay__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DHour__EXPECTED_HASH, j2735_v2x_msgs__msg__DHour__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__DHour__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DMinute__EXPECTED_HASH, j2735_v2x_msgs__msg__DMinute__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__DMinute__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DMonth__EXPECTED_HASH, j2735_v2x_msgs__msg__DMonth__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__DMonth__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DOffset__EXPECTED_HASH, j2735_v2x_msgs__msg__DOffset__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = j2735_v2x_msgs__msg__DOffset__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DSecond__EXPECTED_HASH, j2735_v2x_msgs__msg__DSecond__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = j2735_v2x_msgs__msg__DSecond__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DYear__EXPECTED_HASH, j2735_v2x_msgs__msg__DYear__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = j2735_v2x_msgs__msg__DYear__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ITISGenericLocations__EXPECTED_HASH, j2735_v2x_msgs__msg__ITISGenericLocations__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = j2735_v2x_msgs__msg__ITISGenericLocations__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ITIScodes__EXPECTED_HASH, j2735_v2x_msgs__msg__ITIScodes__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = j2735_v2x_msgs__msg__ITIScodes__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ObstacleDirection__EXPECTED_HASH, j2735_v2x_msgs__msg__ObstacleDirection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = j2735_v2x_msgs__msg__ObstacleDirection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ObstacleDistance__EXPECTED_HASH, j2735_v2x_msgs__msg__ObstacleDistance__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = j2735_v2x_msgs__msg__ObstacleDistance__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VerticalAccelerationThreshold__EXPECTED_HASH, j2735_v2x_msgs__msg__VerticalAccelerationThreshold__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = j2735_v2x_msgs__msg__VerticalAccelerationThreshold__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# ObstacleDetection.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# ObstacleDetection ::= SEQUENCE {  \n"
  "#    obDist          ObstacleDistance,        -- Obstacle Distance        \n"
  "#    obDirect        ObstacleDirection,       -- Obstacle Direction\n"
  "#    description     ITIS.ITIScodes(523..541) OPTIONAL, \n"
  "#                                             -- Uses a limited set of ITIS codes        \n"
  "#    locationDetails ITIS.GenericLocations OPTIONAL,        \n"
  "#    dateTime        DDateTime,               -- Time detected\n"
  "#    vertEvent       VerticalAccelerationThreshold OPTIONAL, \n"
  "#                                             -- Any wheels which have \n"
  "#                                             -- exceeded the acceleration point\n"
  "#    ...\n"
  "#    }\n"
  "\n"
  "# A BIT STRING defining the presence of optional fields.\n"
  "# Compare with bitwise-and\n"
  "# if (presence_vector & HAS_DESCRIPTION) etc.\n"
  "# Create with bitwise-or\n"
  "# presence_vector = presence_vector | HAS_DESCRIPTION\n"
  "uint16 presence_vector\n"
  "\n"
  "uint16 HAS_DESCRIPTION = 1\n"
  "uint16 HAS_LOCATION_DETAILS = 2\n"
  "uint16 HAS_VERT_EVENT = 4\n"
  "\n"
  "j2735_v2x_msgs/ObstacleDistance ob_dist\n"
  "\n"
  "j2735_v2x_msgs/ObstacleDirection ob_direct\n"
  "\n"
  "j2735_v2x_msgs/DDateTime date_time\n"
  "\n"
  "####\n"
  "# OPTIONAL FIELDS\n"
  "# All fields below this section are optional.\n"
  "# The presence of a given field can be idenfied by checking the presence_vector\n"
  "####\n"
  "\n"
  "j2735_v2x_msgs/ITIScodes description\n"
  "uint16 DESCRIPTION_MIN = 523\n"
  "uint16 DESCRIPTION_MAX = 541\n"
  "\n"
  "j2735_v2x_msgs/ITISGenericLocations location_details\n"
  "\n"
  "j2735_v2x_msgs/VerticalAccelerationThreshold vert_event";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__ObstacleDetection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__ObstacleDetection__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1543, 1543},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__ObstacleDetection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[15];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 15, 15};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__ObstacleDetection__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__Angle__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__DDateTime__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__DDay__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__DHour__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__DMinute__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__DMonth__get_individual_type_description_source(NULL);
    sources[7] = *j2735_v2x_msgs__msg__DOffset__get_individual_type_description_source(NULL);
    sources[8] = *j2735_v2x_msgs__msg__DSecond__get_individual_type_description_source(NULL);
    sources[9] = *j2735_v2x_msgs__msg__DYear__get_individual_type_description_source(NULL);
    sources[10] = *j2735_v2x_msgs__msg__ITISGenericLocations__get_individual_type_description_source(NULL);
    sources[11] = *j2735_v2x_msgs__msg__ITIScodes__get_individual_type_description_source(NULL);
    sources[12] = *j2735_v2x_msgs__msg__ObstacleDirection__get_individual_type_description_source(NULL);
    sources[13] = *j2735_v2x_msgs__msg__ObstacleDistance__get_individual_type_description_source(NULL);
    sources[14] = *j2735_v2x_msgs__msg__VerticalAccelerationThreshold__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
