// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/LaneAttributesVehicle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_attributes_vehicle.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_VEHICLE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_VEHICLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__LaneAttributesVehicle __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__LaneAttributesVehicle __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneAttributesVehicle_
{
  using Type = LaneAttributesVehicle_<ContainerAllocator>;

  explicit LaneAttributesVehicle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_attributes_vehicle = 0;
    }
  }

  explicit LaneAttributesVehicle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_attributes_vehicle = 0;
    }
  }

  // field types and members
  using _lane_attributes_vehicle_type =
    uint8_t;
  _lane_attributes_vehicle_type lane_attributes_vehicle;

  // setters for named parameter idiom
  Type & set__lane_attributes_vehicle(
    const uint8_t & _arg)
  {
    this->lane_attributes_vehicle = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ISVEHICLEREVOCABLELANE =
    0u;
  static constexpr uint8_t ISVEHICLEFLYOVERLANE =
    1u;
  static constexpr uint8_t HOVLANEUSEONLY =
    2u;
  static constexpr uint8_t RESTRICTEDTOBUSUSE =
    3u;
  static constexpr uint8_t RESTRICTEDTOTAXIUSE =
    4u;
  static constexpr uint8_t RESTRICTEDFROMPUBLICUSE =
    5u;
  static constexpr uint8_t HASIRBEACONCOVERAGE =
    6u;
  static constexpr uint8_t PERMISSIONONREQUEST =
    7u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::LaneAttributesVehicle_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::LaneAttributesVehicle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::LaneAttributesVehicle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::LaneAttributesVehicle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::LaneAttributesVehicle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::LaneAttributesVehicle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::LaneAttributesVehicle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::LaneAttributesVehicle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::LaneAttributesVehicle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::LaneAttributesVehicle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__LaneAttributesVehicle
    std::shared_ptr<j2735_v2x_msgs::msg::LaneAttributesVehicle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__LaneAttributesVehicle
    std::shared_ptr<j2735_v2x_msgs::msg::LaneAttributesVehicle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneAttributesVehicle_ & other) const
  {
    if (this->lane_attributes_vehicle != other.lane_attributes_vehicle) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneAttributesVehicle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneAttributesVehicle_

// alias to use template instance with default allocator
using LaneAttributesVehicle =
  j2735_v2x_msgs::msg::LaneAttributesVehicle_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAttributesVehicle_<ContainerAllocator>::ISVEHICLEREVOCABLELANE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAttributesVehicle_<ContainerAllocator>::ISVEHICLEFLYOVERLANE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAttributesVehicle_<ContainerAllocator>::HOVLANEUSEONLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAttributesVehicle_<ContainerAllocator>::RESTRICTEDTOBUSUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAttributesVehicle_<ContainerAllocator>::RESTRICTEDTOTAXIUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAttributesVehicle_<ContainerAllocator>::RESTRICTEDFROMPUBLICUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAttributesVehicle_<ContainerAllocator>::HASIRBEACONCOVERAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAttributesVehicle_<ContainerAllocator>::PERMISSIONONREQUEST;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_VEHICLE__STRUCT_HPP_
