// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/BasicVehicleClass.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/basic_vehicle_class.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_CLASS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_CLASS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__BasicVehicleClass __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__BasicVehicleClass __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BasicVehicleClass_
{
  using Type = BasicVehicleClass_<ContainerAllocator>;

  explicit BasicVehicleClass_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->basic_vehicle_class = 0;
    }
  }

  explicit BasicVehicleClass_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->basic_vehicle_class = 0;
    }
  }

  // field types and members
  using _basic_vehicle_class_type =
    uint8_t;
  _basic_vehicle_class_type basic_vehicle_class;

  // setters for named parameter idiom
  Type & set__basic_vehicle_class(
    const uint8_t & _arg)
  {
    this->basic_vehicle_class = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN_VEHICLE_CLASS =
    0u;
  static constexpr uint8_t SPECIAL_VEHICLE_CLASS =
    1u;
  static constexpr uint8_t PASSENGER_VEHICLE_TYPE_UNKNOWN =
    10u;
  static constexpr uint8_t PASSENGER_VEHICLE_TYPE_OTHER =
    11u;
  static constexpr uint8_t LIGHT_TRUCK_VEHICLE_TYPE_UNKNOWN =
    20u;
  static constexpr uint8_t LIGHT_TRUCK_VEHICLE_TYPE_OTHER =
    21u;
  static constexpr uint8_t TRUCK_VEHICLE_TYPE_UNKNOWN =
    25u;
  static constexpr uint8_t TRUCK_VEHICLE_TYPE_OTHER =
    26u;
  static constexpr uint8_t TRUCK_AXLE_COUNT_2 =
    27u;
  static constexpr uint8_t TRUCK_AXLE_COUNT_3 =
    28u;
  static constexpr uint8_t TRUCK_AXLE_COUNT_4 =
    29u;
  static constexpr uint8_t TRUCK_AXLE_COUNT_4_TRAILER =
    30u;
  static constexpr uint8_t TRUCK_AXLE_COUNT_5_TRAILER =
    31u;
  static constexpr uint8_t TRUCK_AXLE_COUNT_6_TRAILER =
    32u;
  static constexpr uint8_t TRUCK_AXLE_COUNT_5_MULTI_TRAILER =
    33u;
  static constexpr uint8_t TRUCK_AXLE_COUNT_6_MULTI_TRAILER =
    34u;
  static constexpr uint8_t TRUCK_AXLE_COUNT_7_MULTI_TRAILER =
    35u;
  static constexpr uint8_t MOTORCYCLE_TYPE_UNKNOWN =
    40u;
  static constexpr uint8_t MOTORCYCLE_TYPE_OTHER =
    41u;
  static constexpr uint8_t MOTORCYCLE_CRUISER_STANDARD =
    42u;
  static constexpr uint8_t MOTORCYCLE_SPORT_UNCLAD =
    43u;
  static constexpr uint8_t MOTORCYCLE_SPORT_TOURING =
    44u;
  static constexpr uint8_t MOTORCYCLE_SUPORT_SPORT =
    45u;
  static constexpr uint8_t MOTORCYCLE_TOURING =
    46u;
  static constexpr uint8_t MOTORCYCLE_TRIKE =
    47u;
  static constexpr uint8_t MOTORCYCLE_WITH_PASSENGERS =
    48u;
  static constexpr uint8_t TRANSIT_TYPE_UNKNOWN =
    50u;
  static constexpr uint8_t TRANSIT_TYPE_OTHER =
    51u;
  static constexpr uint8_t TRANSIT_BRT =
    52u;
  static constexpr uint8_t TRANSIT_EXPRESS_BUS =
    53u;
  static constexpr uint8_t TRANSIT_LOCAL_BUS =
    54u;
  static constexpr uint8_t TRANSIT_SCHOOL_BUS =
    55u;
  static constexpr uint8_t TRANSIT_FIXED_GUIDEWAY =
    56u;
  static constexpr uint8_t TRANSIT_PARATRANSIT =
    57u;
  static constexpr uint8_t TRANSIT_PARATRANSIT_AMBULANCE =
    58u;
  static constexpr uint8_t EMERGENCY_TYPE_UNKNOWN =
    60u;
  static constexpr uint8_t EMERGENCY_TYPE_OTHER =
    61u;
  static constexpr uint8_t EMERGENCY_FIRE_LIGHT_VEHICLE =
    62u;
  static constexpr uint8_t EMERGENCY_FIRE_HEAVY_VEHICLE =
    63u;
  static constexpr uint8_t EMERGENCY_FIRE_PARAMEDIC_VEHICLE =
    64u;
  static constexpr uint8_t EMERGENCY_FIRE_AMBULANCE_VEHICLE =
    65u;
  static constexpr uint8_t EMERGENCY_POLICE_LIGHT_VEHICLE =
    66u;
  static constexpr uint8_t EMERGENCY_POLICE_HEAVY_VEHICLE =
    67u;
  static constexpr uint8_t EMERGENCY_OTHER_RESPONDER =
    68u;
  static constexpr uint8_t EMERGENCY_OTHER_AMBULANCE =
    69u;
  static constexpr uint8_t OTHER_TRAVELER_TYPE_UNKNOWN =
    80u;
  static constexpr uint8_t OTHER_TRAVELER_TYPE_OTHER =
    81u;
  static constexpr uint8_t OTHER_TRAVELER_PEDESTRIAN =
    82u;
  static constexpr uint8_t OTHER_TRAVELER_VISUALLY_DISABLED =
    83u;
  static constexpr uint8_t OTHER_TRAVELER_PHYSICALLY_DISABLED =
    84u;
  static constexpr uint8_t OTHER_TRAVELER_BICYCLE =
    85u;
  static constexpr uint8_t OTHER_TRAVELER_VULNERABLE_ROADWORKER =
    86u;
  static constexpr uint8_t INFRASTRUCTURE_TYPE_UNKNOWN =
    90u;
  static constexpr uint8_t INFRASTRUCTURE_FIXED =
    91u;
  static constexpr uint8_t INFRASTRUCTURE_MOVABLE =
    92u;
  static constexpr uint8_t INFRASTRUCTURE_CARGO_TRAILER =
    93u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::BasicVehicleClass_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::BasicVehicleClass_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::BasicVehicleClass_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::BasicVehicleClass_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::BasicVehicleClass_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::BasicVehicleClass_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::BasicVehicleClass_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::BasicVehicleClass_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::BasicVehicleClass_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::BasicVehicleClass_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__BasicVehicleClass
    std::shared_ptr<j2735_v2x_msgs::msg::BasicVehicleClass_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__BasicVehicleClass
    std::shared_ptr<j2735_v2x_msgs::msg::BasicVehicleClass_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BasicVehicleClass_ & other) const
  {
    if (this->basic_vehicle_class != other.basic_vehicle_class) {
      return false;
    }
    return true;
  }
  bool operator!=(const BasicVehicleClass_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BasicVehicleClass_

// alias to use template instance with default allocator
using BasicVehicleClass =
  j2735_v2x_msgs::msg::BasicVehicleClass_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::UNKNOWN_VEHICLE_CLASS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::SPECIAL_VEHICLE_CLASS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::PASSENGER_VEHICLE_TYPE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::PASSENGER_VEHICLE_TYPE_OTHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::LIGHT_TRUCK_VEHICLE_TYPE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::LIGHT_TRUCK_VEHICLE_TYPE_OTHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRUCK_VEHICLE_TYPE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRUCK_VEHICLE_TYPE_OTHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRUCK_AXLE_COUNT_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRUCK_AXLE_COUNT_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRUCK_AXLE_COUNT_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRUCK_AXLE_COUNT_4_TRAILER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRUCK_AXLE_COUNT_5_TRAILER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRUCK_AXLE_COUNT_6_TRAILER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRUCK_AXLE_COUNT_5_MULTI_TRAILER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRUCK_AXLE_COUNT_6_MULTI_TRAILER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRUCK_AXLE_COUNT_7_MULTI_TRAILER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::MOTORCYCLE_TYPE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::MOTORCYCLE_TYPE_OTHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::MOTORCYCLE_CRUISER_STANDARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::MOTORCYCLE_SPORT_UNCLAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::MOTORCYCLE_SPORT_TOURING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::MOTORCYCLE_SUPORT_SPORT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::MOTORCYCLE_TOURING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::MOTORCYCLE_TRIKE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::MOTORCYCLE_WITH_PASSENGERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRANSIT_TYPE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRANSIT_TYPE_OTHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRANSIT_BRT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRANSIT_EXPRESS_BUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRANSIT_LOCAL_BUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRANSIT_SCHOOL_BUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRANSIT_FIXED_GUIDEWAY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRANSIT_PARATRANSIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::TRANSIT_PARATRANSIT_AMBULANCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::EMERGENCY_TYPE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::EMERGENCY_TYPE_OTHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::EMERGENCY_FIRE_LIGHT_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::EMERGENCY_FIRE_HEAVY_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::EMERGENCY_FIRE_PARAMEDIC_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::EMERGENCY_FIRE_AMBULANCE_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::EMERGENCY_POLICE_LIGHT_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::EMERGENCY_POLICE_HEAVY_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::EMERGENCY_OTHER_RESPONDER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::EMERGENCY_OTHER_AMBULANCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::OTHER_TRAVELER_TYPE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::OTHER_TRAVELER_TYPE_OTHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::OTHER_TRAVELER_PEDESTRIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::OTHER_TRAVELER_VISUALLY_DISABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::OTHER_TRAVELER_PHYSICALLY_DISABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::OTHER_TRAVELER_BICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::OTHER_TRAVELER_VULNERABLE_ROADWORKER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::INFRASTRUCTURE_TYPE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::INFRASTRUCTURE_FIXED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::INFRASTRUCTURE_MOVABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleClass_<ContainerAllocator>::INFRASTRUCTURE_CARGO_TRAILER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_CLASS__STRUCT_HPP_
