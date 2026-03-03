// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/FuelType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/fuel_type.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__FUEL_TYPE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__FUEL_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__FuelType __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__FuelType __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FuelType_
{
  using Type = FuelType_<ContainerAllocator>;

  explicit FuelType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fuel_type = 0;
    }
  }

  explicit FuelType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fuel_type = 0;
    }
  }

  // field types and members
  using _fuel_type_type =
    uint8_t;
  _fuel_type_type fuel_type;

  // setters for named parameter idiom
  Type & set__fuel_type(
    const uint8_t & _arg)
  {
    this->fuel_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN_FUEL =
    0u;
  static constexpr uint8_t GASOLINE =
    1u;
  static constexpr uint8_t ETHANOL =
    2u;
  static constexpr uint8_t DIESEL =
    3u;
  static constexpr uint8_t ELECTRIC =
    4u;
  static constexpr uint8_t HYBRID =
    5u;
  static constexpr uint8_t HYDROGEN =
    6u;
  static constexpr uint8_t NAT_GAS_LIQUID =
    7u;
  static constexpr uint8_t NAT_GAS_COMP =
    8u;
  static constexpr uint8_t PROPANE =
    9u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::FuelType_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::FuelType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::FuelType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::FuelType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::FuelType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::FuelType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::FuelType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::FuelType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::FuelType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::FuelType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__FuelType
    std::shared_ptr<j2735_v2x_msgs::msg::FuelType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__FuelType
    std::shared_ptr<j2735_v2x_msgs::msg::FuelType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FuelType_ & other) const
  {
    if (this->fuel_type != other.fuel_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const FuelType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FuelType_

// alias to use template instance with default allocator
using FuelType =
  j2735_v2x_msgs::msg::FuelType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FuelType_<ContainerAllocator>::UNKNOWN_FUEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FuelType_<ContainerAllocator>::GASOLINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FuelType_<ContainerAllocator>::ETHANOL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FuelType_<ContainerAllocator>::DIESEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FuelType_<ContainerAllocator>::ELECTRIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FuelType_<ContainerAllocator>::HYBRID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FuelType_<ContainerAllocator>::HYDROGEN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FuelType_<ContainerAllocator>::NAT_GAS_LIQUID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FuelType_<ContainerAllocator>::NAT_GAS_COMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FuelType_<ContainerAllocator>::PROPANE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__FUEL_TYPE__STRUCT_HPP_
