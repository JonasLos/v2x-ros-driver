// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_driver_msgs:msg/HeadingStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/heading_stamped.hpp"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__HEADING_STAMPED__STRUCT_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__HEADING_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_driver_msgs__msg__HeadingStamped __attribute__((deprecated))
#else
# define DEPRECATED__carma_driver_msgs__msg__HeadingStamped __declspec(deprecated)
#endif

namespace carma_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HeadingStamped_
{
  using Type = HeadingStamped_<ContainerAllocator>;

  explicit HeadingStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0f;
    }
  }

  explicit HeadingStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _heading_type =
    float;
  _heading_type heading;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_driver_msgs::msg::HeadingStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_driver_msgs::msg::HeadingStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_driver_msgs::msg::HeadingStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_driver_msgs::msg::HeadingStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::msg::HeadingStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::msg::HeadingStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::msg::HeadingStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::msg::HeadingStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_driver_msgs::msg::HeadingStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_driver_msgs::msg::HeadingStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_driver_msgs__msg__HeadingStamped
    std::shared_ptr<carma_driver_msgs::msg::HeadingStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_driver_msgs__msg__HeadingStamped
    std::shared_ptr<carma_driver_msgs::msg::HeadingStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HeadingStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    return true;
  }
  bool operator!=(const HeadingStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HeadingStamped_

// alias to use template instance with default allocator
using HeadingStamped =
  carma_driver_msgs::msg::HeadingStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__HEADING_STAMPED__STRUCT_HPP_
