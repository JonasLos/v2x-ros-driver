// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/Longitude.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/longitude.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LONGITUDE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LONGITUDE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__Longitude __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__Longitude __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Longitude_
{
  using Type = Longitude_<ContainerAllocator>;

  explicit Longitude_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longitude = 0l;
    }
  }

  explicit Longitude_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longitude = 0l;
    }
  }

  // field types and members
  using _longitude_type =
    int32_t;
  _longitude_type longitude;

  // setters for named parameter idiom
  Type & set__longitude(
    const int32_t & _arg)
  {
    this->longitude = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t LONGITUDE_UNAVAILABLE =
    1800000001;
  static constexpr int32_t LONGITUDE_MAX =
    1800000000;
  static constexpr int32_t LONGITUDE_MIN =
    -1799999999;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::Longitude_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::Longitude_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::Longitude_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::Longitude_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::Longitude_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::Longitude_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::Longitude_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::Longitude_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::Longitude_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::Longitude_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__Longitude
    std::shared_ptr<j2735_v2x_msgs::msg::Longitude_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__Longitude
    std::shared_ptr<j2735_v2x_msgs::msg::Longitude_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Longitude_ & other) const
  {
    if (this->longitude != other.longitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const Longitude_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Longitude_

// alias to use template instance with default allocator
using Longitude =
  j2735_v2x_msgs::msg::Longitude_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Longitude_<ContainerAllocator>::LONGITUDE_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Longitude_<ContainerAllocator>::LONGITUDE_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Longitude_<ContainerAllocator>::LONGITUDE_MIN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LONGITUDE__STRUCT_HPP_
