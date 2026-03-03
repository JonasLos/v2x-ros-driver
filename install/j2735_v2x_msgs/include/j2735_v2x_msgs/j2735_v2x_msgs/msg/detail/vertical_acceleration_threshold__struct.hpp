// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/VerticalAccelerationThreshold.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vertical_acceleration_threshold.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VERTICAL_ACCELERATION_THRESHOLD__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VERTICAL_ACCELERATION_THRESHOLD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__VerticalAccelerationThreshold __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__VerticalAccelerationThreshold __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VerticalAccelerationThreshold_
{
  using Type = VerticalAccelerationThreshold_<ContainerAllocator>;

  explicit VerticalAccelerationThreshold_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exceeded_wheels = 0;
    }
  }

  explicit VerticalAccelerationThreshold_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exceeded_wheels = 0;
    }
  }

  // field types and members
  using _exceeded_wheels_type =
    uint8_t;
  _exceeded_wheels_type exceeded_wheels;

  // setters for named parameter idiom
  Type & set__exceeded_wheels(
    const uint8_t & _arg)
  {
    this->exceeded_wheels = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NOT_EQUIPPED =
    0u;
  static constexpr uint8_t LEFT_FRONT =
    1u;
  static constexpr uint8_t LEFT_REAR =
    2u;
  static constexpr uint8_t RIGHT_FRONT =
    4u;
  static constexpr uint8_t RIGHT_REAR =
    8u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::VerticalAccelerationThreshold_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::VerticalAccelerationThreshold_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::VerticalAccelerationThreshold_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::VerticalAccelerationThreshold_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::VerticalAccelerationThreshold_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::VerticalAccelerationThreshold_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::VerticalAccelerationThreshold_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::VerticalAccelerationThreshold_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::VerticalAccelerationThreshold_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::VerticalAccelerationThreshold_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__VerticalAccelerationThreshold
    std::shared_ptr<j2735_v2x_msgs::msg::VerticalAccelerationThreshold_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__VerticalAccelerationThreshold
    std::shared_ptr<j2735_v2x_msgs::msg::VerticalAccelerationThreshold_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VerticalAccelerationThreshold_ & other) const
  {
    if (this->exceeded_wheels != other.exceeded_wheels) {
      return false;
    }
    return true;
  }
  bool operator!=(const VerticalAccelerationThreshold_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VerticalAccelerationThreshold_

// alias to use template instance with default allocator
using VerticalAccelerationThreshold =
  j2735_v2x_msgs::msg::VerticalAccelerationThreshold_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VerticalAccelerationThreshold_<ContainerAllocator>::NOT_EQUIPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VerticalAccelerationThreshold_<ContainerAllocator>::LEFT_FRONT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VerticalAccelerationThreshold_<ContainerAllocator>::LEFT_REAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VerticalAccelerationThreshold_<ContainerAllocator>::RIGHT_FRONT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VerticalAccelerationThreshold_<ContainerAllocator>::RIGHT_REAR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VERTICAL_ACCELERATION_THRESHOLD__STRUCT_HPP_
