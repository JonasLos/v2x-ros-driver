// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/EnabledLaneList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/enabled_lane_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ENABLED_LANE_LIST__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ENABLED_LANE_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__EnabledLaneList __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__EnabledLaneList __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnabledLaneList_
{
  using Type = EnabledLaneList_<ContainerAllocator>;

  explicit EnabledLaneList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit EnabledLaneList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _lane_id_list_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _lane_id_list_type lane_id_list;

  // setters for named parameter idiom
  Type & set__lane_id_list(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->lane_id_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::EnabledLaneList_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::EnabledLaneList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::EnabledLaneList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::EnabledLaneList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::EnabledLaneList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::EnabledLaneList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::EnabledLaneList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::EnabledLaneList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::EnabledLaneList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::EnabledLaneList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__EnabledLaneList
    std::shared_ptr<j2735_v2x_msgs::msg::EnabledLaneList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__EnabledLaneList
    std::shared_ptr<j2735_v2x_msgs::msg::EnabledLaneList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnabledLaneList_ & other) const
  {
    if (this->lane_id_list != other.lane_id_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnabledLaneList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnabledLaneList_

// alias to use template instance with default allocator
using EnabledLaneList =
  j2735_v2x_msgs::msg::EnabledLaneList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ENABLED_LANE_LIST__STRUCT_HPP_
