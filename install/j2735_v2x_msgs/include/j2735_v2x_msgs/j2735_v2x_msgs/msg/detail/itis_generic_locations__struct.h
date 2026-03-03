// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ITISGenericLocations.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/itis_generic_locations.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ITIS_GENERIC_LOCATIONS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ITIS_GENERIC_LOCATIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ON_BRIDGES'.
/**
  * Enumeration values for generic_locations
  * GenericLocations ::= ENUMERATED  {
  *    -- Road Related
  *    on-bridges                  (7937),  -- Not to be used as the default for this
  *                                         -- category
  *    in-tunnels                  (7938),
  *    entering-or-leaving-tunnels (7939),
  *    on-ramps                    (7940),
  *    in-road-construction-area   (7941),
  *    around-a-curve              (7942),
  *    on-curve                    (8026),
  *    on-tracks                   (8009),
  *    in-street                   (8025),  -- As in in-street pad crossing
  *    shoulder                    (8027),
  *    on-minor-roads              (7943),
  *    in-the-opposing-lanes       (7944),
  *    adjacent-to-roadway         (7945),
  *    across-tracks               (8024),
  *    on-bend                     (7946),
  *    intersection                (8032),
  *    entire-intersection         (7947),
  *    in-the-median               (7948),
  *    moved-to-side-of-road       (7949),
  *    moved-to-shoulder           (7950),
  *    on-the-roadway              (7951),  -- Use generic locations/groups affected to
  *                                         -- make other such phrases
  *    dip                         (8010),
  *    traffic-circle              (8011),  -- Used for W2-6 graphic as well. Alt term:
  *                                         -- roundabout
  *    crossover                   (8028),
  *    cross-road                  (8029),  -- Also used for W2-1 Note that in some uses
  *                                         -- this is one word
  *    side-road                   (8030),  -- Do not used for W2-2R and W2-2L
  *    to                          (8014),
  *    by                          (8015),
  *    through                     (8016),
  *    area-of                     (8017),  -- Also area
  *    under                       (8018),
  *    over                        (8019),
  *    from                        (8020),
  *    approaching                 (8021),
  *    entering-at                 (8022),  -- Alt form: Entrance
  *    exiting-at                  (8023),
  *    -- Terrain & Geography
  *    in-shaded-areas             (7952),
  *    in-low-lying-areas          (7953),
  *    in-the-downtown-area        (7954),
  *    in-the-inner-city-area      (7955),
  *    in-parts                    (7956),
  *    in-some-places              (7957),
  *    in-the-ditch                (7958),
  *    in-the-valley               (7959),
  *    on-hill-top                 (7960),
  *    near-the-foothills          (7961),
  *    at-high-altitudes           (7962),
  *    near-the-lake               (7963),
  *    near-the-shore              (7964),
  *    nearby-basin                (8008),
  *    over-the-crest-of-a-hill    (7965),
  *    other-than-on-the-roadway   (7966),
  *    near-the-beach              (7967),
  *    near-beach-access-point     (7968),
  *    mountain-pass               (8006),
  *    lower-level                 (7969),
  *    upper-level                 (7970),
  *    -- Transit Travel, Air Travel and Places
  *    airport                     (7971),
  *    concourse                   (7972),
  *    gate                        (7973),
  *    baggage-claim               (7974),
  *    customs-point               (7975),
  *    reservation-center          (8007),
  *    station                     (7976),
  *    platform                    (7977),  -- Alternative Rendering:  track
  *    dock                        (7978),
  *    depot                       (7979),
  *    ev-charging-point           (7980),
  *    information-welcome-point   (7981),  -- Use for Tourist Information as well (D9-10)
  *    at-rest-area                (7982),
  *    at-service-area             (7983),
  *    at-weigh-station            (7984),
  *    roadside-park               (8033),
  *    picnic-areas                (7985),
  *    rest-area                   (7986),
  *    service-stations            (7987),
  *    toilets                     (7988),  -- Note also rest rooms in structures
  *    bus-stop                    (8031),
  *    park-and-ride-lot           (8012),  -- Not to be used as a mode of travel
  *    -- Direction of Travel
  *    on-the-right                (7989),
  *    on-the-left                 (7990),
  *    in-the-center               (7991),
  *    in-the-opposite-direction   (7992),
  *    cross-traffic               (7993),
  *    northbound-traffic          (7994),
  *    eastbound-traffic           (7995),
  *    southbound-traffic          (7996),
  *    westbound-traffic           (7997),
  *    -- Compass Points
  *    north                       (7998),
  *    south                       (7999),
  *    east                        (8000),
  *    west                        (8001),
  *    northeast                   (8002),
  *    northwest                   (8003),
  *    southeast                   (8004),
  *    southwest                   (8005),
  *    ... -- # LOCAL_CONTENT_ITIS
  *    }
 */
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__ON_BRIDGES = 7937
};

/// Constant 'IN_TUNNELS'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__IN_TUNNELS = 7938
};

/// Constant 'ENTERING_OR_LEAVING_TUNNELS'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__ENTERING_OR_LEAVING_TUNNELS = 7939
};

/// Constant 'ON_RAMPS'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__ON_RAMPS = 7940
};

/// Constant 'IN_ROAD_CONSTRUCTION_AREA'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__IN_ROAD_CONSTRUCTION_AREA = 7941
};

/// Constant 'AROUND_A_CURVE'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__AROUND_A_CURVE = 7942
};

/// Constant 'ON_CURVE'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__ON_CURVE = 8026
};

/// Constant 'ON_TRACKS'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__ON_TRACKS = 8009
};

/// Constant 'IN_STREET'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__IN_STREET = 8025
};

/// Constant 'SHOULDER'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__SHOULDER = 8027
};

/// Constant 'ON_MINOR_ROADS'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__ON_MINOR_ROADS = 7943
};

/// Constant 'ADJACENT_TO_ROADWAY'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__ADJACENT_TO_ROADWAY = 7945
};

/// Constant 'ACROSS_TRACKS'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__ACROSS_TRACKS = 8024
};

/// Constant 'ON_BEND'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__ON_BEND = 7946
};

/// Constant 'INTERSECTION'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__INTERSECTION = 8032
};

/// Constant 'ENTIRE_INTERSECTION'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__ENTIRE_INTERSECTION = 7947
};

/// Constant 'IN_THE_MEDIAN'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__IN_THE_MEDIAN = 7948
};

/// Constant 'MOVED_TO_SIDE_OF_ROAD'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__MOVED_TO_SIDE_OF_ROAD = 7949
};

/// Constant 'MOVED_TO_SHOULDER'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__MOVED_TO_SHOULDER = 7950
};

/// Constant 'ON_THE_ROADWAY'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__ON_THE_ROADWAY = 7951
};

/// Constant 'DIP'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__DIP = 8010
};

/// Constant 'TRAFFIC_CIRCLE'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__TRAFFIC_CIRCLE = 8011
};

/// Constant 'CROSSOVER'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__CROSSOVER = 8028
};

/// Constant 'CROSS_ROAD'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__CROSS_ROAD = 8029
};

/// Constant 'SIDE_ROAD'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__SIDE_ROAD = 8030
};

/// Constant 'TO'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__TO = 8014
};

/// Constant 'BY'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__BY = 8015
};

/// Constant 'THROUGH'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__THROUGH = 8016
};

/// Constant 'AREA_OF'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__AREA_OF = 8017
};

/// Constant 'UNDER'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__UNDER = 8018
};

/// Constant 'OVER'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__OVER = 8019
};

/// Constant 'FROM'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__FROM = 8020
};

/// Constant 'APPROACHING'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__APPROACHING = 8021
};

/// Constant 'ENTERING_AT'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__ENTERING_AT = 8022
};

/// Constant 'EXITING_AT'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__EXITING_AT = 8023
};

/// Constant 'IN_SHADED_AREAS'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__IN_SHADED_AREAS = 7952
};

/// Constant 'IN_LOW_LYING_AREAS'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__IN_LOW_LYING_AREAS = 7953
};

/// Constant 'IN_THE_DOWNTOWN_AREA'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__IN_THE_DOWNTOWN_AREA = 7954
};

/// Constant 'IN_THE_INNER_CITY_AREA'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__IN_THE_INNER_CITY_AREA = 7955
};

/// Constant 'IN_PARTS'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__IN_PARTS = 7956
};

/// Constant 'IN_SOME_PLACES'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__IN_SOME_PLACES = 7957
};

/// Constant 'IN_THE_DITCH'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__IN_THE_DITCH = 7958
};

/// Constant 'IN_THE_VALLEY'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__IN_THE_VALLEY = 7959
};

/// Constant 'ON_HILL_TOP'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__ON_HILL_TOP = 7960
};

/// Constant 'NEAR_THE_FOOTHILS'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__NEAR_THE_FOOTHILS = 7961
};

/// Constant 'AT_HIGH_ALTITUDES'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__AT_HIGH_ALTITUDES = 7962
};

/// Constant 'NEAR_THE_LAKE'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__NEAR_THE_LAKE = 7963
};

/// Constant 'NEAR_THE_SHORE'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__NEAR_THE_SHORE = 7964
};

/// Constant 'NEARBY_BASIN'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__NEARBY_BASIN = 8008
};

/// Constant 'OVER_THE_CREST_OF_A_HILL'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__OVER_THE_CREST_OF_A_HILL = 7965
};

/// Constant 'OTHER_THAN_ON_THE_ROADWAY'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__OTHER_THAN_ON_THE_ROADWAY = 7966
};

/// Constant 'NEAR_THE_BEACH'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__NEAR_THE_BEACH = 7967
};

/// Constant 'NEAR_BEACH_ACCESS_POINT'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__NEAR_BEACH_ACCESS_POINT = 7968
};

/// Constant 'MOUNTAIN_PASS'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__MOUNTAIN_PASS = 8006
};

/// Constant 'LOWER_LEVEL'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__LOWER_LEVEL = 7969
};

/// Constant 'UPPER_LEVEL'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__UPPER_LEVEL = 7970
};

/// Constant 'AIRPORT'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__AIRPORT = 7971
};

/// Constant 'CONCOURSE'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__CONCOURSE = 7972
};

/// Constant 'GATE'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__GATE = 7973
};

/// Constant 'BAGGAGE_CLAIM'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__BAGGAGE_CLAIM = 7974
};

/// Constant 'CUSTOMS_POINT'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__CUSTOMS_POINT = 7975
};

/// Constant 'RESERVATION_CENTER'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__RESERVATION_CENTER = 8007
};

/// Constant 'STATION'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__STATION = 7976
};

/// Constant 'PLATFORM'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__PLATFORM = 7977
};

/// Constant 'DOCK'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__DOCK = 7978
};

/// Constant 'DEPOT'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__DEPOT = 7979
};

/// Constant 'EV_CHARGING_POINT'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__EV_CHARGING_POINT = 7980
};

/// Constant 'INFORMATION_WELCOME_POINT'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__INFORMATION_WELCOME_POINT = 7981
};

/// Constant 'AT_REST_AREA'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__AT_REST_AREA = 7982
};

/// Constant 'AT_SERVICE_AREA'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__AT_SERVICE_AREA = 7983
};

/// Constant 'AT_WEIGH_STATION'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__AT_WEIGH_STATION = 7984
};

/// Constant 'ROADSIDE_PARK'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__ROADSIDE_PARK = 8003
};

/// Constant 'PICNIC_AREAS'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__PICNIC_AREAS = 7985
};

/// Constant 'REST_AREA'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__REST_AREA = 7986
};

/// Constant 'SERVICE_STATIONS'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__SERVICE_STATIONS = 7987
};

/// Constant 'TOILETS'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__TOILETS = 7988
};

/// Constant 'BUS_STOP'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__BUS_STOP = 8031
};

/// Constant 'PARK_AND_RIDE_LOT'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__PARK_AND_RIDE_LOT = 8012
};

/// Constant 'ON_THE_RIGHT'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__ON_THE_RIGHT = 7989
};

/// Constant 'ON_THE_LEFT'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__ON_THE_LEFT = 7990
};

/// Constant 'IN_THE_CENTER'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__IN_THE_CENTER = 7991
};

/// Constant 'IN_THE_OPPOSITE_DIRECTION'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__IN_THE_OPPOSITE_DIRECTION = 7992
};

/// Constant 'CROSS_TRAFFIC'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__CROSS_TRAFFIC = 7993
};

/// Constant 'NORTHBOUND_TRAFFIC'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__NORTHBOUND_TRAFFIC = 7994
};

/// Constant 'EASTBOUND_TRAFFIC'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__EASTBOUND_TRAFFIC = 7995
};

/// Constant 'SOUTHBOUND_TRAFFIC'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__SOUTHBOUND_TRAFFIC = 7996
};

/// Constant 'WESTBOUND_TRAFFIC'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__WESTBOUND_TRAFFIC = 7997
};

/// Constant 'NORTH'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__NORTH = 7998
};

/// Constant 'SOUTH'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__SOUTH = 7999
};

/// Constant 'EAST'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__EAST = 8000
};

/// Constant 'WEST'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__WEST = 8001
};

/// Constant 'NORTHEAST'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__NORTHEAST = 8002
};

/// Constant 'NORTHWEST'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__NORTHWEST = 8003
};

/// Constant 'SOUTHEAST'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__SOUTHEAST = 8004
};

/// Constant 'SOUTHWEST'.
enum
{
  j2735_v2x_msgs__msg__ITISGenericLocations__SOUTHWEST = 8005
};

/// Struct defined in msg/ITISGenericLocations in the package j2735_v2x_msgs.
/**
  * ITISGenericLocations.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__ITISGenericLocations
{
  uint16_t generic_locations;
} j2735_v2x_msgs__msg__ITISGenericLocations;

// Struct for a sequence of j2735_v2x_msgs__msg__ITISGenericLocations.
typedef struct j2735_v2x_msgs__msg__ITISGenericLocations__Sequence
{
  j2735_v2x_msgs__msg__ITISGenericLocations * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ITISGenericLocations__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ITIS_GENERIC_LOCATIONS__STRUCT_H_
