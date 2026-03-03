// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/BasicVehicleClass.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__BasicVehicleClass__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xce, 0xed, 0x04, 0x0c, 0x41, 0xec, 0xac, 0xae,
      0xce, 0xcc, 0x52, 0x28, 0xa6, 0xcd, 0x1f, 0xc3,
      0xd8, 0x09, 0x68, 0x39, 0x35, 0x26, 0xfb, 0x44,
      0xeb, 0x61, 0xde, 0x4a, 0xd0, 0xaa, 0x6f, 0x8c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__BasicVehicleClass__TYPE_NAME[] = "j2735_v2x_msgs/msg/BasicVehicleClass";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__BasicVehicleClass__FIELD_NAME__basic_vehicle_class[] = "basic_vehicle_class";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__BasicVehicleClass__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__BasicVehicleClass__FIELD_NAME__basic_vehicle_class, 19, 19},
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
j2735_v2x_msgs__msg__BasicVehicleClass__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__BasicVehicleClass__TYPE_NAME, 36, 36},
      {j2735_v2x_msgs__msg__BasicVehicleClass__FIELDS, 1, 1},
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
  "# BasicVehicleClass.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# unknownVehicleClass             BasicVehicleClass ::=  0  \n"
  "#                                 -- Not Equipped, Not known or unavailable\n"
  "# specialVehicleClass             BasicVehicleClass ::=  1  \n"
  "#                                 -- Special use    \n"
  "# --\n"
  "# --  Basic Passenger Motor Vehicle Types \n"
  "# -- \n"
  "# passenger-Vehicle-TypeUnknown   BasicVehicleClass ::=  10 -- default type\n"
  "# passenger-Vehicle-TypeOther     BasicVehicleClass ::=  11 \n"
  "# -- various fuel types are handled in another element\n"
  "# --\n"
  "# -- Light Trucks, Pickup, Van, Panel\n"
  "# -- \n"
  "# lightTruck-Vehicle-TypeUnknown  BasicVehicleClass ::=  20 -- default type\n"
  "# lightTruck-Vehicle-TypeOther    BasicVehicleClass ::=  21 \n"
  "# --\n"
  "# -- Trucks, Various axle types, includes HPMS items \n"
  "# -- \n"
  "# truck-Vehicle-TypeUnknown BasicVehicleClass ::=  25 -- default type\n"
  "# truck-Vehicle-TypeOther BasicVehicleClass ::=  26 \n"
  "# truck-axleCnt2  BasicVehicleClass ::=  27 -- Two axle, six tire single units    \n"
  "# truck-axleCnt3  BasicVehicleClass ::=  28 -- Three axle, single units    \n"
  "# truck-axleCnt4  BasicVehicleClass ::=  29 -- Four or more axle, single unit    \n"
  "# truck-axleCnt4Trailer BasicVehicleClass ::=  30 -- Four or less axle, single trailer    \n"
  "# truck-axleCnt5Trailer BasicVehicleClass ::=  31 -- Five or less axle, single trailer    \n"
  "# truck-axleCnt6Trailer BasicVehicleClass ::=  32 -- Six or more axle, single trailer    \n"
  "# truck-axleCnt5MultiTrailer BasicVehicleClass ::=  33 -- Five or less axle, multi-trailer    \n"
  "# truck-axleCnt6MultiTrailer BasicVehicleClass ::=  34 -- Six axle, multi-trailer    \n"
  "# truck-axleCnt7MultiTrailer BasicVehicleClass ::=  35 -- Seven or more axle, multi-trailer    \n"
  "# --\n"
  "# -- Motorcycle Types\n"
  "# --\n"
  "# motorcycle-TypeUnknown          BasicVehicleClass ::=  40 -- default type\n"
  "# motorcycle-TypeOther            BasicVehicleClass ::=  41\n"
  "# motorcycle-Cruiser-Standard     BasicVehicleClass ::=  42\n"
  "# motorcycle-SportUnclad          BasicVehicleClass ::=  43\n"
  "# motorcycle-SportTouring         BasicVehicleClass ::=  44\n"
  "# motorcycle-SuperSport           BasicVehicleClass ::=  45\n"
  "# motorcycle-Touring              BasicVehicleClass ::=  46\n"
  "# motorcycle-Trike                BasicVehicleClass ::=  47 \n"
  "# motorcycle-wPassengers          BasicVehicleClass ::=  48 -- type not stated\n"
  "# --\n"
  "# -- Transit Types\n"
  "# --\n"
  "# transit-TypeUnknown             BasicVehicleClass ::=  50 -- default type\n"
  "# transit-TypeOther               BasicVehicleClass ::=  51\n"
  "# transit-BRT                     BasicVehicleClass ::=  52\n"
  "# transit-ExpressBus              BasicVehicleClass ::=  53\n"
  "# transit-LocalBus                BasicVehicleClass ::=  54\n"
  "# transit-SchoolBus               BasicVehicleClass ::=  55\n"
  "# transit-FixedGuideway           BasicVehicleClass ::=  56\n"
  "# transit-Paratransit             BasicVehicleClass ::=  57\n"
  "# transit-Paratransit-Ambulance   BasicVehicleClass ::=  58\n"
  "# --\n"
  "# -- Emergency Vehicle Types\n"
  "# --\n"
  "# emergency-TypeUnknown            BasicVehicleClass ::=  60 -- default type\n"
  "# emergency-TypeOther              BasicVehicleClass ::=  61 -- includes federal users\n"
  "# emergency-Fire-Light-Vehicle     BasicVehicleClass ::=  62\n"
  "# emergency-Fire-Heavy-Vehicle     BasicVehicleClass ::=  63\n"
  "# emergency-Fire-Paramedic-Vehicle BasicVehicleClass ::=  64\n"
  "# emergency-Fire-Ambulance-Vehicle BasicVehicleClass ::=  65\n"
  "# emergency-Police-Light-Vehicle   BasicVehicleClass ::=  66\n"
  "# emergency-Police-Heavy-Vehicle   BasicVehicleClass ::=  67\n"
  "# emergency-Other-Responder        BasicVehicleClass ::=  68\n"
  "# emergency-Other-Ambulance        BasicVehicleClass ::=  69\n"
  "# --\n"
  "# -- Other DSRC Equipped Travelers\n"
  "# --\n"
  "# otherTraveler-TypeUnknown          BasicVehicleClass ::=  80 -- default type\n"
  "# otherTraveler-TypeOther            BasicVehicleClass ::=  81\n"
  "# otherTraveler-Pedestrian           BasicVehicleClass ::=  82\n"
  "# otherTraveler-Visually-Disabled    BasicVehicleClass ::=  83\n"
  "# otherTraveler-Physically-Disabled  BasicVehicleClass ::=  84\n"
  "# otherTraveler-Bicycle              BasicVehicleClass ::=  85\n"
  "# otherTraveler-Vulnerable-Roadworker BasicVehicleClass ::=  86\n"
  "# --\n"
  "# -- Other DSRC Equipped Device Types\n"
  "# --\n"
  "# infrastructure-TypeUnknown      BasicVehicleClass ::=  90 -- default type\n"
  "# infrastructure-Fixed            BasicVehicleClass ::=  91\n"
  "# infrastructure-Movable          BasicVehicleClass ::=  92\n"
  "# equipped-CargoTrailer           BasicVehicleClass ::=  93\n"
  "\n"
  "\n"
  "# BasicVehicleClass ::= INTEGER (0..255)\n"
  "uint8 basic_vehicle_class\n"
  "\n"
  "# Enumeration values for basic_vehicle_class listed below\n"
  "\n"
  "uint8 UNKNOWN_VEHICLE_CLASS=0\n"
  "uint8 SPECIAL_VEHICLE_CLASS=1\n"
  "\n"
  "uint8 PASSENGER_VEHICLE_TYPE_UNKNOWN=10\n"
  "uint8 PASSENGER_VEHICLE_TYPE_OTHER=11\n"
  "\n"
  "uint8 LIGHT_TRUCK_VEHICLE_TYPE_UNKNOWN=20\n"
  "uint8 LIGHT_TRUCK_VEHICLE_TYPE_OTHER=21\n"
  "\n"
  "uint8 TRUCK_VEHICLE_TYPE_UNKNOWN=25\n"
  "uint8 TRUCK_VEHICLE_TYPE_OTHER=26\n"
  "uint8 TRUCK_AXLE_COUNT_2=27\n"
  "uint8 TRUCK_AXLE_COUNT_3=28\n"
  "uint8 TRUCK_AXLE_COUNT_4=29\n"
  "uint8 TRUCK_AXLE_COUNT_4_TRAILER=30\n"
  "uint8 TRUCK_AXLE_COUNT_5_TRAILER=31\n"
  "uint8 TRUCK_AXLE_COUNT_6_TRAILER=32\n"
  "uint8 TRUCK_AXLE_COUNT_5_MULTI_TRAILER=33\n"
  "uint8 TRUCK_AXLE_COUNT_6_MULTI_TRAILER=34\n"
  "uint8 TRUCK_AXLE_COUNT_7_MULTI_TRAILER=35\n"
  "\n"
  "uint8 MOTORCYCLE_TYPE_UNKNOWN=40\n"
  "uint8 MOTORCYCLE_TYPE_OTHER=41\n"
  "uint8 MOTORCYCLE_CRUISER_STANDARD=42\n"
  "uint8 MOTORCYCLE_SPORT_UNCLAD=43\n"
  "uint8 MOTORCYCLE_SPORT_TOURING=44\n"
  "uint8 MOTORCYCLE_SUPORT_SPORT=45\n"
  "uint8 MOTORCYCLE_TOURING=46\n"
  "uint8 MOTORCYCLE_TRIKE=47\n"
  "uint8 MOTORCYCLE_WITH_PASSENGERS=48\n"
  "\n"
  "uint8 TRANSIT_TYPE_UNKNOWN=50\n"
  "uint8 TRANSIT_TYPE_OTHER=51\n"
  "uint8 TRANSIT_BRT=52\n"
  "uint8 TRANSIT_EXPRESS_BUS=53\n"
  "uint8 TRANSIT_LOCAL_BUS=54\n"
  "uint8 TRANSIT_SCHOOL_BUS=55\n"
  "uint8 TRANSIT_FIXED_GUIDEWAY=56\n"
  "uint8 TRANSIT_PARATRANSIT=57\n"
  "uint8 TRANSIT_PARATRANSIT_AMBULANCE=58\n"
  "\n"
  "uint8 EMERGENCY_TYPE_UNKNOWN=60\n"
  "uint8 EMERGENCY_TYPE_OTHER=61\n"
  "uint8 EMERGENCY_FIRE_LIGHT_VEHICLE=62\n"
  "uint8 EMERGENCY_FIRE_HEAVY_VEHICLE=63\n"
  "uint8 EMERGENCY_FIRE_PARAMEDIC_VEHICLE=64\n"
  "uint8 EMERGENCY_FIRE_AMBULANCE_VEHICLE=65\n"
  "uint8 EMERGENCY_POLICE_LIGHT_VEHICLE=66\n"
  "uint8 EMERGENCY_POLICE_HEAVY_VEHICLE=67\n"
  "uint8 EMERGENCY_OTHER_RESPONDER=68\n"
  "uint8 EMERGENCY_OTHER_AMBULANCE=69\n"
  "\n"
  "uint8 OTHER_TRAVELER_TYPE_UNKNOWN=80\n"
  "uint8 OTHER_TRAVELER_TYPE_OTHER=81\n"
  "uint8 OTHER_TRAVELER_PEDESTRIAN=82\n"
  "uint8 OTHER_TRAVELER_VISUALLY_DISABLED=83\n"
  "uint8 OTHER_TRAVELER_PHYSICALLY_DISABLED=84\n"
  "uint8 OTHER_TRAVELER_BICYCLE=85\n"
  "uint8 OTHER_TRAVELER_VULNERABLE_ROADWORKER=86\n"
  "\n"
  "uint8 INFRASTRUCTURE_TYPE_UNKNOWN=90\n"
  "uint8 INFRASTRUCTURE_FIXED=91\n"
  "uint8 INFRASTRUCTURE_MOVABLE=92\n"
  "uint8 INFRASTRUCTURE_CARGO_TRAILER=93";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__BasicVehicleClass__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__BasicVehicleClass__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 6490, 6490},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__BasicVehicleClass__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__BasicVehicleClass__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
