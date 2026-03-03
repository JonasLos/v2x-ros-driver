// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlMessageV01.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/traffic_control_message_v01__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__TrafficControlMessageV01__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xad, 0x57, 0x26, 0xd3, 0x49, 0x3d, 0xce, 0x57,
      0x9d, 0x6a, 0x15, 0x2b, 0x44, 0xf0, 0xa3, 0x09,
      0x3e, 0xf3, 0x44, 0x54, 0x18, 0x04, 0xe1, 0x6e,
      0xc0, 0x61, 0x55, 0xd7, 0xc4, 0x68, 0xd9, 0x8c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/repeat_params__functions.h"
#include "j2735_v2x_msgs/msg/detail/day_of_week__functions.h"
#include "j2735_v2x_msgs/msg/detail/id128b__functions.h"
#include "j2735_v2x_msgs/msg/detail/id64b__functions.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_params__functions.h"
#include "j2735_v2x_msgs/msg/detail/daily_schedule__functions.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_package__functions.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_schedule__functions.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_veh_class__functions.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_geometry__functions.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_detail__functions.h"
#include "j2735_v2x_msgs/msg/detail/path_node__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DailySchedule__EXPECTED_HASH = {1, {
    0x58, 0x68, 0xa0, 0x55, 0xfa, 0x85, 0xdb, 0xe5,
    0xfe, 0x17, 0x25, 0xfa, 0x02, 0x71, 0xfa, 0x87,
    0x4e, 0xeb, 0xe1, 0xa0, 0x96, 0x1b, 0xd8, 0x0c,
    0x20, 0x42, 0x10, 0xf1, 0x0e, 0xe3, 0x1a, 0xc3,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DayOfWeek__EXPECTED_HASH = {1, {
    0xe6, 0x6d, 0xfc, 0xf2, 0x53, 0xb1, 0x7a, 0x3b,
    0xbb, 0x47, 0xca, 0xb9, 0x9e, 0x2d, 0x6a, 0x89,
    0x8a, 0x23, 0x6f, 0x84, 0x90, 0xea, 0x22, 0xee,
    0x89, 0xcf, 0xb4, 0x5b, 0x39, 0x9a, 0xdc, 0xe1,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Id128b__EXPECTED_HASH = {1, {
    0x36, 0x29, 0xda, 0x21, 0x2b, 0x7d, 0x03, 0x0f,
    0x10, 0xb9, 0xf6, 0xc5, 0xad, 0xa6, 0xce, 0x41,
    0x86, 0xb8, 0x6a, 0x2c, 0xd8, 0x6d, 0x78, 0x17,
    0x97, 0x62, 0xa2, 0x9b, 0x01, 0x9c, 0x2a, 0xc5,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Id64b__EXPECTED_HASH = {1, {
    0x50, 0xc4, 0x8b, 0xe9, 0x00, 0xf5, 0xa0, 0xa0,
    0x2a, 0x20, 0xff, 0xe3, 0x21, 0xbc, 0x2c, 0x13,
    0x40, 0xa9, 0xfd, 0x57, 0x18, 0xe2, 0xea, 0xf1,
    0x90, 0x06, 0x79, 0xf4, 0x79, 0xb5, 0x00, 0xef,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PathNode__EXPECTED_HASH = {1, {
    0x63, 0xc5, 0xf0, 0x4d, 0xa2, 0x7d, 0x4f, 0x88,
    0x32, 0x6a, 0x9b, 0xd6, 0xc4, 0x15, 0x15, 0x04,
    0xe0, 0xf7, 0xb0, 0x39, 0x43, 0x34, 0x3c, 0x71,
    0xda, 0x06, 0xb0, 0xe5, 0xf2, 0x11, 0x91, 0x6e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__RepeatParams__EXPECTED_HASH = {1, {
    0x72, 0x99, 0x32, 0x08, 0xd3, 0xe0, 0x96, 0xd6,
    0x18, 0x1e, 0x04, 0xd0, 0x33, 0x59, 0xf6, 0x51,
    0x4b, 0x43, 0xff, 0x93, 0xe9, 0xb6, 0x78, 0xdb,
    0x3a, 0x34, 0x12, 0xe8, 0xbf, 0x54, 0x6d, 0x99,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrafficControlDetail__EXPECTED_HASH = {1, {
    0x04, 0xb7, 0xa1, 0x04, 0xaf, 0xab, 0xbc, 0x58,
    0x49, 0x25, 0xbc, 0x7c, 0x84, 0x98, 0x25, 0x40,
    0x0a, 0xaf, 0x3a, 0xb5, 0x49, 0xaa, 0x2d, 0x0a,
    0xa7, 0x71, 0xb3, 0x5d, 0xbf, 0xbd, 0x5e, 0x97,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrafficControlGeometry__EXPECTED_HASH = {1, {
    0x9c, 0xb1, 0x66, 0x8f, 0xc2, 0x40, 0xac, 0x25,
    0x11, 0x46, 0x6c, 0xff, 0x32, 0xb4, 0x56, 0x08,
    0x20, 0x3c, 0x84, 0x91, 0xce, 0xbd, 0x52, 0xe6,
    0x1e, 0xe3, 0x6c, 0x3c, 0x9a, 0x43, 0x25, 0x19,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrafficControlPackage__EXPECTED_HASH = {1, {
    0x57, 0x4d, 0xeb, 0x62, 0x8e, 0x86, 0x72, 0x6c,
    0x51, 0x8b, 0xc7, 0xe4, 0x64, 0xa2, 0x41, 0xab,
    0x9e, 0x34, 0x7e, 0x90, 0x18, 0x5e, 0xd5, 0xd5,
    0x6f, 0x6d, 0x52, 0x8c, 0x20, 0x5e, 0x13, 0xca,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrafficControlParams__EXPECTED_HASH = {1, {
    0xa4, 0x9f, 0x79, 0x5a, 0x92, 0xa9, 0x24, 0xf9,
    0x75, 0xb4, 0x9e, 0x83, 0xe3, 0x00, 0x83, 0x1d,
    0x4d, 0x52, 0xc0, 0xf4, 0x6e, 0x8e, 0xfb, 0x91,
    0xb3, 0xc1, 0x58, 0x5c, 0x0c, 0xfe, 0xf1, 0xc9,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrafficControlSchedule__EXPECTED_HASH = {1, {
    0xa5, 0x69, 0x1e, 0x21, 0xf3, 0x88, 0x3a, 0x7b,
    0x1d, 0xde, 0xe9, 0xf0, 0xf7, 0xd1, 0xd3, 0xab,
    0x99, 0x6c, 0xea, 0xeb, 0x91, 0xbc, 0x28, 0xee,
    0x36, 0xc6, 0x17, 0x19, 0xe2, 0xcc, 0xa2, 0x73,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrafficControlVehClass__EXPECTED_HASH = {1, {
    0x24, 0x3d, 0xa3, 0x9e, 0x70, 0x72, 0x66, 0xec,
    0x58, 0xb1, 0x72, 0x0c, 0xf2, 0x3a, 0x4b, 0xd9,
    0x4c, 0x10, 0xc3, 0xd0, 0x62, 0x74, 0x76, 0xae,
    0xcb, 0x9f, 0xd4, 0x8c, 0x5e, 0x07, 0x27, 0x85,
  }};
#endif

static char j2735_v2x_msgs__msg__TrafficControlMessageV01__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrafficControlMessageV01";
static char j2735_v2x_msgs__msg__DailySchedule__TYPE_NAME[] = "j2735_v2x_msgs/msg/DailySchedule";
static char j2735_v2x_msgs__msg__DayOfWeek__TYPE_NAME[] = "j2735_v2x_msgs/msg/DayOfWeek";
static char j2735_v2x_msgs__msg__Id128b__TYPE_NAME[] = "j2735_v2x_msgs/msg/Id128b";
static char j2735_v2x_msgs__msg__Id64b__TYPE_NAME[] = "j2735_v2x_msgs/msg/Id64b";
static char j2735_v2x_msgs__msg__PathNode__TYPE_NAME[] = "j2735_v2x_msgs/msg/PathNode";
static char j2735_v2x_msgs__msg__RepeatParams__TYPE_NAME[] = "j2735_v2x_msgs/msg/RepeatParams";
static char j2735_v2x_msgs__msg__TrafficControlDetail__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrafficControlDetail";
static char j2735_v2x_msgs__msg__TrafficControlGeometry__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrafficControlGeometry";
static char j2735_v2x_msgs__msg__TrafficControlPackage__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrafficControlPackage";
static char j2735_v2x_msgs__msg__TrafficControlParams__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrafficControlParams";
static char j2735_v2x_msgs__msg__TrafficControlSchedule__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrafficControlSchedule";
static char j2735_v2x_msgs__msg__TrafficControlVehClass__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrafficControlVehClass";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__reqid[] = "reqid";
static char j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__reqseq[] = "reqseq";
static char j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__msgtot[] = "msgtot";
static char j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__msgnum[] = "msgnum";
static char j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__id[] = "id";
static char j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__updated[] = "updated";
static char j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__package[] = "package";
static char j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__package_exists[] = "package_exists";
static char j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__params[] = "params";
static char j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__params_exists[] = "params_exists";
static char j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__geometry[] = "geometry";
static char j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__geometry_exists[] = "geometry_exists";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__reqid, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__Id64b__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__reqseq, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__msgtot, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__msgnum, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__Id128b__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__updated, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__package, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__TrafficControlPackage__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__package_exists, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__params, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__TrafficControlParams__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__params_exists, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__geometry, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__TrafficControlGeometry__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELD_NAME__geometry_exists, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__TrafficControlMessageV01__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__DailySchedule__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DayOfWeek__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Id128b__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Id64b__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PathNode__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__RepeatParams__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlDetail__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlGeometry__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlPackage__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlParams__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlSchedule__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlVehClass__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__TrafficControlMessageV01__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__TrafficControlMessageV01__TYPE_NAME, 43, 43},
      {j2735_v2x_msgs__msg__TrafficControlMessageV01__FIELDS, 12, 12},
    },
    {j2735_v2x_msgs__msg__TrafficControlMessageV01__REFERENCED_TYPE_DESCRIPTIONS, 12, 12},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DailySchedule__EXPECTED_HASH, j2735_v2x_msgs__msg__DailySchedule__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__DailySchedule__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DayOfWeek__EXPECTED_HASH, j2735_v2x_msgs__msg__DayOfWeek__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__DayOfWeek__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Id128b__EXPECTED_HASH, j2735_v2x_msgs__msg__Id128b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__Id128b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Id64b__EXPECTED_HASH, j2735_v2x_msgs__msg__Id64b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__Id64b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PathNode__EXPECTED_HASH, j2735_v2x_msgs__msg__PathNode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__PathNode__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__RepeatParams__EXPECTED_HASH, j2735_v2x_msgs__msg__RepeatParams__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__RepeatParams__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrafficControlDetail__EXPECTED_HASH, j2735_v2x_msgs__msg__TrafficControlDetail__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = j2735_v2x_msgs__msg__TrafficControlDetail__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrafficControlGeometry__EXPECTED_HASH, j2735_v2x_msgs__msg__TrafficControlGeometry__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = j2735_v2x_msgs__msg__TrafficControlGeometry__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrafficControlPackage__EXPECTED_HASH, j2735_v2x_msgs__msg__TrafficControlPackage__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = j2735_v2x_msgs__msg__TrafficControlPackage__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrafficControlParams__EXPECTED_HASH, j2735_v2x_msgs__msg__TrafficControlParams__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = j2735_v2x_msgs__msg__TrafficControlParams__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrafficControlSchedule__EXPECTED_HASH, j2735_v2x_msgs__msg__TrafficControlSchedule__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = j2735_v2x_msgs__msg__TrafficControlSchedule__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrafficControlVehClass__EXPECTED_HASH, j2735_v2x_msgs__msg__TrafficControlVehClass__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = j2735_v2x_msgs__msg__TrafficControlVehClass__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# TrafficControlMessageV01.msg\n"
  "#\n"
  "# Part of the CARMA Cloud geo-fence specification not part of the official SAE j2735 standard\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# \n"
  "# @version 0.1\n"
  "#\n"
  "# Description\n"
  "# ...\n"
  "\n"
  "# TrafficControlMessageV01 ::= SEQUENCE\n"
  "# {\n"
  "# \\treqid Id64b, -- ephemeral identifier of originating request\n"
  "# \\treqseq INTEGER (0..255), -- sequential counter for originating request\n"
  "# \\tmsgtot INTEGER (0..65535), -- total expected traffic control message responses\n"
  "# \\tmsgnum INTEGER (0..65535), -- message index for each response out of total responses\n"
  "# \\tid Id128b, -- unique traffic control id\n"
  "# \\tupdated EpochMins, \n"
  "# \\tpackage [0] TrafficControlPackage OPTIONAL, -- related traffic control ids\n"
  "# \\tparams [1] TrafficControlParams OPTIONAL, \n"
  "# \\tgeometry [2] TrafficControlGeometry OPTIONAL\n"
  "# }\n"
  "\n"
  "# reqid ::= Id64b\n"
  "j2735_v2x_msgs/Id64b reqid\n"
  "\n"
  "# reqseq ::= INTEGER (0..255)\n"
  "uint8 reqseq\n"
  "\n"
  "# msgtot INTEGER (0..65535), -- total expected traffic control message responses\n"
  "uint16 msgtot\n"
  "\n"
  "# msgnum INTEGER (0..65535), -- message index for each response out of total responses\n"
  "uint16 msgnum\n"
  "\n"
  "# id Id128b, -- unique traffic control id\n"
  "j2735_v2x_msgs/Id128b id\n"
  "\n"
  "# updated EpochMins\n"
  "uint64 updated\n"
  "\n"
  "# package [0] TrafficControlPackage OPTIONAL, -- related traffic control ids\n"
  "j2735_v2x_msgs/TrafficControlPackage package\n"
  "bool package_exists\n"
  "\n"
  "# params [1] TrafficControlParams OPTIONAL\n"
  "j2735_v2x_msgs/TrafficControlParams params\n"
  "bool params_exists\n"
  "\n"
  "# geometry [2] TrafficControlGeometry OPTIONAL\n"
  "j2735_v2x_msgs/TrafficControlGeometry geometry\n"
  "bool geometry_exists";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__TrafficControlMessageV01__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__TrafficControlMessageV01__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1553, 1553},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__TrafficControlMessageV01__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[13];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 13, 13};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__TrafficControlMessageV01__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__DailySchedule__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__DayOfWeek__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__Id128b__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__Id64b__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__PathNode__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__RepeatParams__get_individual_type_description_source(NULL);
    sources[7] = *j2735_v2x_msgs__msg__TrafficControlDetail__get_individual_type_description_source(NULL);
    sources[8] = *j2735_v2x_msgs__msg__TrafficControlGeometry__get_individual_type_description_source(NULL);
    sources[9] = *j2735_v2x_msgs__msg__TrafficControlPackage__get_individual_type_description_source(NULL);
    sources[10] = *j2735_v2x_msgs__msg__TrafficControlParams__get_individual_type_description_source(NULL);
    sources[11] = *j2735_v2x_msgs__msg__TrafficControlSchedule__get_individual_type_description_source(NULL);
    sources[12] = *j2735_v2x_msgs__msg__TrafficControlVehClass__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
