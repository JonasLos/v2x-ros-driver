// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/ITISIncidentResponseEquipment.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/itis_incident_response_equipment__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1c, 0x06, 0xe2, 0x25, 0x9c, 0x95, 0x3a, 0x05,
      0x39, 0xa9, 0x00, 0x89, 0xbf, 0xff, 0x7f, 0x10,
      0x88, 0x27, 0xfc, 0x3c, 0x28, 0x24, 0x5a, 0x25,
      0x2f, 0x6f, 0x02, 0xde, 0x3b, 0x59, 0x0e, 0x44,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITISIncidentResponseEquipment";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__FIELD_NAME__incident_response_equipment[] = "incident_response_equipment";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__FIELD_NAME__incident_response_equipment, 27, 27},
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
j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__TYPE_NAME, 48, 48},
      {j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__FIELDS, 1, 1},
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
  "# ITISIncidentResponseEquipment.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "uint16 incident_response_equipment\n"
  "\n"
  "# Enumeration values for incident_response_equipment included below\n"
  "\n"
  "# IncidentResponseEquipment ::= ENUMERATED { \n"
  "#    ground-fire-suppression          (9985),   \n"
  "#    heavy-ground-equipment           (9986),   \n"
  "#    aircraft                         (9988),   \n"
  "#    marine-equipment                 (9989),   \n"
  "#    support-equipment                (9990),   \n"
  "#    medical-rescue-unit              (9991),   \n"
  "#    other                            (9993),   -- Depreciated by fire standards, do not\n"
  "#                                               -- \n"
  "#    ground-fire-suppression-other    (9994),   \n"
  "#    engine                           (9995),   \n"
  "#    truck-or-aerial                  (9996),   \n"
  "#    quint                            (9997),   -- A five-function type of fire \n"
  "#                                               -- apparatus. The units in the \n"
  "#                                               -- movie Backdraft were quints\n"
  "#    tanker-pumper-combination        (9998),   \n"
  "#    brush-truck                      (10000),  \n"
  "#    aircraft-rescue-firefighting     (10001),  \n"
  "#    heavy-ground-equipment-other     (10004),  \n"
  "#    dozer-or-plow                    (10005),  \n"
  "#    tractor                          (10006),  \n"
  "#    tanker-or-tender                 (10008),  \n"
  "#    aircraft-other                   (10024),  \n"
  "#    aircraft-fixed-wing-tanker       (10025),  \n"
  "#    helitanker                       (10026),  \n"
  "#    helicopter                       (10027),  \n"
  "#    marine-equipment-other           (10034),  \n"
  "#    fire-boat-with-pump              (10035),  \n"
  "#    boat-no-pump                     (10036),  \n"
  "#    support-apparatus-other          (10044),  \n"
  "#    breathing-apparatus-support      (10045),  \n"
  "#    light-and-air-unit               (10046),  \n"
  "#    medical-rescue-unit-other        (10054),  \n"
  "#    rescue-unit                      (10055),  \n"
  "#    urban-search-rescue-unit         (10056),  \n"
  "#    high-angle-rescue                (10057),  \n"
  "#    crash-fire-rescue                (10058),  \n"
  "#    bLS-unit                         (10059),  \n"
  "#    aLS-unit                         (10060),  \n"
  "#    mobile-command-post              (10075),  -- Depreciated, do not use\n"
  "#    chief-officer-car                (10076),  \n"
  "#    hAZMAT-unit                      (10077),  \n"
  "#    type-i-hand-crew                 (10078),  \n"
  "#    type-ii-hand-crew                (10079),  \n"
  "#    privately-owned-vehicle          (10083),  -- (Often found in volunteer fire teams)\n"
  "#    other-apparatus-resource         (10084),  -- (Remapped from fire code zero)\n"
  "#    ambulance                        (10085),  \n"
  "#    bomb-squad-van                   (10086),  \n"
  "#    combine-harvester                (10087),  \n"
  "#    construction-vehicle             (10088),  \n"
  "#    farm-tractor                     (10089),  \n"
  "#    grass-cutting-machines           (10090),  \n"
  "#    hAZMAT-containment-tow           (10091),  \n"
  "#    heavy-tow                        (10092),  \n"
  "#    light-tow                        (10094),  \n"
  "#    flatbed-tow                      (10114), \n"
  "#    hedge-cutting-machines           (10093),  \n"
  "#    mobile-crane                     (10095),  \n"
  "#    refuse-collection-vehicle        (10096),  \n"
  "#    resurfacing-vehicle              (10097),  \n"
  "#    road-sweeper                     (10098),  \n"
  "#    roadside-litter-collection-crews (10099),  \n"
  "#    salvage-vehicle                  (10100),  \n"
  "#    sand-truck                       (10101),  \n"
  "#    snowplow                         (10102),  \n"
  "#    steam-roller                     (10103),  \n"
  "#    swat-team-van                    (10104),  \n"
  "#    track-laying-vehicle             (10105),  \n"
  "#    unknown-vehicle                  (10106),  \n"
  "#    white-lining-vehicle             (10107),  -- Consider using Roadwork \"road marking\n"
  "#                                               -- operations\" unless objective is to\n"
  "#                                               -- refer to the specific vehicle of this\n"
  "#                                               -- type.  Alternative Rendering: line\n"
  "#                                               -- painting vehicle\n"
  "#    dump-truck                       (10108),  \n"
  "#    supervisor-vehicle               (10109),  \n"
  "#    snow-blower                      (10110),  \n"
  "#    rotary-snow-blower               (10111),  \n"
  "#    road-grader                      (10112),  -- Alternative term: motor grader\n"
  "#    steam-truck                      (10113),  -- A special truck that thaws culverts \n"
  "#                                               -- and storm drains\n"
  "#    ... -- # LOCAL_CONTENT_ITIS \n"
  "#    }\n"
  "\n"
  "uint16 GROUND_FIRE_SUPPRESSION=9985\n"
  "uint16 HEAVY_GROUND_EQUIPMENT=9986\n"
  "uint16 AIRCRAFT=9988\n"
  "uint16 MARINE_EQUIPMENT=9989\n"
  "uint16 SUPPORT_EQUIPMENT=9990\n"
  "uint16 MEDICAL_RESCUE_UNIT=9991\n"
  "uint16 OTHER=9993\n"
  "uint16 GROUND_FIRE_SUPPRESSION_OTHER=9994\n"
  "uint16 ENGINE=9995\n"
  "uint16 TRUCK_OR_AERIAL=9996\n"
  "uint16 QUINT=9997\n"
  "\n"
  "uint16 TANKER_PUMPER_COMBINATION=9998\n"
  "uint16 BRUSH_TRUCK=10000\n"
  "uint16 AIRCRAFT_RESCUE_FIREFIGHTING=10001\n"
  "uint16 HEAVY_GROUND_EQUIPMENT_OTHER=10004\n"
  "uint16 DOZER_OR_PLOW=10005\n"
  "uint16 TRACTOR=10006\n"
  "uint16 TANKER_OR_TENDER=10008\n"
  "uint16 AIRCRAFT_OTHER=10024\n"
  "uint16 AIRCRAFT_FIXED_WING_TANKER=10025\n"
  "uint16 HELITANKER=10026\n"
  "uint16 HELICOPTER=10027\n"
  "uint16 MARINE_EQUIPMENT_OTHER=10034\n"
  "uint16 FIRE_BOAT_WITH_PUMP=10035\n"
  "uint16 BOAT_NO_PUMP=10036\n"
  "\n"
  "uint16 SUPPORT_APPARATUS_OTHER=10044\n"
  "uint16 BREATHING_APPARATUS_SUPPORT=10045\n"
  "uint16 LIGHT_AND_AIR_UNIT=10046\n"
  "uint16 MEDICAL_RESCUE_UNIT_OTHER=10054\n"
  "uint16 RESCUE_UNIT=10055\n"
  "uint16 URBAN_SEARCH_RESCUE_UNIT=10056\n"
  "uint16 HIGH_ANGLE_RESCUE=10057\n"
  "uint16 CRASH_FIRE_RESCUE=10058\n"
  "uint16 BLS_UNIT=10059\n"
  "uint16 ALS_UNIT=10060\n"
  "uint16 MOBILE_COMMAND_POST=10075\n"
  "uint16 CHIEF_OFFICER_CAR=10076\n"
  "uint16 HAZMAT_UNIT=10077\n"
  "uint16 TYPE_I_HAND_CREW=10078\n"
  "\n"
  "uint16 TYPE_II_HAND_CREW=10079\n"
  "uint16 PRIVATELY_OWNED_VEHICLE=10083\n"
  "uint16 OTHER_APPARATUS_RESOURCE=10084\n"
  "uint16 AMBULANCE=10085\n"
  "uint16 BOMB_SQUAD_VAN=10086\n"
  "uint16 COMBINE_HARVESTER=10087\n"
  "uint16 CONSTRUCTION_VEHICLE=10088\n"
  "uint16 FARM_TRACTOR=10089\n"
  "uint16 GRASS_CUTTING_MACHINES=10090\n"
  "uint16 HAZMAT_CONTAINMENT_TOW=10091\n"
  "uint16 HEAVY_TOW=10092\n"
  "uint16 LIGHT_TOW=10094\n"
  "uint16 FLATBED_TOW=10114\n"
  "uint16 HEDGE_CUTTING_MACHINES=10093\n"
  "uint16 MOBILE_CRANE=10095\n"
  "\n"
  "uint16 REFUSE_COLLECTION_VEHICLE=10096\n"
  "uint16 RESURFACING_VEHICLE=10097\n"
  "uint16 ROAD_SWEEPER=10098\n"
  "uint16 ROADSIDE_LITTER_COLLECTION_CREWS=10099\n"
  "uint16 SALVAGE_VEHICLE=10100\n"
  "uint16 SAND_TRUCK=10101\n"
  "uint16 SNOWPLOW=10102\n"
  "uint16 STEAM_ROLLER=10103\n"
  "uint16 SWAT_TEAM_VAN=10104\n"
  "uint16 TRACK_LAYING_VEHICLE=10105\n"
  "uint16 UNKNOWN_VEHICLE=10106\n"
  "uint16 WHITE_LINING_VEHICLE=10107\n"
  "\n"
  "uint16 DUMP_TRUCK=10108\n"
  "uint16 SUPERVISOR_VEHICLE=10109\n"
  "uint16 SNOW_BLOWER=10110\n"
  "uint16 ROTARY_SNOW_BLOWER=10111\n"
  "uint16 ROAD_GRADER=10112\n"
  "uint16 STEAM_TRUCK=10113";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__TYPE_NAME, 48, 48},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 6853, 6853},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
