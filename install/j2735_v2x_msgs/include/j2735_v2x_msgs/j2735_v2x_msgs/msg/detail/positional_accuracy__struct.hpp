// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/PositionalAccuracy.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/positional_accuracy.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__PositionalAccuracy __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__PositionalAccuracy __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionalAccuracy_
{
  using Type = PositionalAccuracy_<ContainerAllocator>;

  explicit PositionalAccuracy_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->semi_major = 0;
      this->semi_minor = 0;
      this->orientation = 0;
    }
  }

  explicit PositionalAccuracy_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->semi_major = 0;
      this->semi_minor = 0;
      this->orientation = 0;
    }
  }

  // field types and members
  using _semi_major_type =
    uint8_t;
  _semi_major_type semi_major;
  using _semi_minor_type =
    uint8_t;
  _semi_minor_type semi_minor;
  using _orientation_type =
    uint16_t;
  _orientation_type orientation;

  // setters for named parameter idiom
  Type & set__semi_major(
    const uint8_t & _arg)
  {
    this->semi_major = _arg;
    return *this;
  }
  Type & set__semi_minor(
    const uint8_t & _arg)
  {
    this->semi_minor = _arg;
    return *this;
  }
  Type & set__orientation(
    const uint16_t & _arg)
  {
    this->orientation = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ACCURACY_UNAVAILABLE =
    255u;
  static constexpr uint8_t ACCURACY_MAX =
    254u;
  static constexpr uint8_t ACCURACY_MIN =
    0u;
  static constexpr uint16_t ACCURACY_ORIENTATION_UNAVAILABLE =
    65535u;
  static constexpr uint16_t ACCURACY_ORIENTATION_MAX =
    65534u;
  static constexpr uint16_t ACCURACY_ORIENTATION_MIN =
    0u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__PositionalAccuracy
    std::shared_ptr<j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__PositionalAccuracy
    std::shared_ptr<j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionalAccuracy_ & other) const
  {
    if (this->semi_major != other.semi_major) {
      return false;
    }
    if (this->semi_minor != other.semi_minor) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionalAccuracy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionalAccuracy_

// alias to use template instance with default allocator
using PositionalAccuracy =
  j2735_v2x_msgs::msg::PositionalAccuracy_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PositionalAccuracy_<ContainerAllocator>::ACCURACY_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PositionalAccuracy_<ContainerAllocator>::ACCURACY_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PositionalAccuracy_<ContainerAllocator>::ACCURACY_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PositionalAccuracy_<ContainerAllocator>::ACCURACY_ORIENTATION_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PositionalAccuracy_<ContainerAllocator>::ACCURACY_ORIENTATION_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PositionalAccuracy_<ContainerAllocator>::ACCURACY_ORIENTATION_MIN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__STRUCT_HPP_
