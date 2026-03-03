// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/VertOffsetB07.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vert_offset_b07.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B07__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B07__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__VertOffsetB07 __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__VertOffsetB07 __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VertOffsetB07_
{
  using Type = VertOffsetB07_<ContainerAllocator>;

  explicit VertOffsetB07_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0;
    }
  }

  explicit VertOffsetB07_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0;
    }
  }

  // field types and members
  using _offset_type =
    int8_t;
  _offset_type offset;

  // setters for named parameter idiom
  Type & set__offset(
    const int8_t & _arg)
  {
    this->offset = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t OFFSET_MIN =
    -63;
  static constexpr int8_t OFFSET_MAX =
    63;
  static constexpr int8_t OFFSET_UNAVAILABLE =
    -64;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__VertOffsetB07
    std::shared_ptr<j2735_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__VertOffsetB07
    std::shared_ptr<j2735_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VertOffsetB07_ & other) const
  {
    if (this->offset != other.offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const VertOffsetB07_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VertOffsetB07_

// alias to use template instance with default allocator
using VertOffsetB07 =
  j2735_v2x_msgs::msg::VertOffsetB07_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t VertOffsetB07_<ContainerAllocator>::OFFSET_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t VertOffsetB07_<ContainerAllocator>::OFFSET_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t VertOffsetB07_<ContainerAllocator>::OFFSET_UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B07__STRUCT_HPP_
