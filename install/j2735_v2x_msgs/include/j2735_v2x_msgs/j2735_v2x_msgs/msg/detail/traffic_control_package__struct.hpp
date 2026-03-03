// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlPackage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_package.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PACKAGE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PACKAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'tcids'
#include "j2735_v2x_msgs/msg/detail/id128b__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TrafficControlPackage __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TrafficControlPackage __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficControlPackage_
{
  using Type = TrafficControlPackage_<ContainerAllocator>;

  explicit TrafficControlPackage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->label_exists = false;
    }
  }

  explicit TrafficControlPackage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->label_exists = false;
    }
  }

  // field types and members
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_type label;
  using _label_exists_type =
    bool;
  _label_exists_type label_exists;
  using _tcids_type =
    std::vector<j2735_v2x_msgs::msg::Id128b_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::Id128b_<ContainerAllocator>>>;
  _tcids_type tcids;

  // setters for named parameter idiom
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__label_exists(
    const bool & _arg)
  {
    this->label_exists = _arg;
    return *this;
  }
  Type & set__tcids(
    const std::vector<j2735_v2x_msgs::msg::Id128b_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::Id128b_<ContainerAllocator>>> & _arg)
  {
    this->tcids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TrafficControlPackage_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TrafficControlPackage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlPackage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlPackage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrafficControlPackage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrafficControlPackage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrafficControlPackage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrafficControlPackage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrafficControlPackage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrafficControlPackage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrafficControlPackage
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlPackage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrafficControlPackage
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlPackage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficControlPackage_ & other) const
  {
    if (this->label != other.label) {
      return false;
    }
    if (this->label_exists != other.label_exists) {
      return false;
    }
    if (this->tcids != other.tcids) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficControlPackage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficControlPackage_

// alias to use template instance with default allocator
using TrafficControlPackage =
  j2735_v2x_msgs::msg::TrafficControlPackage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PACKAGE__STRUCT_HPP_
