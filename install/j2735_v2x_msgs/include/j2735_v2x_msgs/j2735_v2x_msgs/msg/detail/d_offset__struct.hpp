// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/DOffset.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/d_offset.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_OFFSET__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__D_OFFSET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__DOffset __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__DOffset __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DOffset_
{
  using Type = DOffset_<ContainerAllocator>;

  explicit DOffset_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset_minute = 0;
    }
  }

  explicit DOffset_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset_minute = 0;
    }
  }

  // field types and members
  using _offset_minute_type =
    int16_t;
  _offset_minute_type offset_minute;

  // setters for named parameter idiom
  Type & set__offset_minute(
    const int16_t & _arg)
  {
    this->offset_minute = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t MIN =
    -840;
  static constexpr int16_t MAX =
    840;
  static constexpr int16_t UNAVAILABLE =
    0;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::DOffset_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::DOffset_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::DOffset_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::DOffset_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::DOffset_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::DOffset_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::DOffset_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::DOffset_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::DOffset_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::DOffset_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__DOffset
    std::shared_ptr<j2735_v2x_msgs::msg::DOffset_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__DOffset
    std::shared_ptr<j2735_v2x_msgs::msg::DOffset_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DOffset_ & other) const
  {
    if (this->offset_minute != other.offset_minute) {
      return false;
    }
    return true;
  }
  bool operator!=(const DOffset_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DOffset_

// alias to use template instance with default allocator
using DOffset =
  j2735_v2x_msgs::msg::DOffset_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t DOffset_<ContainerAllocator>::MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t DOffset_<ContainerAllocator>::MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t DOffset_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_OFFSET__STRUCT_HPP_
