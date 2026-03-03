// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/Velocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/velocity.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VELOCITY__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__Velocity __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__Velocity __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Velocity_
{
  using Type = Velocity_<ContainerAllocator>;

  explicit Velocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0;
    }
  }

  explicit Velocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0;
    }
  }

  // field types and members
  using _velocity_type =
    uint16_t;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__velocity(
    const uint16_t & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t MIN =
    0u;
  static constexpr uint16_t MAX =
    8190u;
  static constexpr uint16_t UNAVAILABLE =
    8191u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::Velocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::Velocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::Velocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::Velocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::Velocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::Velocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::Velocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::Velocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::Velocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::Velocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__Velocity
    std::shared_ptr<j2735_v2x_msgs::msg::Velocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__Velocity
    std::shared_ptr<j2735_v2x_msgs::msg::Velocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Velocity_ & other) const
  {
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Velocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Velocity_

// alias to use template instance with default allocator
using Velocity =
  j2735_v2x_msgs::msg::Velocity_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Velocity_<ContainerAllocator>::MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Velocity_<ContainerAllocator>::MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Velocity_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VELOCITY__STRUCT_HPP_
