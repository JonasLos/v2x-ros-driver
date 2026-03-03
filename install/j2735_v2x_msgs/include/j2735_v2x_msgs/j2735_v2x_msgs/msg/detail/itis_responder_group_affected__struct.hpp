// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/ITISResponderGroupAffected.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/itis_responder_group_affected.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ITIS_RESPONDER_GROUP_AFFECTED__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ITIS_RESPONDER_GROUP_AFFECTED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__ITISResponderGroupAffected __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__ITISResponderGroupAffected __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ITISResponderGroupAffected_
{
  using Type = ITISResponderGroupAffected_<ContainerAllocator>;

  explicit ITISResponderGroupAffected_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->responder_group_affected = 0;
    }
  }

  explicit ITISResponderGroupAffected_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->responder_group_affected = 0;
    }
  }

  // field types and members
  using _responder_group_affected_type =
    uint16_t;
  _responder_group_affected_type responder_group_affected;

  // setters for named parameter idiom
  Type & set__responder_group_affected(
    const uint16_t & _arg)
  {
    this->responder_group_affected = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t EMERGENCY_VEHICLE_UNITS =
    9729u;
  static constexpr uint16_t FEDERAL_LAW_ENFORCEMENT_UNITS =
    9730u;
  static constexpr uint16_t STATE_POLICE_UNITS =
    9731u;
  static constexpr uint16_t LOCAL_POLICE_UNITS =
    9732u;
  static constexpr uint16_t AMBULANCE_UNITS =
    9734u;
  static constexpr uint16_t RESCUE_UNITS =
    9735u;
  static constexpr uint16_t FIRE_UNITS =
    9736u;
  static constexpr uint16_t HAZMAT_UNITS =
    9737u;
  static constexpr uint16_t LIGHT_TOW_UNIT =
    9738u;
  static constexpr uint16_t HEAVY_TOW_UNIT =
    9739u;
  static constexpr uint16_t FREEWAY_SERVICE_PATROLS =
    9740u;
  static constexpr uint16_t TRANSPORTATION_RESPONSE_UNITS =
    9741u;
  static constexpr uint16_t PRIVATE_CONTRACTOR_RESPONSE_UNITS =
    9742u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::ITISResponderGroupAffected_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::ITISResponderGroupAffected_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ITISResponderGroupAffected_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ITISResponderGroupAffected_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ITISResponderGroupAffected_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ITISResponderGroupAffected_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ITISResponderGroupAffected_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ITISResponderGroupAffected_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ITISResponderGroupAffected_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ITISResponderGroupAffected_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__ITISResponderGroupAffected
    std::shared_ptr<j2735_v2x_msgs::msg::ITISResponderGroupAffected_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__ITISResponderGroupAffected
    std::shared_ptr<j2735_v2x_msgs::msg::ITISResponderGroupAffected_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ITISResponderGroupAffected_ & other) const
  {
    if (this->responder_group_affected != other.responder_group_affected) {
      return false;
    }
    return true;
  }
  bool operator!=(const ITISResponderGroupAffected_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ITISResponderGroupAffected_

// alias to use template instance with default allocator
using ITISResponderGroupAffected =
  j2735_v2x_msgs::msg::ITISResponderGroupAffected_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISResponderGroupAffected_<ContainerAllocator>::EMERGENCY_VEHICLE_UNITS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISResponderGroupAffected_<ContainerAllocator>::FEDERAL_LAW_ENFORCEMENT_UNITS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISResponderGroupAffected_<ContainerAllocator>::STATE_POLICE_UNITS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISResponderGroupAffected_<ContainerAllocator>::LOCAL_POLICE_UNITS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISResponderGroupAffected_<ContainerAllocator>::AMBULANCE_UNITS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISResponderGroupAffected_<ContainerAllocator>::RESCUE_UNITS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISResponderGroupAffected_<ContainerAllocator>::FIRE_UNITS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISResponderGroupAffected_<ContainerAllocator>::HAZMAT_UNITS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISResponderGroupAffected_<ContainerAllocator>::LIGHT_TOW_UNIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISResponderGroupAffected_<ContainerAllocator>::HEAVY_TOW_UNIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISResponderGroupAffected_<ContainerAllocator>::FREEWAY_SERVICE_PATROLS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISResponderGroupAffected_<ContainerAllocator>::TRANSPORTATION_RESPONSE_UNITS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISResponderGroupAffected_<ContainerAllocator>::PRIVATE_CONTRACTOR_RESPONSE_UNITS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ITIS_RESPONDER_GROUP_AFFECTED__STRUCT_HPP_
