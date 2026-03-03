// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_msgs:msg/CarlaEnabled.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/carla_enabled.hpp"


#ifndef CARMA_MSGS__MSG__DETAIL__CARLA_ENABLED__STRUCT_HPP_
#define CARMA_MSGS__MSG__DETAIL__CARLA_ENABLED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__carma_msgs__msg__CarlaEnabled __attribute__((deprecated))
#else
# define DEPRECATED__carma_msgs__msg__CarlaEnabled __declspec(deprecated)
#endif

namespace carma_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaEnabled_
{
  using Type = CarlaEnabled_<ContainerAllocator>;

  explicit CarlaEnabled_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->carla_enabled = false;
    }
  }

  explicit CarlaEnabled_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->carla_enabled = false;
    }
  }

  // field types and members
  using _carla_enabled_type =
    bool;
  _carla_enabled_type carla_enabled;

  // setters for named parameter idiom
  Type & set__carla_enabled(
    const bool & _arg)
  {
    this->carla_enabled = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_msgs::msg::CarlaEnabled_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_msgs::msg::CarlaEnabled_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_msgs::msg::CarlaEnabled_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_msgs::msg::CarlaEnabled_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_msgs::msg::CarlaEnabled_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::msg::CarlaEnabled_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_msgs::msg::CarlaEnabled_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::msg::CarlaEnabled_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_msgs::msg::CarlaEnabled_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_msgs::msg::CarlaEnabled_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_msgs__msg__CarlaEnabled
    std::shared_ptr<carma_msgs::msg::CarlaEnabled_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_msgs__msg__CarlaEnabled
    std::shared_ptr<carma_msgs::msg::CarlaEnabled_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaEnabled_ & other) const
  {
    if (this->carla_enabled != other.carla_enabled) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaEnabled_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaEnabled_

// alias to use template instance with default allocator
using CarlaEnabled =
  carma_msgs::msg::CarlaEnabled_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_msgs

#endif  // CARMA_MSGS__MSG__DETAIL__CARLA_ENABLED__STRUCT_HPP_
