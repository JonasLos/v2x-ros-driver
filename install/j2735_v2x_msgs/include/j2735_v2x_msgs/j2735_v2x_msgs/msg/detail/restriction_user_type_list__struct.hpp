// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/RestrictionUserTypeList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/restriction_user_type_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE_LIST__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'restriction_user_type_list'
#include "j2735_v2x_msgs/msg/detail/restriction_user_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__RestrictionUserTypeList __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__RestrictionUserTypeList __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RestrictionUserTypeList_
{
  using Type = RestrictionUserTypeList_<ContainerAllocator>;

  explicit RestrictionUserTypeList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit RestrictionUserTypeList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _restriction_user_type_list_type =
    std::vector<j2735_v2x_msgs::msg::RestrictionUserType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::RestrictionUserType_<ContainerAllocator>>>;
  _restriction_user_type_list_type restriction_user_type_list;

  // setters for named parameter idiom
  Type & set__restriction_user_type_list(
    const std::vector<j2735_v2x_msgs::msg::RestrictionUserType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::RestrictionUserType_<ContainerAllocator>>> & _arg)
  {
    this->restriction_user_type_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::RestrictionUserTypeList_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::RestrictionUserTypeList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RestrictionUserTypeList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RestrictionUserTypeList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RestrictionUserTypeList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RestrictionUserTypeList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RestrictionUserTypeList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RestrictionUserTypeList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RestrictionUserTypeList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RestrictionUserTypeList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__RestrictionUserTypeList
    std::shared_ptr<j2735_v2x_msgs::msg::RestrictionUserTypeList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__RestrictionUserTypeList
    std::shared_ptr<j2735_v2x_msgs::msg::RestrictionUserTypeList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RestrictionUserTypeList_ & other) const
  {
    if (this->restriction_user_type_list != other.restriction_user_type_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const RestrictionUserTypeList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RestrictionUserTypeList_

// alias to use template instance with default allocator
using RestrictionUserTypeList =
  j2735_v2x_msgs::msg::RestrictionUserTypeList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE_LIST__STRUCT_HPP_
