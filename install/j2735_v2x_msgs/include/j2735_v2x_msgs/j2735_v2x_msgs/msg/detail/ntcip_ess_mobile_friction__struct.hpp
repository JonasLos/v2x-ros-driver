// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/NTCIPEssMobileFriction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/ntcip_ess_mobile_friction.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_MOBILE_FRICTION__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_MOBILE_FRICTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssMobileFriction __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssMobileFriction __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NTCIPEssMobileFriction_
{
  using Type = NTCIPEssMobileFriction_<ContainerAllocator>;

  explicit NTCIPEssMobileFriction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ess_mobile_friction = 0;
    }
  }

  explicit NTCIPEssMobileFriction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ess_mobile_friction = 0;
    }
  }

  // field types and members
  using _ess_mobile_friction_type =
    uint8_t;
  _ess_mobile_friction_type ess_mobile_friction;

  // setters for named parameter idiom
  Type & set__ess_mobile_friction(
    const uint8_t & _arg)
  {
    this->ess_mobile_friction = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ESS_MOBILE_FRICTION_MIN =
    0u;
  static constexpr uint8_t ESS_MOBILE_FRICTION_MAX =
    100u;
  static constexpr uint8_t ERROR_OR_MISSING_VALUE =
    101u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::NTCIPEssMobileFriction_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::NTCIPEssMobileFriction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssMobileFriction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssMobileFriction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NTCIPEssMobileFriction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NTCIPEssMobileFriction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NTCIPEssMobileFriction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NTCIPEssMobileFriction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NTCIPEssMobileFriction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NTCIPEssMobileFriction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssMobileFriction
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssMobileFriction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssMobileFriction
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssMobileFriction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NTCIPEssMobileFriction_ & other) const
  {
    if (this->ess_mobile_friction != other.ess_mobile_friction) {
      return false;
    }
    return true;
  }
  bool operator!=(const NTCIPEssMobileFriction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NTCIPEssMobileFriction_

// alias to use template instance with default allocator
using NTCIPEssMobileFriction =
  j2735_v2x_msgs::msg::NTCIPEssMobileFriction_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssMobileFriction_<ContainerAllocator>::ESS_MOBILE_FRICTION_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssMobileFriction_<ContainerAllocator>::ESS_MOBILE_FRICTION_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssMobileFriction_<ContainerAllocator>::ERROR_OR_MISSING_VALUE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_MOBILE_FRICTION__STRUCT_HPP_
