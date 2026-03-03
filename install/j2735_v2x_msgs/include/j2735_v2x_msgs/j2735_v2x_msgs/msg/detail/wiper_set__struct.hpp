// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/WiperSet.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/wiper_set.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__WIPER_SET__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__WIPER_SET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status_front'
// Member 'status_rear'
#include "j2735_v2x_msgs/msg/detail/wiper_status__struct.hpp"
// Member 'rate_front'
// Member 'rate_rear'
#include "j2735_v2x_msgs/msg/detail/wiper_rate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__WiperSet __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__WiperSet __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WiperSet_
{
  using Type = WiperSet_<ContainerAllocator>;

  explicit WiperSet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status_front(_init),
    rate_front(_init),
    status_rear(_init),
    rate_rear(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit WiperSet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status_front(_alloc, _init),
    rate_front(_alloc, _init),
    status_rear(_alloc, _init),
    rate_rear(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint16_t;
  _presence_vector_type presence_vector;
  using _status_front_type =
    j2735_v2x_msgs::msg::WiperStatus_<ContainerAllocator>;
  _status_front_type status_front;
  using _rate_front_type =
    j2735_v2x_msgs::msg::WiperRate_<ContainerAllocator>;
  _rate_front_type rate_front;
  using _status_rear_type =
    j2735_v2x_msgs::msg::WiperStatus_<ContainerAllocator>;
  _status_rear_type status_rear;
  using _rate_rear_type =
    j2735_v2x_msgs::msg::WiperRate_<ContainerAllocator>;
  _rate_rear_type rate_rear;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__status_front(
    const j2735_v2x_msgs::msg::WiperStatus_<ContainerAllocator> & _arg)
  {
    this->status_front = _arg;
    return *this;
  }
  Type & set__rate_front(
    const j2735_v2x_msgs::msg::WiperRate_<ContainerAllocator> & _arg)
  {
    this->rate_front = _arg;
    return *this;
  }
  Type & set__status_rear(
    const j2735_v2x_msgs::msg::WiperStatus_<ContainerAllocator> & _arg)
  {
    this->status_rear = _arg;
    return *this;
  }
  Type & set__rate_rear(
    const j2735_v2x_msgs::msg::WiperRate_<ContainerAllocator> & _arg)
  {
    this->rate_rear = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t HAS_STATUS_REAR =
    1u;
  static constexpr uint16_t HAS_RATE_REAR =
    2u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::WiperSet_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::WiperSet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::WiperSet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::WiperSet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::WiperSet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::WiperSet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::WiperSet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::WiperSet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::WiperSet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::WiperSet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__WiperSet
    std::shared_ptr<j2735_v2x_msgs::msg::WiperSet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__WiperSet
    std::shared_ptr<j2735_v2x_msgs::msg::WiperSet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WiperSet_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->status_front != other.status_front) {
      return false;
    }
    if (this->rate_front != other.rate_front) {
      return false;
    }
    if (this->status_rear != other.status_rear) {
      return false;
    }
    if (this->rate_rear != other.rate_rear) {
      return false;
    }
    return true;
  }
  bool operator!=(const WiperSet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WiperSet_

// alias to use template instance with default allocator
using WiperSet =
  j2735_v2x_msgs::msg::WiperSet_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t WiperSet_<ContainerAllocator>::HAS_STATUS_REAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t WiperSet_<ContainerAllocator>::HAS_RATE_REAR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WIPER_SET__STRUCT_HPP_
