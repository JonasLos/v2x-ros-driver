// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/WiperRate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/wiper_rate.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__WIPER_RATE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__WIPER_RATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__WiperRate __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__WiperRate __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WiperRate_
{
  using Type = WiperRate_<ContainerAllocator>;

  explicit WiperRate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wiper_rate = 0;
    }
  }

  explicit WiperRate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wiper_rate = 0;
    }
  }

  // field types and members
  using _wiper_rate_type =
    uint8_t;
  _wiper_rate_type wiper_rate;

  // setters for named parameter idiom
  Type & set__wiper_rate(
    const uint8_t & _arg)
  {
    this->wiper_rate = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t WIPER_RATE_MIN =
    1u;
  static constexpr uint8_t WIPER_RATE_MAX =
    127u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::WiperRate_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::WiperRate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::WiperRate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::WiperRate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::WiperRate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::WiperRate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::WiperRate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::WiperRate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::WiperRate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::WiperRate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__WiperRate
    std::shared_ptr<j2735_v2x_msgs::msg::WiperRate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__WiperRate
    std::shared_ptr<j2735_v2x_msgs::msg::WiperRate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WiperRate_ & other) const
  {
    if (this->wiper_rate != other.wiper_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const WiperRate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WiperRate_

// alias to use template instance with default allocator
using WiperRate =
  j2735_v2x_msgs::msg::WiperRate_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WiperRate_<ContainerAllocator>::WIPER_RATE_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WiperRate_<ContainerAllocator>::WIPER_RATE_MAX;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WIPER_RATE__STRUCT_HPP_
