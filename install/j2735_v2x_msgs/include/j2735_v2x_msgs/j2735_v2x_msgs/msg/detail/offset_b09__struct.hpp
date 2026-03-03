// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/OffsetB09.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/offset_b09.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__OFFSET_B09__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__OFFSET_B09__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__OffsetB09 __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__OffsetB09 __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OffsetB09_
{
  using Type = OffsetB09_<ContainerAllocator>;

  explicit OffsetB09_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0;
    }
  }

  explicit OffsetB09_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    int16_t;
  _offset_type offset;

  // setters for named parameter idiom
  Type & set__offset(
    const int16_t & _arg)
  {
    this->offset = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t OFFSET_MIN =
    -255;
  static constexpr int16_t OFFSET_MAX =
    255;
  static constexpr int16_t OFFSET_UNKNOWN =
    -256;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::OffsetB09_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::OffsetB09_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::OffsetB09_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::OffsetB09_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::OffsetB09_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::OffsetB09_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::OffsetB09_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::OffsetB09_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::OffsetB09_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::OffsetB09_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__OffsetB09
    std::shared_ptr<j2735_v2x_msgs::msg::OffsetB09_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__OffsetB09
    std::shared_ptr<j2735_v2x_msgs::msg::OffsetB09_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OffsetB09_ & other) const
  {
    if (this->offset != other.offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const OffsetB09_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OffsetB09_

// alias to use template instance with default allocator
using OffsetB09 =
  j2735_v2x_msgs::msg::OffsetB09_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t OffsetB09_<ContainerAllocator>::OFFSET_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t OffsetB09_<ContainerAllocator>::OFFSET_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t OffsetB09_<ContainerAllocator>::OFFSET_UNKNOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OFFSET_B09__STRUCT_HPP_
