// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/DYear.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/d_year.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_YEAR__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__D_YEAR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__DYear __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__DYear __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DYear_
{
  using Type = DYear_<ContainerAllocator>;

  explicit DYear_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->year = 0;
    }
  }

  explicit DYear_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->year = 0;
    }
  }

  // field types and members
  using _year_type =
    uint16_t;
  _year_type year;

  // setters for named parameter idiom
  Type & set__year(
    const uint16_t & _arg)
  {
    this->year = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t UNAVAILABLE =
    0u;
  static constexpr uint16_t MAX =
    4095u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::DYear_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::DYear_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::DYear_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::DYear_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::DYear_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::DYear_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::DYear_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::DYear_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::DYear_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::DYear_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__DYear
    std::shared_ptr<j2735_v2x_msgs::msg::DYear_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__DYear
    std::shared_ptr<j2735_v2x_msgs::msg::DYear_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DYear_ & other) const
  {
    if (this->year != other.year) {
      return false;
    }
    return true;
  }
  bool operator!=(const DYear_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DYear_

// alias to use template instance with default allocator
using DYear =
  j2735_v2x_msgs::msg::DYear_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t DYear_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t DYear_<ContainerAllocator>::MAX;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_YEAR__STRUCT_HPP_
