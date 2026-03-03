// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/PropelledInformation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/propelled_information.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PROPELLED_INFORMATION__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PROPELLED_INFORMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'human'
#include "j2735_v2x_msgs/msg/detail/human_propelled_type__struct.hpp"
// Member 'animal'
#include "j2735_v2x_msgs/msg/detail/animal_propelled_type__struct.hpp"
// Member 'motor'
#include "j2735_v2x_msgs/msg/detail/motorized_propelled_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__PropelledInformation __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__PropelledInformation __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PropelledInformation_
{
  using Type = PropelledInformation_<ContainerAllocator>;

  explicit PropelledInformation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : human(_init),
    animal(_init),
    motor(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
    }
  }

  explicit PropelledInformation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : human(_alloc, _init),
    animal(_alloc, _init),
    motor(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
    }
  }

  // field types and members
  using _choice_type =
    uint8_t;
  _choice_type choice;
  using _human_type =
    j2735_v2x_msgs::msg::HumanPropelledType_<ContainerAllocator>;
  _human_type human;
  using _animal_type =
    j2735_v2x_msgs::msg::AnimalPropelledType_<ContainerAllocator>;
  _animal_type animal;
  using _motor_type =
    j2735_v2x_msgs::msg::MotorizedPropelledType_<ContainerAllocator>;
  _motor_type motor;

  // setters for named parameter idiom
  Type & set__choice(
    const uint8_t & _arg)
  {
    this->choice = _arg;
    return *this;
  }
  Type & set__human(
    const j2735_v2x_msgs::msg::HumanPropelledType_<ContainerAllocator> & _arg)
  {
    this->human = _arg;
    return *this;
  }
  Type & set__animal(
    const j2735_v2x_msgs::msg::AnimalPropelledType_<ContainerAllocator> & _arg)
  {
    this->animal = _arg;
    return *this;
  }
  Type & set__motor(
    const j2735_v2x_msgs::msg::MotorizedPropelledType_<ContainerAllocator> & _arg)
  {
    this->motor = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CHOICE_HUMAN =
    0u;
  static constexpr uint8_t CHOICE_ANIMAL =
    1u;
  static constexpr uint8_t CHOICE_MOTOR =
    2u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::PropelledInformation_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::PropelledInformation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PropelledInformation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PropelledInformation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PropelledInformation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PropelledInformation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PropelledInformation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PropelledInformation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PropelledInformation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PropelledInformation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__PropelledInformation
    std::shared_ptr<j2735_v2x_msgs::msg::PropelledInformation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__PropelledInformation
    std::shared_ptr<j2735_v2x_msgs::msg::PropelledInformation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PropelledInformation_ & other) const
  {
    if (this->choice != other.choice) {
      return false;
    }
    if (this->human != other.human) {
      return false;
    }
    if (this->animal != other.animal) {
      return false;
    }
    if (this->motor != other.motor) {
      return false;
    }
    return true;
  }
  bool operator!=(const PropelledInformation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PropelledInformation_

// alias to use template instance with default allocator
using PropelledInformation =
  j2735_v2x_msgs::msg::PropelledInformation_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PropelledInformation_<ContainerAllocator>::CHOICE_HUMAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PropelledInformation_<ContainerAllocator>::CHOICE_ANIMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PropelledInformation_<ContainerAllocator>::CHOICE_MOTOR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PROPELLED_INFORMATION__STRUCT_HPP_
