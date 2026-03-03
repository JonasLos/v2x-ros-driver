// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/NTCIPEssSolarRadiation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/ntcip_ess_solar_radiation.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_SOLAR_RADIATION__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_SOLAR_RADIATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssSolarRadiation __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssSolarRadiation __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NTCIPEssSolarRadiation_
{
  using Type = NTCIPEssSolarRadiation_<ContainerAllocator>;

  explicit NTCIPEssSolarRadiation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ess_solar_radiation = 0;
    }
  }

  explicit NTCIPEssSolarRadiation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ess_solar_radiation = 0;
    }
  }

  // field types and members
  using _ess_solar_radiation_type =
    uint16_t;
  _ess_solar_radiation_type ess_solar_radiation;

  // setters for named parameter idiom
  Type & set__ess_solar_radiation(
    const uint16_t & _arg)
  {
    this->ess_solar_radiation = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t MISSING_VALUE =
    65535u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::NTCIPEssSolarRadiation_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::NTCIPEssSolarRadiation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssSolarRadiation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssSolarRadiation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NTCIPEssSolarRadiation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NTCIPEssSolarRadiation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NTCIPEssSolarRadiation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NTCIPEssSolarRadiation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NTCIPEssSolarRadiation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NTCIPEssSolarRadiation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssSolarRadiation
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssSolarRadiation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssSolarRadiation
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssSolarRadiation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NTCIPEssSolarRadiation_ & other) const
  {
    if (this->ess_solar_radiation != other.ess_solar_radiation) {
      return false;
    }
    return true;
  }
  bool operator!=(const NTCIPEssSolarRadiation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NTCIPEssSolarRadiation_

// alias to use template instance with default allocator
using NTCIPEssSolarRadiation =
  j2735_v2x_msgs::msg::NTCIPEssSolarRadiation_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t NTCIPEssSolarRadiation_<ContainerAllocator>::MISSING_VALUE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_SOLAR_RADIATION__STRUCT_HPP_
