// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/PublicSafetyDirectingTrafficSubType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/public_safety_directing_traffic_sub_type.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_DIRECTING_TRAFFIC_SUB_TYPE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_DIRECTING_TRAFFIC_SUB_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PublicSafetyDirectingTrafficSubType_
{
  using Type = PublicSafetyDirectingTrafficSubType_<ContainerAllocator>;

  explicit PublicSafetyDirectingTrafficSubType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sub_types = 0;
    }
  }

  explicit PublicSafetyDirectingTrafficSubType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sub_types = 0;
    }
  }

  // field types and members
  using _sub_types_type =
    uint8_t;
  _sub_types_type sub_types;

  // setters for named parameter idiom
  Type & set__sub_types(
    const uint8_t & _arg)
  {
    this->sub_types = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t POLICE_AND_TRAFFIC_OFFICERS =
    1u;
  static constexpr uint8_t TRAFFIC_CONTROL_PERSONS =
    2u;
  static constexpr uint8_t RAILROAD_CROSSING_GURADS =
    4u;
  static constexpr uint8_t CIVIL_DEFENSE_NATIONAL_GUARD_MILITARY_POLICE =
    8u;
  static constexpr uint8_t EMERGENCY_ORGANIZATION_PERSONNEL =
    16u;
  static constexpr uint8_t HIGHWAY_SERVICE_VEHICLE_PERSONNEL =
    32u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType
    std::shared_ptr<j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType
    std::shared_ptr<j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PublicSafetyDirectingTrafficSubType_ & other) const
  {
    if (this->sub_types != other.sub_types) {
      return false;
    }
    return true;
  }
  bool operator!=(const PublicSafetyDirectingTrafficSubType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PublicSafetyDirectingTrafficSubType_

// alias to use template instance with default allocator
using PublicSafetyDirectingTrafficSubType =
  j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyDirectingTrafficSubType_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyDirectingTrafficSubType_<ContainerAllocator>::POLICE_AND_TRAFFIC_OFFICERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyDirectingTrafficSubType_<ContainerAllocator>::TRAFFIC_CONTROL_PERSONS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyDirectingTrafficSubType_<ContainerAllocator>::RAILROAD_CROSSING_GURADS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyDirectingTrafficSubType_<ContainerAllocator>::CIVIL_DEFENSE_NATIONAL_GUARD_MILITARY_POLICE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyDirectingTrafficSubType_<ContainerAllocator>::EMERGENCY_ORGANIZATION_PERSONNEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyDirectingTrafficSubType_<ContainerAllocator>::HIGHWAY_SERVICE_VEHICLE_PERSONNEL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_DIRECTING_TRAFFIC_SUB_TYPE__STRUCT_HPP_
