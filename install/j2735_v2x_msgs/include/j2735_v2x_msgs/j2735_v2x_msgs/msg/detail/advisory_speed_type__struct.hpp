// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/AdvisorySpeedType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/advisory_speed_type.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED_TYPE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__AdvisorySpeedType __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__AdvisorySpeedType __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AdvisorySpeedType_
{
  using Type = AdvisorySpeedType_<ContainerAllocator>;

  explicit AdvisorySpeedType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->advisory_speed_type = 0;
    }
  }

  explicit AdvisorySpeedType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->advisory_speed_type = 0;
    }
  }

  // field types and members
  using _advisory_speed_type_type =
    uint8_t;
  _advisory_speed_type_type advisory_speed_type;

  // setters for named parameter idiom
  Type & set__advisory_speed_type(
    const uint8_t & _arg)
  {
    this->advisory_speed_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t GREENWAVE =
    1u;
  static constexpr uint8_t ECODRIVE =
    2u;
  static constexpr uint8_t TRANSIT =
    3u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::AdvisorySpeedType_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::AdvisorySpeedType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AdvisorySpeedType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AdvisorySpeedType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AdvisorySpeedType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AdvisorySpeedType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AdvisorySpeedType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AdvisorySpeedType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AdvisorySpeedType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AdvisorySpeedType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__AdvisorySpeedType
    std::shared_ptr<j2735_v2x_msgs::msg::AdvisorySpeedType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__AdvisorySpeedType
    std::shared_ptr<j2735_v2x_msgs::msg::AdvisorySpeedType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AdvisorySpeedType_ & other) const
  {
    if (this->advisory_speed_type != other.advisory_speed_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const AdvisorySpeedType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AdvisorySpeedType_

// alias to use template instance with default allocator
using AdvisorySpeedType =
  j2735_v2x_msgs::msg::AdvisorySpeedType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AdvisorySpeedType_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AdvisorySpeedType_<ContainerAllocator>::GREENWAVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AdvisorySpeedType_<ContainerAllocator>::ECODRIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AdvisorySpeedType_<ContainerAllocator>::TRANSIT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED_TYPE__STRUCT_HPP_
