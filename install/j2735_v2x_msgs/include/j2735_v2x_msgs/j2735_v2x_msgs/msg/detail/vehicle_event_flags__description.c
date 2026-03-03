// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/VehicleEventFlags.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/vehicle_event_flags__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__VehicleEventFlags__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x96, 0x59, 0xfe, 0xf9, 0xbb, 0x8b, 0xc6, 0x5b,
      0x81, 0x0d, 0xc7, 0xa4, 0x2b, 0x24, 0x85, 0x89,
      0xe3, 0xe1, 0x94, 0x99, 0x0b, 0x27, 0x21, 0x91,
      0x50, 0xff, 0x79, 0x6c, 0x2c, 0x87, 0x3a, 0xaf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__VehicleEventFlags__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleEventFlags";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__VehicleEventFlags__FIELD_NAME__vehicle_event_flag[] = "vehicle_event_flag";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__VehicleEventFlags__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__VehicleEventFlags__FIELD_NAME__vehicle_event_flag, 18, 18},
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
j2735_v2x_msgs__msg__VehicleEventFlags__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__VehicleEventFlags__TYPE_NAME, 36, 36},
      {j2735_v2x_msgs__msg__VehicleEventFlags__FIELDS, 1, 1},
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
  "# VehicleEventFLags.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# VehicleEventFlags ::= BIT STRING {\n"
  "#    eventHazardLights               (0),\n"
  "#    eventStopLineViolation          (1), -- Intersection Violation   \n"
  "#    eventABSactivated               (2),\n"
  "#    eventTractionControlLoss        (3),\n"
  "#    eventStabilityControlactivated  (4),\n"
  "#    eventHazardousMaterials         (5),\n"
  "#    eventReserved1                  (6),   \n"
  "#    eventHardBraking                (7),\n"
  "#    eventLightsChanged              (8),\n"
  "#    eventWipersChanged              (9),\n"
  "#    eventFlatTire                   (10),\n"
  "#    eventDisabledVehicle            (11), -- The DisabledVehicle DF may also be sent\n"
  "#    eventAirBagDeployment           (12)\n"
  "#    } (SIZE (13, ...))\n"
  "\n"
  "uint16 vehicle_event_flag\n"
  "\n"
  "uint16 EVENT_HAZARD_LIGHTS=0\n"
  "uint16 EVENT_STOP_LINE_VIOLATION=1\n"
  "uint16 EVENT_ABS_ACTIVATED=2\n"
  "uint16 EVENT_TRACTION_CONTROL_LOSS=4\n"
  "uint16 EVENT_STABILITY_CONTROL_ACTIVATED=8\n"
  "uint16 EVENT_HAZARDOUS_MATERIALS=16\n"
  "uint16 EVENT_RESERVED1=32\n"
  "uint16 EVENT_HARD_BRAKING=64\n"
  "uint16 EVENT_LIGHTS_CHANGED=128\n"
  "uint16 EVENT_WIPERS_CHANGED=256\n"
  "uint16 EVENT_FLAT_TIRE=512\n"
  "uint16 EVENT_DISABLED_VEHICLE=1024\n"
  "uint16 EVENT_AIR_BAG_DEPLOYMENT=2048";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__VehicleEventFlags__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__VehicleEventFlags__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1199, 1199},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__VehicleEventFlags__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__VehicleEventFlags__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
