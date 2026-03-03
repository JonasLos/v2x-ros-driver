// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/ThrottleConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/throttle_confidence.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__THROTTLE_CONFIDENCE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__THROTTLE_CONFIDENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__ThrottleConfidence __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__ThrottleConfidence __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ThrottleConfidence_
{
  using Type = ThrottleConfidence_<ContainerAllocator>;

  explicit ThrottleConfidence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0;
    }
  }

  explicit ThrottleConfidence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0;
    }
  }

  // field types and members
  using _confidence_type =
    uint8_t;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__confidence(
    const uint8_t & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t PREC_10_PERCENT =
    1u;
  static constexpr uint8_t PREC_1_PERCENT =
    2u;
  static constexpr uint8_t PREC_05_PERCENT =
    3u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::ThrottleConfidence_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::ThrottleConfidence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ThrottleConfidence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ThrottleConfidence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ThrottleConfidence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ThrottleConfidence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ThrottleConfidence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ThrottleConfidence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ThrottleConfidence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ThrottleConfidence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__ThrottleConfidence
    std::shared_ptr<j2735_v2x_msgs::msg::ThrottleConfidence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__ThrottleConfidence
    std::shared_ptr<j2735_v2x_msgs::msg::ThrottleConfidence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ThrottleConfidence_ & other) const
  {
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const ThrottleConfidence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ThrottleConfidence_

// alias to use template instance with default allocator
using ThrottleConfidence =
  j2735_v2x_msgs::msg::ThrottleConfidence_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ThrottleConfidence_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ThrottleConfidence_<ContainerAllocator>::PREC_10_PERCENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ThrottleConfidence_<ContainerAllocator>::PREC_1_PERCENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ThrottleConfidence_<ContainerAllocator>::PREC_05_PERCENT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__THROTTLE_CONFIDENCE__STRUCT_HPP_
