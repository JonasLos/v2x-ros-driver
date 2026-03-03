// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/VehicleType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_type.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_TYPE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__VehicleType __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__VehicleType __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleType_
{
  using Type = VehicleType_<ContainerAllocator>;

  explicit VehicleType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_type = 0;
    }
  }

  explicit VehicleType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_type = 0;
    }
  }

  // field types and members
  using _vehicle_type_type =
    uint8_t;
  _vehicle_type_type vehicle_type;

  // setters for named parameter idiom
  Type & set__vehicle_type(
    const uint8_t & _arg)
  {
    this->vehicle_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t UNKNOWN =
    1u;
  static constexpr uint8_t SPECIAL =
    2u;
  static constexpr uint8_t MOTO =
    3u;
  static constexpr uint8_t CAR =
    4u;
  static constexpr uint8_t CAR_OTHER =
    5u;
  static constexpr uint8_t BUS =
    6u;
  static constexpr uint8_t AXLE_CNT_2 =
    7u;
  static constexpr uint8_t AXLE_CNT_3 =
    8u;
  static constexpr uint8_t AXLE_CNT_4 =
    9u;
  static constexpr uint8_t AXLE_CNT_4_TRAILER =
    10u;
  static constexpr uint8_t AXLE_CNT_5_TRAILER =
    11u;
  static constexpr uint8_t AXLE_CNT_6_TRAILER =
    12u;
  static constexpr uint8_t AXLE_CNT_5_MULTI_TRAILER =
    13u;
  static constexpr uint8_t AXLE_CNT_6_MULTI_TRAILER =
    14u;
  static constexpr uint8_t AXLE_CNT_7_MULTI_TRAILER =
    15u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::VehicleType_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::VehicleType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::VehicleType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::VehicleType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::VehicleType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::VehicleType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::VehicleType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::VehicleType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__VehicleType
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__VehicleType
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleType_ & other) const
  {
    if (this->vehicle_type != other.vehicle_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleType_

// alias to use template instance with default allocator
using VehicleType =
  j2735_v2x_msgs::msg::VehicleType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleType_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleType_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleType_<ContainerAllocator>::SPECIAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleType_<ContainerAllocator>::MOTO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleType_<ContainerAllocator>::CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleType_<ContainerAllocator>::CAR_OTHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleType_<ContainerAllocator>::BUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleType_<ContainerAllocator>::AXLE_CNT_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleType_<ContainerAllocator>::AXLE_CNT_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleType_<ContainerAllocator>::AXLE_CNT_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleType_<ContainerAllocator>::AXLE_CNT_4_TRAILER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleType_<ContainerAllocator>::AXLE_CNT_5_TRAILER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleType_<ContainerAllocator>::AXLE_CNT_6_TRAILER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleType_<ContainerAllocator>::AXLE_CNT_5_MULTI_TRAILER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleType_<ContainerAllocator>::AXLE_CNT_6_MULTI_TRAILER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleType_<ContainerAllocator>::AXLE_CNT_7_MULTI_TRAILER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_TYPE__STRUCT_HPP_
