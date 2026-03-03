// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/ITISGenericLocations.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__ITISGenericLocations__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x10, 0x13, 0x26, 0xf3, 0x6d, 0x6b, 0x8c, 0x2f,
      0xef, 0x25, 0xcd, 0x5b, 0x67, 0x9e, 0x05, 0xf9,
      0xc4, 0x32, 0xdf, 0x5f, 0xf1, 0xfd, 0xf3, 0xa4,
      0xe3, 0xf3, 0x47, 0xc2, 0xb2, 0x7b, 0x09, 0x9e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__ITISGenericLocations__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITISGenericLocations";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__ITISGenericLocations__FIELD_NAME__generic_locations[] = "generic_locations";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__ITISGenericLocations__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__ITISGenericLocations__FIELD_NAME__generic_locations, 17, 17},
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
j2735_v2x_msgs__msg__ITISGenericLocations__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__ITISGenericLocations__TYPE_NAME, 39, 39},
      {j2735_v2x_msgs__msg__ITISGenericLocations__FIELDS, 1, 1},
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
  "# ITISGenericLocations.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "uint16 generic_locations\n"
  "\n"
  "# Enumeration values for generic_locations\n"
  "\n"
  "# GenericLocations ::= ENUMERATED  { \n"
  "#    -- Road Related\n"
  "#    on-bridges                  (7937),  -- Not to be used as the default for this\n"
  "#                                         -- category\n"
  "#    in-tunnels                  (7938),  \n"
  "#    entering-or-leaving-tunnels (7939),  \n"
  "#    on-ramps                    (7940),  \n"
  "#    in-road-construction-area   (7941),  \n"
  "#    around-a-curve              (7942),  \n"
  "#    on-curve                    (8026),   \n"
  "#    on-tracks                   (8009),   \n"
  "#    in-street                   (8025),  -- As in in-street pad crossing\n"
  "#    shoulder                    (8027),   \n"
  "#    on-minor-roads              (7943),  \n"
  "#    in-the-opposing-lanes       (7944),  \n"
  "#    adjacent-to-roadway         (7945),  \n"
  "#    across-tracks               (8024),   \n"
  "#    on-bend                     (7946),  \n"
  "#    intersection                (8032),   \n"
  "#    entire-intersection         (7947),  \n"
  "#    in-the-median               (7948),  \n"
  "#    moved-to-side-of-road       (7949),  \n"
  "#    moved-to-shoulder           (7950),  \n"
  "#    on-the-roadway              (7951),  -- Use generic locations/groups affected to\n"
  "#                                         -- make other such phrases\n"
  "#    dip                         (8010),   \n"
  "#    traffic-circle              (8011),  -- Used for W2-6 graphic as well. Alt term:\n"
  "#                                         -- roundabout\n"
  "#    crossover                   (8028),  \n"
  "#    cross-road                  (8029),  -- Also used for W2-1 Note that in some uses\n"
  "#                                         -- this is one word\n"
  "#    side-road                   (8030),  -- Do not used for W2-2R and W2-2L\n"
  "#    to                          (8014),   \n"
  "#    by                          (8015),   \n"
  "#    through                     (8016),   \n"
  "#    area-of                     (8017),  -- Also area\n"
  "#    under                       (8018),     \n"
  "#    over                        (8019),   \n"
  "#    from                        (8020),   \n"
  "#    approaching                 (8021),   \n"
  "#    entering-at                 (8022),  -- Alt form: Entrance\n"
  "#    exiting-at                  (8023), \n"
  "#    -- Terrain & Geography\n"
  "#    in-shaded-areas             (7952),  \n"
  "#    in-low-lying-areas          (7953),  \n"
  "#    in-the-downtown-area        (7954),  \n"
  "#    in-the-inner-city-area      (7955),  \n"
  "#    in-parts                    (7956),  \n"
  "#    in-some-places              (7957),  \n"
  "#    in-the-ditch                (7958),  \n"
  "#    in-the-valley               (7959),  \n"
  "#    on-hill-top                 (7960),  \n"
  "#    near-the-foothills          (7961),  \n"
  "#    at-high-altitudes           (7962),  \n"
  "#    near-the-lake               (7963),  \n"
  "#    near-the-shore              (7964),  \n"
  "#    nearby-basin                (8008),  \n"
  "#    over-the-crest-of-a-hill    (7965),  \n"
  "#    other-than-on-the-roadway   (7966),  \n"
  "#    near-the-beach              (7967),  \n"
  "#    near-beach-access-point     (7968),  \n"
  "#    mountain-pass               (8006),  \n"
  "#    lower-level                 (7969),  \n"
  "#    upper-level                 (7970),  \n"
  "#    -- Transit Travel, Air Travel and Places\n"
  "#    airport                     (7971),  \n"
  "#    concourse                   (7972),  \n"
  "#    gate                        (7973),  \n"
  "#    baggage-claim               (7974),  \n"
  "#    customs-point               (7975),  \n"
  "#    reservation-center          (8007),  \n"
  "#    station                     (7976),  \n"
  "#    platform                    (7977),  -- Alternative Rendering:  track\n"
  "#    dock                        (7978),  \n"
  "#    depot                       (7979), \n"
  "#    ev-charging-point           (7980),  \n"
  "#    information-welcome-point   (7981),  -- Use for Tourist Information as well (D9-10)\n"
  "#    at-rest-area                (7982),  \n"
  "#    at-service-area             (7983),  \n"
  "#    at-weigh-station            (7984),  \n"
  "#    roadside-park               (8033),  \n"
  "#    picnic-areas                (7985),  \n"
  "#    rest-area                   (7986),  \n"
  "#    service-stations            (7987),  \n"
  "#    toilets                     (7988),  -- Note also rest rooms in structures\n"
  "#    bus-stop                    (8031),  \n"
  "#    park-and-ride-lot           (8012),  -- Not to be used as a mode of travel\n"
  "#    -- Direction of Travel\n"
  "#    on-the-right                (7989),  \n"
  "#    on-the-left                 (7990),  \n"
  "#    in-the-center               (7991),  \n"
  "#    in-the-opposite-direction   (7992),  \n"
  "#    cross-traffic               (7993),  \n"
  "#    northbound-traffic          (7994),  \n"
  "#    eastbound-traffic           (7995),  \n"
  "#    southbound-traffic          (7996),  \n"
  "#    westbound-traffic           (7997),  \n"
  "#    -- Compass Points\n"
  "#    north                       (7998),  \n"
  "#    south                       (7999),  \n"
  "#    east                        (8000),  \n"
  "#    west                        (8001),  \n"
  "#    northeast                   (8002),  \n"
  "#    northwest                   (8003),  \n"
  "#    southeast                   (8004),  \n"
  "#    southwest                   (8005),  \n"
  "#    ... -- # LOCAL_CONTENT_ITIS \n"
  "#    }\n"
  "\n"
  "uint16 ON_BRIDGES=7937\n"
  "uint16 IN_TUNNELS=7938\n"
  "uint16 ENTERING_OR_LEAVING_TUNNELS=7939\n"
  "uint16 ON_RAMPS=7940\n"
  "uint16 IN_ROAD_CONSTRUCTION_AREA=7941\n"
  "uint16 AROUND_A_CURVE=7942\n"
  "uint16 ON_CURVE=8026\n"
  "uint16 ON_TRACKS=8009\n"
  "uint16 IN_STREET=8025\n"
  "uint16 SHOULDER=8027\n"
  "uint16 ON_MINOR_ROADS=7943\n"
  "\n"
  "uint16 ADJACENT_TO_ROADWAY=7945\n"
  "uint16 ACROSS_TRACKS=8024\n"
  "uint16 ON_BEND=7946\n"
  "uint16 INTERSECTION=8032\n"
  "uint16 ENTIRE_INTERSECTION=7947\n"
  "uint16 IN_THE_MEDIAN=7948\n"
  "uint16 MOVED_TO_SIDE_OF_ROAD=7949\n"
  "uint16 MOVED_TO_SHOULDER=7950\n"
  "uint16 ON_THE_ROADWAY=7951\n"
  "uint16 DIP=8010\n"
  "uint16 TRAFFIC_CIRCLE=8011 \n"
  "\n"
  "uint16 CROSSOVER=8028\n"
  "uint16 CROSS_ROAD=8029\n"
  "uint16 SIDE_ROAD=8030\n"
  "uint16 TO=8014\n"
  "uint16 BY=8015\n"
  "uint16 THROUGH=8016\n"
  "uint16 AREA_OF=8017\n"
  "uint16 UNDER=8018\n"
  "uint16 OVER=8019\n"
  "uint16 FROM=8020\n"
  "uint16 APPROACHING=8021\n"
  "uint16 ENTERING_AT=8022\n"
  "uint16 EXITING_AT=8023\n"
  "\n"
  "uint16 IN_SHADED_AREAS=7952\n"
  "uint16 IN_LOW_LYING_AREAS=7953\n"
  "uint16 IN_THE_DOWNTOWN_AREA=7954\n"
  "uint16 IN_THE_INNER_CITY_AREA=7955\n"
  "uint16 IN_PARTS=7956\n"
  "uint16 IN_SOME_PLACES=7957\n"
  "uint16 IN_THE_DITCH=7958\n"
  "uint16 IN_THE_VALLEY=7959\n"
  "uint16 ON_HILL_TOP=7960\n"
  "uint16 NEAR_THE_FOOTHILS=7961\n"
  "uint16 AT_HIGH_ALTITUDES=7962\n"
  "uint16 NEAR_THE_LAKE=7963\n"
  "uint16 NEAR_THE_SHORE=7964\n"
  "uint16 NEARBY_BASIN=8008\n"
  "uint16 OVER_THE_CREST_OF_A_HILL=7965 \n"
  "\n"
  "uint16 OTHER_THAN_ON_THE_ROADWAY=7966\n"
  "uint16 NEAR_THE_BEACH=7967\n"
  "uint16 NEAR_BEACH_ACCESS_POINT=7968\n"
  "uint16 MOUNTAIN_PASS=8006\n"
  "uint16 LOWER_LEVEL=7969\n"
  "uint16 UPPER_LEVEL=7970\n"
  "uint16 AIRPORT=7971\n"
  "uint16 CONCOURSE=7972\n"
  "uint16 GATE=7973\n"
  "uint16 BAGGAGE_CLAIM=7974\n"
  "uint16 CUSTOMS_POINT=7975\n"
  "uint16 RESERVATION_CENTER=8007\n"
  "uint16 STATION=7976\n"
  "uint16 PLATFORM=7977\n"
  "uint16 DOCK=7978\n"
  "uint16 DEPOT=7979\n"
  "\n"
  "uint16 EV_CHARGING_POINT=7980\n"
  "uint16 INFORMATION_WELCOME_POINT=7981\n"
  "uint16 AT_REST_AREA=7982\n"
  "uint16 AT_SERVICE_AREA=7983\n"
  "uint16 AT_WEIGH_STATION=7984\n"
  "uint16 ROADSIDE_PARK=8003\n"
  "uint16 PICNIC_AREAS=7985\n"
  "uint16 REST_AREA=7986\n"
  "uint16 SERVICE_STATIONS=7987\n"
  "uint16 TOILETS=7988\n"
  "uint16 BUS_STOP=8031\n"
  "uint16 PARK_AND_RIDE_LOT=8012\n"
  "uint16 ON_THE_RIGHT=7989\n"
  "uint16 ON_THE_LEFT=7990\n"
  "uint16 IN_THE_CENTER=7991\n"
  "uint16 IN_THE_OPPOSITE_DIRECTION=7992\n"
  "uint16 CROSS_TRAFFIC=7993\n"
  "uint16 NORTHBOUND_TRAFFIC=7994\n"
  "\n"
  "uint16 EASTBOUND_TRAFFIC=7995\n"
  "uint16 SOUTHBOUND_TRAFFIC=7996\n"
  "uint16 WESTBOUND_TRAFFIC=7997\n"
  "uint16 NORTH=7998\n"
  "uint16 SOUTH=7999\n"
  "uint16 EAST=8000\n"
  "uint16 WEST=8001\n"
  "uint16 NORTHEAST=8002\n"
  "uint16 NORTHWEST=8003\n"
  "uint16 SOUTHEAST=8004\n"
  "uint16 SOUTHWEST=8005";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__ITISGenericLocations__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__ITISGenericLocations__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 7570, 7570},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__ITISGenericLocations__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__ITISGenericLocations__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
