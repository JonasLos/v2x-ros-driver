// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/ITISVehicleGroupAffected.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/itis_vehicle_group_affected__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__ITISVehicleGroupAffected__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0x14, 0x2b, 0x50, 0x15, 0xee, 0x94, 0xb0,
      0x7f, 0x61, 0x1b, 0xfb, 0xed, 0x2b, 0x91, 0xdc,
      0xd5, 0x16, 0xb5, 0x0d, 0x66, 0x6e, 0x3f, 0xe1,
      0xd7, 0xd4, 0xd6, 0xbd, 0xdd, 0x5f, 0x7b, 0x0d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__ITISVehicleGroupAffected__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITISVehicleGroupAffected";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__ITISVehicleGroupAffected__FIELD_NAME__vehicle_group_affected[] = "vehicle_group_affected";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__ITISVehicleGroupAffected__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__ITISVehicleGroupAffected__FIELD_NAME__vehicle_group_affected, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__ITISVehicleGroupAffected__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__ITISVehicleGroupAffected__TYPE_NAME, 43, 43},
      {j2735_v2x_msgs__msg__ITISVehicleGroupAffected__FIELDS, 1, 1},
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
  "# ITISVehicleGroupAffected.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# VehicleGroupAffected ::= ENUMERATED { \n"
  "#    all-vehicles                               (9217),  \n"
  "#    bicycles                                   (9218),  \n"
  "#    motorcycles                                (9219),  -- to include mopeds as well\n"
  "#    cars                                       (9220),  -- (remapped from ERM value of\n"
  "#                                                        -- zero)\n"
  "#    light-vehicles                             (9221),  \n"
  "#    cars-and-light-vehicles                    (9222),  \n"
  "#    cars-with-trailers                         (9223),  \n"
  "#    cars-with-recreational-trailers            (9224),  \n"
  "#    vehicles-with-trailers                     (9225),  \n"
  "#    heavy-vehicles                             (9226),  \n"
  "#    trucks                                     (9227),  \n"
  "#    buses                                      (9228),  \n"
  "#    articulated-buses                          (9229),  \n"
  "#    school-buses                               (9230),  \n"
  "#    vehicles-with-semi-trailers                (9231),  \n"
  "#    vehicles-with-double-trailers              (9232),  -- Alternative Rendering:  \n"
  "#                                                        -- western doubles\n"
  "#    high-profile-vehicles                      (9233),  \n"
  "#    wide-vehicles                              (9234),  \n"
  "#    long-vehicles                              (9235),  \n"
  "#    hazardous-loads                            (9236),  \n"
  "#    exceptional-loads                          (9237),  \n"
  "#    abnormal-loads                             (9238),  \n"
  "#    convoys                                    (9239),  \n"
  "#    maintenance-vehicles                       (9240),  \n"
  "#    delivery-vehicles                          (9241),  \n"
  "#    vehicles-with-even-numbered-license-plates (9242),  \n"
  "#    vehicles-with-odd-numbered-license-plates  (9243),  \n"
  "#    vehicles-with-parking-permits              (9244),  \n"
  "#    vehicles-with-catalytic-converters         (9245),  \n"
  "#    vehicles-without-catalytic-converters      (9246),  \n"
  "#    gas-powered-vehicles                       (9247),  \n"
  "#    diesel-powered-vehicles                    (9248),  \n"
  "#    lPG-vehicles                               (9249),  -- The L is lower case here\n"
  "#    military-convoys                           (9250),  \n"
  "#    military-vehicles                          (9251),  \n"
  "#    ... -- # LOCAL_CONTENT_ITIS \n"
  "#    }\n"
  "#    -- Classification of vehicles and types of transport\n"
  "\n"
  "uint16 vehicle_group_affected\n"
  "\n"
  "# Enumeration values for vehicle_group_affected\n"
  "uint16 ALL_VEHICLES=9217\n"
  "uint16 BICYCLES=9218\n"
  "uint16 MOTORCYCLES=9219\n"
  "uint16 CARS=9220\n"
  "uint16 LIGHT_VEHICLES=9221\n"
  "uint16 CARS_AND_LIGHT_VEHICLES=9222\n"
  "uint16 CARS_WITH_TRAILERS=9223\n"
  "uint16 CARS_WITH_RECREATIONAL_TRAILERS=9224\n"
  "uint16 VEHICLES_WITH_TRAILERS=9225\n"
  "uint16 HEAVY_VEHICLES=9226\n"
  "uint16 TRUCKS=9227\n"
  "uint16 BUSES=9228\n"
  "uint16 ARTICULATED_BUSES=9229\n"
  "uint16 SCHOOL_BUSES=9230\n"
  "uint16 VEHICLES_WITH_SEMI_TRAILERS=9231\n"
  "uint16 VEHICLES_WITH_DOUBLE_TRAILERS=9232\n"
  "uint16 HIGH_PROFILE_VEHICLES=9233\n"
  "uint16 WIDE_VEHICLES=9234\n"
  "uint16 LONG_VEHICLES=9235\n"
  "uint16 HAZARDOUS_LOADS=9236\n"
  "uint16 EXCEPTIONAL_LOADS=9237\n"
  "uint16 ABNORMAL_LOADS=9238\n"
  "uint16 CONVOYS=9239\n"
  "uint16 MAINTENANCE_VEHICLES=9240\n"
  "uint16 DELIVERY_VEHICLES=9241\n"
  "uint16 VEHICLES_WITH_EVEN_NUMBERED_LICENSE_PLATES=9242\n"
  "uint16 VEHICLES_WITH_ODD_NUMBERED_LICENSE_PLATES=9243\n"
  "uint16 VEHICLES_WITH_PARKING_PERMITS=9244\n"
  "uint16 VEHICLES_WITH_CATALYTIC_CONVERTERS=9245\n"
  "uint16 VEHICLES_WITHOUT_CATALYTIC_CONVERTERS=9246\n"
  "uint16 GAS_POWERED_VEHICLES=9248\n"
  "uint16 LPG_VEHICLES=9249\n"
  "uint16 MILITARY_CONVOYS=9250\n"
  "uint16 MILITARY_VEHICLES=9251";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__ITISVehicleGroupAffected__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__ITISVehicleGroupAffected__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 3650, 3650},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__ITISVehicleGroupAffected__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__ITISVehicleGroupAffected__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
