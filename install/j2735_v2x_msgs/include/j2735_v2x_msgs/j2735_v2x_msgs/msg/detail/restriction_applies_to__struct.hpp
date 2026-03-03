// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/RestrictionAppliesTo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/restriction_applies_to.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_APPLIES_TO__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_APPLIES_TO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__RestrictionAppliesTo __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__RestrictionAppliesTo __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RestrictionAppliesTo_
{
  using Type = RestrictionAppliesTo_<ContainerAllocator>;

  explicit RestrictionAppliesTo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->restriction_applies_to = 0;
    }
  }

  explicit RestrictionAppliesTo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->restriction_applies_to = 0;
    }
  }

  // field types and members
  using _restriction_applies_to_type =
    uint8_t;
  _restriction_applies_to_type restriction_applies_to;

  // setters for named parameter idiom
  Type & set__restriction_applies_to(
    const uint8_t & _arg)
  {
    this->restriction_applies_to = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t EQUIPPEDTRANSIT =
    1u;
  static constexpr uint8_t EQUIPPEDTAXIS =
    2u;
  static constexpr uint8_t EQUIPPEDOTHER =
    3u;
  static constexpr uint8_t EMISSIONCOMPLIANT =
    4u;
  static constexpr uint8_t EQUIPPEDBICYCLE =
    5u;
  static constexpr uint8_t WEIGHTCOMPLIANT =
    6u;
  static constexpr uint8_t HEIGHTCOMPLIANT =
    7u;
  static constexpr uint8_t PEDESTRIANS =
    8u;
  static constexpr uint8_t SLOWMOVINGPERSONS =
    9u;
  static constexpr uint8_t WHEELCHAIRUSERS =
    10u;
  static constexpr uint8_t VISUALDISABILITIES =
    11u;
  static constexpr uint8_t AUDIODISABILITIES =
    12u;
  static constexpr uint8_t OTHERUNKNOWNDISABILITIES =
    13u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::RestrictionAppliesTo_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::RestrictionAppliesTo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RestrictionAppliesTo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RestrictionAppliesTo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RestrictionAppliesTo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RestrictionAppliesTo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RestrictionAppliesTo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RestrictionAppliesTo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RestrictionAppliesTo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RestrictionAppliesTo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__RestrictionAppliesTo
    std::shared_ptr<j2735_v2x_msgs::msg::RestrictionAppliesTo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__RestrictionAppliesTo
    std::shared_ptr<j2735_v2x_msgs::msg::RestrictionAppliesTo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RestrictionAppliesTo_ & other) const
  {
    if (this->restriction_applies_to != other.restriction_applies_to) {
      return false;
    }
    return true;
  }
  bool operator!=(const RestrictionAppliesTo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RestrictionAppliesTo_

// alias to use template instance with default allocator
using RestrictionAppliesTo =
  j2735_v2x_msgs::msg::RestrictionAppliesTo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RestrictionAppliesTo_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RestrictionAppliesTo_<ContainerAllocator>::EQUIPPEDTRANSIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RestrictionAppliesTo_<ContainerAllocator>::EQUIPPEDTAXIS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RestrictionAppliesTo_<ContainerAllocator>::EQUIPPEDOTHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RestrictionAppliesTo_<ContainerAllocator>::EMISSIONCOMPLIANT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RestrictionAppliesTo_<ContainerAllocator>::EQUIPPEDBICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RestrictionAppliesTo_<ContainerAllocator>::WEIGHTCOMPLIANT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RestrictionAppliesTo_<ContainerAllocator>::HEIGHTCOMPLIANT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RestrictionAppliesTo_<ContainerAllocator>::PEDESTRIANS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RestrictionAppliesTo_<ContainerAllocator>::SLOWMOVINGPERSONS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RestrictionAppliesTo_<ContainerAllocator>::WHEELCHAIRUSERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RestrictionAppliesTo_<ContainerAllocator>::VISUALDISABILITIES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RestrictionAppliesTo_<ContainerAllocator>::AUDIODISABILITIES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RestrictionAppliesTo_<ContainerAllocator>::OTHERUNKNOWNDISABILITIES;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_APPLIES_TO__STRUCT_HPP_
