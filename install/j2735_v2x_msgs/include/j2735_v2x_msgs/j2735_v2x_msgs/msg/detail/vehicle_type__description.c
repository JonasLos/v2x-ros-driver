// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/VehicleType.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/vehicle_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__VehicleType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0x06, 0x05, 0x41, 0x21, 0x2a, 0x3e, 0xa9,
      0x81, 0xb9, 0x86, 0x57, 0xb3, 0xb9, 0xee, 0xa3,
      0x43, 0x3d, 0xc6, 0x64, 0x5a, 0x44, 0x2d, 0xe6,
      0x86, 0x03, 0xce, 0x78, 0xf4, 0x7b, 0xc2, 0xfb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__VehicleType__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__VehicleType__FIELD_NAME__vehicle_type[] = "vehicle_type";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__VehicleType__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__VehicleType__FIELD_NAME__vehicle_type, 12, 12},
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
j2735_v2x_msgs__msg__VehicleType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__VehicleType__TYPE_NAME, 30, 30},
      {j2735_v2x_msgs__msg__VehicleType__FIELDS, 1, 1},
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
  "# VehicleType.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# VehicleType ::= ENUMERATED {\n"
  "#    none                 (0),  -- Not Equipped, Not known or unavailable\n"
  "#    unknown              (1),  -- Does not fit any other category    \n"
  "#    special              (2),  -- Special use    \n"
  "#    moto                 (3),  -- Motorcycle    \n"
  "#    car                  (4),  -- Passenger car    \n"
  "#    carOther             (5),  -- Four tire single units    \n"
  "#    bus                  (6),  -- Buses    \n"
  "#    axleCnt2             (7),  -- Two axle, six tire single units    \n"
  "#    axleCnt3             (8),  -- Three axle, single units    \n"
  "#    axleCnt4             (9),  -- Four or more axle, single unit    \n"
  "#    axleCnt4Trailer      (10), -- Four or less axle, single trailer    \n"
  "#    axleCnt5Trailer      (11), -- Five or less axle, single trailer    \n"
  "#    axleCnt6Trailer      (12), -- Six or more axle, single trailer    \n"
  "#    axleCnt5MultiTrailer (13), -- Five or less axle, multi-trailer    \n"
  "#    axleCnt6MultiTrailer (14), -- Six axle, multi-trailer    \n"
  "#    axleCnt7MultiTrailer (15),  -- Seven or more axle, multi-trailer    \n"
  "#    ...  \n"
  "#    } \n"
  "\n"
  "uint8 vehicle_type\n"
  "\n"
  "uint8 NONE=0\n"
  "uint8 UNKNOWN=1\n"
  "uint8 SPECIAL=2\n"
  "uint8 MOTO=3\n"
  "uint8 CAR=4\n"
  "uint8 CAR_OTHER=5\n"
  "uint8 BUS=6\n"
  "uint8 AXLE_CNT_2=7\n"
  "uint8 AXLE_CNT_3=8\n"
  "uint8 AXLE_CNT_4=9\n"
  "uint8 AXLE_CNT_4_TRAILER=10\n"
  "uint8 AXLE_CNT_5_TRAILER=11\n"
  "uint8 AXLE_CNT_6_TRAILER=12\n"
  "uint8 AXLE_CNT_5_MULTI_TRAILER=13\n"
  "uint8 AXLE_CNT_6_MULTI_TRAILER=14\n"
  "uint8 AXLE_CNT_7_MULTI_TRAILER=15";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__VehicleType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__VehicleType__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1505, 1505},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__VehicleType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__VehicleType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
