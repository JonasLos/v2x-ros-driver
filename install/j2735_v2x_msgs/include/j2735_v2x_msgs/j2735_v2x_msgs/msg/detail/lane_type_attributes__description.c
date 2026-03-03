// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/LaneTypeAttributes.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/lane_type_attributes__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__LaneTypeAttributes__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x79, 0x05, 0x68, 0xd6, 0x46, 0xe4, 0x48, 0x73,
      0x59, 0x78, 0x30, 0x5b, 0x80, 0xf5, 0x15, 0x87,
      0x8b, 0x53, 0xb3, 0x39, 0x0a, 0xea, 0x19, 0xf7,
      0xd2, 0xe4, 0x6c, 0x39, 0x80, 0x60, 0x63, 0x0d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/lane_attributes_parking__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_attributes_crosswalk__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_attributes_bike__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_attributes_striping__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_attributes_tracked_vehicle__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_attributes_barrier__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_attributes_vehicle__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_attributes_sidewalk__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneAttributesBarrier__EXPECTED_HASH = {1, {
    0xfe, 0x33, 0x2c, 0x3b, 0x4d, 0xf1, 0x7a, 0xa7,
    0x34, 0xcb, 0x25, 0x5f, 0xd7, 0xa0, 0xc2, 0x4e,
    0x40, 0x93, 0x64, 0xc2, 0x4d, 0x89, 0xa2, 0xc5,
    0xff, 0x6c, 0xa8, 0xd4, 0x16, 0xf0, 0xcc, 0xbe,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneAttributesBike__EXPECTED_HASH = {1, {
    0xb2, 0xb4, 0xa3, 0x7c, 0xdc, 0x2c, 0xa5, 0xf4,
    0x94, 0xed, 0xfb, 0x6a, 0xd0, 0x36, 0x7d, 0x3c,
    0x2a, 0x67, 0xc8, 0xcd, 0xbb, 0x20, 0xc4, 0x26,
    0x95, 0x98, 0x4b, 0xf6, 0x82, 0xe6, 0xdd, 0x76,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneAttributesCrosswalk__EXPECTED_HASH = {1, {
    0x5f, 0x50, 0x48, 0xe1, 0xd4, 0x5a, 0x51, 0xc6,
    0x2a, 0xdc, 0x3c, 0x5f, 0x49, 0x11, 0xca, 0xa0,
    0x7b, 0x79, 0x87, 0x08, 0x0c, 0xe4, 0x67, 0x0b,
    0xad, 0xdb, 0xe8, 0x8a, 0xe5, 0x3d, 0x85, 0x4c,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneAttributesParking__EXPECTED_HASH = {1, {
    0xdd, 0x93, 0x6e, 0x30, 0x63, 0xac, 0x8c, 0x0f,
    0x26, 0xff, 0x0e, 0x2b, 0x1c, 0xd4, 0x38, 0x1c,
    0x29, 0x1c, 0xc1, 0xd4, 0xf9, 0xa4, 0x57, 0x3d,
    0x02, 0x41, 0xb7, 0x4d, 0x63, 0x26, 0xa4, 0x4b,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneAttributesSidewalk__EXPECTED_HASH = {1, {
    0xd3, 0xcc, 0xa3, 0x33, 0x7d, 0xb9, 0x67, 0x06,
    0x49, 0x6f, 0xe3, 0x00, 0x95, 0x35, 0x8d, 0xec,
    0x1c, 0x3e, 0x47, 0x68, 0x65, 0x64, 0x44, 0x1c,
    0xad, 0x65, 0xcd, 0xc7, 0x5f, 0xf4, 0xe8, 0xda,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneAttributesStriping__EXPECTED_HASH = {1, {
    0x99, 0x9e, 0x11, 0xa3, 0xc2, 0xb6, 0xf5, 0x4d,
    0x9e, 0xdb, 0xfa, 0x6b, 0xca, 0xa8, 0xa9, 0x65,
    0xb8, 0xbe, 0x4a, 0xa2, 0x2e, 0xc0, 0xbb, 0x85,
    0x46, 0x3d, 0xb6, 0x18, 0xfb, 0x2b, 0x75, 0xee,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__EXPECTED_HASH = {1, {
    0x0c, 0xbf, 0x2e, 0xfe, 0x1e, 0x3a, 0x57, 0xe4,
    0x5a, 0xa2, 0x18, 0xd7, 0xe0, 0xc3, 0x7f, 0x72,
    0x6d, 0xd3, 0x24, 0x46, 0xd5, 0xad, 0xcc, 0xb7,
    0xe8, 0x94, 0xeb, 0x2f, 0xe3, 0x7b, 0x15, 0xaf,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneAttributesVehicle__EXPECTED_HASH = {1, {
    0x77, 0x54, 0xcd, 0xb7, 0xed, 0xb4, 0xb2, 0x3e,
    0x13, 0xc2, 0xb4, 0x4c, 0xf1, 0xca, 0x4d, 0xe3,
    0x98, 0x2f, 0x61, 0x4d, 0x52, 0x20, 0x72, 0x68,
    0x82, 0xe6, 0x7a, 0x14, 0x7e, 0x43, 0x22, 0x00,
  }};
#endif

static char j2735_v2x_msgs__msg__LaneTypeAttributes__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneTypeAttributes";
static char j2735_v2x_msgs__msg__LaneAttributesBarrier__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesBarrier";
static char j2735_v2x_msgs__msg__LaneAttributesBike__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesBike";
static char j2735_v2x_msgs__msg__LaneAttributesCrosswalk__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesCrosswalk";
static char j2735_v2x_msgs__msg__LaneAttributesParking__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesParking";
static char j2735_v2x_msgs__msg__LaneAttributesSidewalk__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesSidewalk";
static char j2735_v2x_msgs__msg__LaneAttributesStriping__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesStriping";
static char j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesTrackedVehicle";
static char j2735_v2x_msgs__msg__LaneAttributesVehicle__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesVehicle";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__LaneTypeAttributes__FIELD_NAME__choice[] = "choice";
static char j2735_v2x_msgs__msg__LaneTypeAttributes__FIELD_NAME__vehicle[] = "vehicle";
static char j2735_v2x_msgs__msg__LaneTypeAttributes__FIELD_NAME__crosswalk[] = "crosswalk";
static char j2735_v2x_msgs__msg__LaneTypeAttributes__FIELD_NAME__bike_lane[] = "bike_lane";
static char j2735_v2x_msgs__msg__LaneTypeAttributes__FIELD_NAME__sidewalk[] = "sidewalk";
static char j2735_v2x_msgs__msg__LaneTypeAttributes__FIELD_NAME__median[] = "median";
static char j2735_v2x_msgs__msg__LaneTypeAttributes__FIELD_NAME__striping[] = "striping";
static char j2735_v2x_msgs__msg__LaneTypeAttributes__FIELD_NAME__tracked_vehicle[] = "tracked_vehicle";
static char j2735_v2x_msgs__msg__LaneTypeAttributes__FIELD_NAME__parking[] = "parking";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__LaneTypeAttributes__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__LaneTypeAttributes__FIELD_NAME__choice, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneTypeAttributes__FIELD_NAME__vehicle, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__LaneAttributesVehicle__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneTypeAttributes__FIELD_NAME__crosswalk, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__LaneAttributesCrosswalk__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneTypeAttributes__FIELD_NAME__bike_lane, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__LaneAttributesBike__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneTypeAttributes__FIELD_NAME__sidewalk, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__LaneAttributesSidewalk__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneTypeAttributes__FIELD_NAME__median, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__LaneAttributesBarrier__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneTypeAttributes__FIELD_NAME__striping, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__LaneAttributesStriping__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneTypeAttributes__FIELD_NAME__tracked_vehicle, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneTypeAttributes__FIELD_NAME__parking, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__LaneAttributesParking__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__LaneTypeAttributes__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__LaneAttributesBarrier__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneAttributesBike__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneAttributesCrosswalk__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneAttributesParking__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneAttributesSidewalk__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneAttributesStriping__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneAttributesVehicle__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__LaneTypeAttributes__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__LaneTypeAttributes__TYPE_NAME, 37, 37},
      {j2735_v2x_msgs__msg__LaneTypeAttributes__FIELDS, 9, 9},
    },
    {j2735_v2x_msgs__msg__LaneTypeAttributes__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneAttributesBarrier__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneAttributesBarrier__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__LaneAttributesBarrier__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneAttributesBike__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneAttributesBike__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__LaneAttributesBike__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneAttributesCrosswalk__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneAttributesCrosswalk__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__LaneAttributesCrosswalk__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneAttributesParking__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneAttributesParking__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__LaneAttributesParking__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneAttributesSidewalk__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneAttributesSidewalk__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__LaneAttributesSidewalk__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneAttributesStriping__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneAttributesStriping__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__LaneAttributesStriping__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneAttributesVehicle__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneAttributesVehicle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = j2735_v2x_msgs__msg__LaneAttributesVehicle__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# LaneTypeAttributes.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The Lane Type Attributes data frame is used to hold attribute information specific to a given lane type.\n"
  "# LaneTypeAttributes ::= CHOICE {\n"
  "# vehicle LaneAttributes-Vehicle, -- motor vehicle lanes\n"
  "# crosswalk LaneAttributes-Crosswalk, -- pedestrian crosswalks\n"
  "# bikeLane LaneAttributes-Bike, -- bike lanes\n"
  "# sidewalk LaneAttributes-Sidewalk, -- pedestrian sidewalk paths\n"
  "# median LaneAttributes-Barrier, -- medians & channelization\n"
  "# striping LaneAttributes-Striping, -- roadway markings\n"
  "# trackedVehicle LaneAttributes-TrackedVehicle, -- trains and trolleys\n"
  "# parking LaneAttributes-Parking, -- parking and stopping lanes\n"
  "# }\n"
  "\n"
  "uint8 choice\n"
  "uint8 VEHICLE=0\n"
  "uint8 CROSSWALK=1\n"
  "uint8 BIKE_LANE=2\n"
  "uint8 SIDEWALK=3\n"
  "uint8 MEDIAN=4\n"
  "uint8 STRIPING=5\n"
  "uint8 TRACKED_VEHICLE=6\n"
  "uint8 PARKING=7\n"
  "\n"
  "j2735_v2x_msgs/LaneAttributesVehicle vehicle\n"
  "j2735_v2x_msgs/LaneAttributesCrosswalk crosswalk\n"
  "j2735_v2x_msgs/LaneAttributesBike bike_lane\n"
  "j2735_v2x_msgs/LaneAttributesSidewalk sidewalk\n"
  "j2735_v2x_msgs/LaneAttributesBarrier median\n"
  "j2735_v2x_msgs/LaneAttributesStriping striping\n"
  "j2735_v2x_msgs/LaneAttributesTrackedVehicle tracked_vehicle\n"
  "j2735_v2x_msgs/LaneAttributesParking parking";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__LaneTypeAttributes__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__LaneTypeAttributes__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1262, 1262},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__LaneTypeAttributes__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__LaneTypeAttributes__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__LaneAttributesBarrier__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__LaneAttributesBike__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__LaneAttributesCrosswalk__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__LaneAttributesParking__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__LaneAttributesSidewalk__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__LaneAttributesStriping__get_individual_type_description_source(NULL);
    sources[7] = *j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__get_individual_type_description_source(NULL);
    sources[8] = *j2735_v2x_msgs__msg__LaneAttributesVehicle__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
