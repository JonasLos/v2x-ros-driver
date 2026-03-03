// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlVehClass.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_veh_class.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_VEH_CLASS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_VEH_CLASS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TrafficControlVehClass __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TrafficControlVehClass __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficControlVehClass_
{
  using Type = TrafficControlVehClass_<ContainerAllocator>;

  explicit TrafficControlVehClass_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_class = 0;
    }
  }

  explicit TrafficControlVehClass_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_class = 0;
    }
  }

  // field types and members
  using _vehicle_class_type =
    uint8_t;
  _vehicle_class_type vehicle_class;

  // setters for named parameter idiom
  Type & set__vehicle_class(
    const uint8_t & _arg)
  {
    this->vehicle_class = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ANY =
    0u;
  static constexpr uint8_t PEDESTRIAN =
    1u;
  static constexpr uint8_t BICYCLE =
    2u;
  static constexpr uint8_t MICROMOBILE =
    3u;
  static constexpr uint8_t MOTORCYCLE =
    4u;
  static constexpr uint8_t PASSENGER_CAR =
    5u;
  static constexpr uint8_t LIGHT_TRUCK_VAN =
    6u;
  static constexpr uint8_t BUS =
    7u;
  static constexpr uint8_t TWO_AXLE_SIX_TIRE_SINGLE_UNIT_TRUCK =
    8u;
  static constexpr uint8_t THREE_AXLE_SINGLE_UNIT_TRUCK =
    9u;
  static constexpr uint8_t FOUR_OR_MORE_AXLE_SINGLE_UNIT_TRUCK =
    10u;
  static constexpr uint8_t FOUR_OR_FEWER_AXLE_SINGLE_TRAILER_TRUCK =
    11u;
  static constexpr uint8_t FIVE_AXLE_SINGLE_TRAILER_TRUCK =
    12u;
  static constexpr uint8_t SIX_OR_MORE_AXLE_SINGLE_TRAILER_TRUCK =
    13u;
  static constexpr uint8_t FIVE_OR_FEWER_AXLE_MULTI_TRAILER_TRUCK =
    14u;
  static constexpr uint8_t SIX_AXLE_MULTI_TRAILER_TRUCK =
    15u;
  static constexpr uint8_t SEVEN_OR_MORE_AXLE_MULTI_TRAILER_TRUCK =
    16u;
  static constexpr uint8_t RAIL =
    17u;
  static constexpr uint8_t UNCLASSIFIED =
    18u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TrafficControlVehClass_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TrafficControlVehClass_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlVehClass_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlVehClass_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrafficControlVehClass_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrafficControlVehClass_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrafficControlVehClass_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrafficControlVehClass_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrafficControlVehClass_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrafficControlVehClass_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrafficControlVehClass
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlVehClass_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrafficControlVehClass
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlVehClass_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficControlVehClass_ & other) const
  {
    if (this->vehicle_class != other.vehicle_class) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficControlVehClass_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficControlVehClass_

// alias to use template instance with default allocator
using TrafficControlVehClass =
  j2735_v2x_msgs::msg::TrafficControlVehClass_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlVehClass_<ContainerAllocator>::ANY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlVehClass_<ContainerAllocator>::PEDESTRIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlVehClass_<ContainerAllocator>::BICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlVehClass_<ContainerAllocator>::MICROMOBILE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlVehClass_<ContainerAllocator>::MOTORCYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlVehClass_<ContainerAllocator>::PASSENGER_CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlVehClass_<ContainerAllocator>::LIGHT_TRUCK_VAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlVehClass_<ContainerAllocator>::BUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlVehClass_<ContainerAllocator>::TWO_AXLE_SIX_TIRE_SINGLE_UNIT_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlVehClass_<ContainerAllocator>::THREE_AXLE_SINGLE_UNIT_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlVehClass_<ContainerAllocator>::FOUR_OR_MORE_AXLE_SINGLE_UNIT_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlVehClass_<ContainerAllocator>::FOUR_OR_FEWER_AXLE_SINGLE_TRAILER_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlVehClass_<ContainerAllocator>::FIVE_AXLE_SINGLE_TRAILER_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlVehClass_<ContainerAllocator>::SIX_OR_MORE_AXLE_SINGLE_TRAILER_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlVehClass_<ContainerAllocator>::FIVE_OR_FEWER_AXLE_MULTI_TRAILER_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlVehClass_<ContainerAllocator>::SIX_AXLE_MULTI_TRAILER_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlVehClass_<ContainerAllocator>::SEVEN_OR_MORE_AXLE_MULTI_TRAILER_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlVehClass_<ContainerAllocator>::RAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlVehClass_<ContainerAllocator>::UNCLASSIFIED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_VEH_CLASS__STRUCT_HPP_
