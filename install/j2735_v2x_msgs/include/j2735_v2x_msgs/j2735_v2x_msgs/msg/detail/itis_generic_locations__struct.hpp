// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/ITISGenericLocations.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/itis_generic_locations.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ITIS_GENERIC_LOCATIONS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ITIS_GENERIC_LOCATIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__ITISGenericLocations __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__ITISGenericLocations __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ITISGenericLocations_
{
  using Type = ITISGenericLocations_<ContainerAllocator>;

  explicit ITISGenericLocations_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->generic_locations = 0;
    }
  }

  explicit ITISGenericLocations_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->generic_locations = 0;
    }
  }

  // field types and members
  using _generic_locations_type =
    uint16_t;
  _generic_locations_type generic_locations;

  // setters for named parameter idiom
  Type & set__generic_locations(
    const uint16_t & _arg)
  {
    this->generic_locations = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t ON_BRIDGES =
    7937u;
  static constexpr uint16_t IN_TUNNELS =
    7938u;
  static constexpr uint16_t ENTERING_OR_LEAVING_TUNNELS =
    7939u;
  static constexpr uint16_t ON_RAMPS =
    7940u;
  static constexpr uint16_t IN_ROAD_CONSTRUCTION_AREA =
    7941u;
  static constexpr uint16_t AROUND_A_CURVE =
    7942u;
  static constexpr uint16_t ON_CURVE =
    8026u;
  static constexpr uint16_t ON_TRACKS =
    8009u;
  static constexpr uint16_t IN_STREET =
    8025u;
  static constexpr uint16_t SHOULDER =
    8027u;
  static constexpr uint16_t ON_MINOR_ROADS =
    7943u;
  static constexpr uint16_t ADJACENT_TO_ROADWAY =
    7945u;
  static constexpr uint16_t ACROSS_TRACKS =
    8024u;
  static constexpr uint16_t ON_BEND =
    7946u;
  static constexpr uint16_t INTERSECTION =
    8032u;
  static constexpr uint16_t ENTIRE_INTERSECTION =
    7947u;
  static constexpr uint16_t IN_THE_MEDIAN =
    7948u;
  static constexpr uint16_t MOVED_TO_SIDE_OF_ROAD =
    7949u;
  static constexpr uint16_t MOVED_TO_SHOULDER =
    7950u;
  static constexpr uint16_t ON_THE_ROADWAY =
    7951u;
  static constexpr uint16_t DIP =
    8010u;
  static constexpr uint16_t TRAFFIC_CIRCLE =
    8011u;
  static constexpr uint16_t CROSSOVER =
    8028u;
  static constexpr uint16_t CROSS_ROAD =
    8029u;
  static constexpr uint16_t SIDE_ROAD =
    8030u;
  static constexpr uint16_t TO =
    8014u;
  static constexpr uint16_t BY =
    8015u;
  static constexpr uint16_t THROUGH =
    8016u;
  static constexpr uint16_t AREA_OF =
    8017u;
  static constexpr uint16_t UNDER =
    8018u;
  static constexpr uint16_t OVER =
    8019u;
  static constexpr uint16_t FROM =
    8020u;
  static constexpr uint16_t APPROACHING =
    8021u;
  static constexpr uint16_t ENTERING_AT =
    8022u;
  static constexpr uint16_t EXITING_AT =
    8023u;
  static constexpr uint16_t IN_SHADED_AREAS =
    7952u;
  static constexpr uint16_t IN_LOW_LYING_AREAS =
    7953u;
  static constexpr uint16_t IN_THE_DOWNTOWN_AREA =
    7954u;
  static constexpr uint16_t IN_THE_INNER_CITY_AREA =
    7955u;
  static constexpr uint16_t IN_PARTS =
    7956u;
  static constexpr uint16_t IN_SOME_PLACES =
    7957u;
  static constexpr uint16_t IN_THE_DITCH =
    7958u;
  static constexpr uint16_t IN_THE_VALLEY =
    7959u;
  static constexpr uint16_t ON_HILL_TOP =
    7960u;
  static constexpr uint16_t NEAR_THE_FOOTHILS =
    7961u;
  static constexpr uint16_t AT_HIGH_ALTITUDES =
    7962u;
  static constexpr uint16_t NEAR_THE_LAKE =
    7963u;
  static constexpr uint16_t NEAR_THE_SHORE =
    7964u;
  static constexpr uint16_t NEARBY_BASIN =
    8008u;
  static constexpr uint16_t OVER_THE_CREST_OF_A_HILL =
    7965u;
  static constexpr uint16_t OTHER_THAN_ON_THE_ROADWAY =
    7966u;
  static constexpr uint16_t NEAR_THE_BEACH =
    7967u;
  static constexpr uint16_t NEAR_BEACH_ACCESS_POINT =
    7968u;
  static constexpr uint16_t MOUNTAIN_PASS =
    8006u;
  static constexpr uint16_t LOWER_LEVEL =
    7969u;
  static constexpr uint16_t UPPER_LEVEL =
    7970u;
  static constexpr uint16_t AIRPORT =
    7971u;
  static constexpr uint16_t CONCOURSE =
    7972u;
  static constexpr uint16_t GATE =
    7973u;
  static constexpr uint16_t BAGGAGE_CLAIM =
    7974u;
  static constexpr uint16_t CUSTOMS_POINT =
    7975u;
  static constexpr uint16_t RESERVATION_CENTER =
    8007u;
  static constexpr uint16_t STATION =
    7976u;
  static constexpr uint16_t PLATFORM =
    7977u;
  static constexpr uint16_t DOCK =
    7978u;
  static constexpr uint16_t DEPOT =
    7979u;
  static constexpr uint16_t EV_CHARGING_POINT =
    7980u;
  static constexpr uint16_t INFORMATION_WELCOME_POINT =
    7981u;
  static constexpr uint16_t AT_REST_AREA =
    7982u;
  static constexpr uint16_t AT_SERVICE_AREA =
    7983u;
  static constexpr uint16_t AT_WEIGH_STATION =
    7984u;
  static constexpr uint16_t ROADSIDE_PARK =
    8003u;
  static constexpr uint16_t PICNIC_AREAS =
    7985u;
  static constexpr uint16_t REST_AREA =
    7986u;
  static constexpr uint16_t SERVICE_STATIONS =
    7987u;
  static constexpr uint16_t TOILETS =
    7988u;
  static constexpr uint16_t BUS_STOP =
    8031u;
  static constexpr uint16_t PARK_AND_RIDE_LOT =
    8012u;
  static constexpr uint16_t ON_THE_RIGHT =
    7989u;
  static constexpr uint16_t ON_THE_LEFT =
    7990u;
  static constexpr uint16_t IN_THE_CENTER =
    7991u;
  static constexpr uint16_t IN_THE_OPPOSITE_DIRECTION =
    7992u;
  static constexpr uint16_t CROSS_TRAFFIC =
    7993u;
  static constexpr uint16_t NORTHBOUND_TRAFFIC =
    7994u;
  static constexpr uint16_t EASTBOUND_TRAFFIC =
    7995u;
  static constexpr uint16_t SOUTHBOUND_TRAFFIC =
    7996u;
  static constexpr uint16_t WESTBOUND_TRAFFIC =
    7997u;
  static constexpr uint16_t NORTH =
    7998u;
  static constexpr uint16_t SOUTH =
    7999u;
  static constexpr uint16_t EAST =
    8000u;
  static constexpr uint16_t WEST =
    8001u;
  static constexpr uint16_t NORTHEAST =
    8002u;
  static constexpr uint16_t NORTHWEST =
    8003u;
  static constexpr uint16_t SOUTHEAST =
    8004u;
  static constexpr uint16_t SOUTHWEST =
    8005u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::ITISGenericLocations_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::ITISGenericLocations_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ITISGenericLocations_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ITISGenericLocations_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ITISGenericLocations_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ITISGenericLocations_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ITISGenericLocations_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ITISGenericLocations_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ITISGenericLocations_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ITISGenericLocations_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__ITISGenericLocations
    std::shared_ptr<j2735_v2x_msgs::msg::ITISGenericLocations_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__ITISGenericLocations
    std::shared_ptr<j2735_v2x_msgs::msg::ITISGenericLocations_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ITISGenericLocations_ & other) const
  {
    if (this->generic_locations != other.generic_locations) {
      return false;
    }
    return true;
  }
  bool operator!=(const ITISGenericLocations_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ITISGenericLocations_

// alias to use template instance with default allocator
using ITISGenericLocations =
  j2735_v2x_msgs::msg::ITISGenericLocations_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::ON_BRIDGES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::IN_TUNNELS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::ENTERING_OR_LEAVING_TUNNELS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::ON_RAMPS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::IN_ROAD_CONSTRUCTION_AREA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::AROUND_A_CURVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::ON_CURVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::ON_TRACKS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::IN_STREET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::SHOULDER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::ON_MINOR_ROADS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::ADJACENT_TO_ROADWAY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::ACROSS_TRACKS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::ON_BEND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::INTERSECTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::ENTIRE_INTERSECTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::IN_THE_MEDIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::MOVED_TO_SIDE_OF_ROAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::MOVED_TO_SHOULDER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::ON_THE_ROADWAY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::DIP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::TRAFFIC_CIRCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::CROSSOVER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::CROSS_ROAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::SIDE_ROAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::TO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::BY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::THROUGH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::AREA_OF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::UNDER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::OVER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::FROM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::APPROACHING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::ENTERING_AT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::EXITING_AT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::IN_SHADED_AREAS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::IN_LOW_LYING_AREAS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::IN_THE_DOWNTOWN_AREA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::IN_THE_INNER_CITY_AREA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::IN_PARTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::IN_SOME_PLACES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::IN_THE_DITCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::IN_THE_VALLEY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::ON_HILL_TOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::NEAR_THE_FOOTHILS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::AT_HIGH_ALTITUDES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::NEAR_THE_LAKE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::NEAR_THE_SHORE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::NEARBY_BASIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::OVER_THE_CREST_OF_A_HILL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::OTHER_THAN_ON_THE_ROADWAY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::NEAR_THE_BEACH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::NEAR_BEACH_ACCESS_POINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::MOUNTAIN_PASS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::LOWER_LEVEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::UPPER_LEVEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::AIRPORT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::CONCOURSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::GATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::BAGGAGE_CLAIM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::CUSTOMS_POINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::RESERVATION_CENTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::STATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::PLATFORM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::DOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::DEPOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::EV_CHARGING_POINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::INFORMATION_WELCOME_POINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::AT_REST_AREA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::AT_SERVICE_AREA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::AT_WEIGH_STATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::ROADSIDE_PARK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::PICNIC_AREAS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::REST_AREA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::SERVICE_STATIONS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::TOILETS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::BUS_STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::PARK_AND_RIDE_LOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::ON_THE_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::ON_THE_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::IN_THE_CENTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::IN_THE_OPPOSITE_DIRECTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::CROSS_TRAFFIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::NORTHBOUND_TRAFFIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::EASTBOUND_TRAFFIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::SOUTHBOUND_TRAFFIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::WESTBOUND_TRAFFIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::NORTH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::SOUTH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::EAST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::WEST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::NORTHEAST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::NORTHWEST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::SOUTHEAST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISGenericLocations_<ContainerAllocator>::SOUTHWEST;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ITIS_GENERIC_LOCATIONS__STRUCT_HPP_
