// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/ManeuverAssistList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/maneuver_assist_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MANEUVER_ASSIST_LIST__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__MANEUVER_ASSIST_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'connection_maneuver_assist_list'
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__ManeuverAssistList __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__ManeuverAssistList __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ManeuverAssistList_
{
  using Type = ManeuverAssistList_<ContainerAllocator>;

  explicit ManeuverAssistList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ManeuverAssistList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _connection_maneuver_assist_list_type =
    std::vector<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator>>>;
  _connection_maneuver_assist_list_type connection_maneuver_assist_list;

  // setters for named parameter idiom
  Type & set__connection_maneuver_assist_list(
    const std::vector<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator>>> & _arg)
  {
    this->connection_maneuver_assist_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::ManeuverAssistList_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::ManeuverAssistList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ManeuverAssistList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ManeuverAssistList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ManeuverAssistList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ManeuverAssistList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ManeuverAssistList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ManeuverAssistList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ManeuverAssistList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ManeuverAssistList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__ManeuverAssistList
    std::shared_ptr<j2735_v2x_msgs::msg::ManeuverAssistList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__ManeuverAssistList
    std::shared_ptr<j2735_v2x_msgs::msg::ManeuverAssistList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManeuverAssistList_ & other) const
  {
    if (this->connection_maneuver_assist_list != other.connection_maneuver_assist_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManeuverAssistList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManeuverAssistList_

// alias to use template instance with default allocator
using ManeuverAssistList =
  j2735_v2x_msgs::msg::ManeuverAssistList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MANEUVER_ASSIST_LIST__STRUCT_HPP_
