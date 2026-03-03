// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/PublicSafetyEventResponderWorkerType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/public_safety_event_responder_worker_type.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_EVENT_RESPONDER_WORKER_TYPE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_EVENT_RESPONDER_WORKER_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PublicSafetyEventResponderWorkerType_
{
  using Type = PublicSafetyEventResponderWorkerType_<ContainerAllocator>;

  explicit PublicSafetyEventResponderWorkerType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit PublicSafetyEventResponderWorkerType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t TOW_OPERATOR =
    1u;
  static constexpr uint8_t FIRE_EMS_WORKER =
    2u;
  static constexpr uint8_t ADOT_WORKER =
    3u;
  static constexpr uint8_t LAW_ENFORCEMENT =
    4u;
  static constexpr uint8_t HAZMAT_RESPONDER =
    5u;
  static constexpr uint8_t ANIMAL_CONTROL_WORKER =
    6u;
  static constexpr uint8_t OTHER_PERSONNEL =
    7u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType
    std::shared_ptr<j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType
    std::shared_ptr<j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PublicSafetyEventResponderWorkerType_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const PublicSafetyEventResponderWorkerType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PublicSafetyEventResponderWorkerType_

// alias to use template instance with default allocator
using PublicSafetyEventResponderWorkerType =
  j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyEventResponderWorkerType_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyEventResponderWorkerType_<ContainerAllocator>::TOW_OPERATOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyEventResponderWorkerType_<ContainerAllocator>::FIRE_EMS_WORKER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyEventResponderWorkerType_<ContainerAllocator>::ADOT_WORKER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyEventResponderWorkerType_<ContainerAllocator>::LAW_ENFORCEMENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyEventResponderWorkerType_<ContainerAllocator>::HAZMAT_RESPONDER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyEventResponderWorkerType_<ContainerAllocator>::ANIMAL_CONTROL_WORKER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyEventResponderWorkerType_<ContainerAllocator>::OTHER_PERSONNEL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_EVENT_RESPONDER_WORKER_TYPE__STRUCT_HPP_
