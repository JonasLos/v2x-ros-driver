// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/Elevation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/elevation.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ELEVATION__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ELEVATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__Elevation __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__Elevation __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Elevation_
{
  using Type = Elevation_<ContainerAllocator>;

  explicit Elevation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->elevation = 0l;
    }
  }

  explicit Elevation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->elevation = 0l;
    }
  }

  // field types and members
  using _elevation_type =
    int32_t;
  _elevation_type elevation;

  // setters for named parameter idiom
  Type & set__elevation(
    const int32_t & _arg)
  {
    this->elevation = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t ELEVATION_UNAVAILABLE =
    -4096;
  static constexpr int32_t ELEVATION_MAX =
    61439;
  static constexpr int32_t ELEVATION_MIN =
    -4095;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::Elevation_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::Elevation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::Elevation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::Elevation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::Elevation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::Elevation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::Elevation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::Elevation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::Elevation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::Elevation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__Elevation
    std::shared_ptr<j2735_v2x_msgs::msg::Elevation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__Elevation
    std::shared_ptr<j2735_v2x_msgs::msg::Elevation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Elevation_ & other) const
  {
    if (this->elevation != other.elevation) {
      return false;
    }
    return true;
  }
  bool operator!=(const Elevation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Elevation_

// alias to use template instance with default allocator
using Elevation =
  j2735_v2x_msgs::msg::Elevation_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Elevation_<ContainerAllocator>::ELEVATION_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Elevation_<ContainerAllocator>::ELEVATION_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Elevation_<ContainerAllocator>::ELEVATION_MIN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ELEVATION__STRUCT_HPP_
