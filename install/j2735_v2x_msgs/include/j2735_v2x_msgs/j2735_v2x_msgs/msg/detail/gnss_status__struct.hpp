// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/GNSSStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/gnss_status.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__GNSS_STATUS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__GNSS_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__GNSSStatus __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__GNSSStatus __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GNSSStatus_
{
  using Type = GNSSStatus_<ContainerAllocator>;

  explicit GNSSStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->statuses = 0;
    }
  }

  explicit GNSSStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->statuses = 0;
    }
  }

  // field types and members
  using _statuses_type =
    uint8_t;
  _statuses_type statuses;

  // setters for named parameter idiom
  Type & set__statuses(
    const uint8_t & _arg)
  {
    this->statuses = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t IS_HEALTHY =
    1u;
  static constexpr uint8_t IS_MONITORED =
    2u;
  static constexpr uint8_t BASE_STATION_TYPE =
    4u;
  static constexpr uint8_t APDOP_OF_UNDER_5 =
    8u;
  static constexpr uint8_t IN_VIEW_OF_UNDER_5 =
    16u;
  static constexpr uint8_t LOCAL_CORRECTIONS_PRESENT =
    32u;
  static constexpr uint8_t NETWORK_CORRECTIONS_PRESENT =
    64u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::GNSSStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::GNSSStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::GNSSStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::GNSSStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::GNSSStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::GNSSStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::GNSSStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::GNSSStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::GNSSStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::GNSSStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__GNSSStatus
    std::shared_ptr<j2735_v2x_msgs::msg::GNSSStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__GNSSStatus
    std::shared_ptr<j2735_v2x_msgs::msg::GNSSStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GNSSStatus_ & other) const
  {
    if (this->statuses != other.statuses) {
      return false;
    }
    return true;
  }
  bool operator!=(const GNSSStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GNSSStatus_

// alias to use template instance with default allocator
using GNSSStatus =
  j2735_v2x_msgs::msg::GNSSStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GNSSStatus_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GNSSStatus_<ContainerAllocator>::IS_HEALTHY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GNSSStatus_<ContainerAllocator>::IS_MONITORED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GNSSStatus_<ContainerAllocator>::BASE_STATION_TYPE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GNSSStatus_<ContainerAllocator>::APDOP_OF_UNDER_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GNSSStatus_<ContainerAllocator>::IN_VIEW_OF_UNDER_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GNSSStatus_<ContainerAllocator>::LOCAL_CORRECTIONS_PRESENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GNSSStatus_<ContainerAllocator>::NETWORK_CORRECTIONS_PRESENT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__GNSS_STATUS__STRUCT_HPP_
