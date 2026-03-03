// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/PSM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/psm.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PSM__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PSM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'basic_type'
#include "j2735_v2x_msgs/msg/detail/personal_device_user_type__struct.hpp"
// Member 'sec_mark'
#include "j2735_v2x_msgs/msg/detail/d_second__struct.hpp"
// Member 'msg_cnt'
#include "j2735_v2x_msgs/msg/detail/msg_count__struct.hpp"
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/temporary_id__struct.hpp"
// Member 'position'
#include "j2735_v2x_msgs/msg/detail/position3_d__struct.hpp"
// Member 'accuracy'
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__struct.hpp"
// Member 'speed'
#include "j2735_v2x_msgs/msg/detail/velocity__struct.hpp"
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/heading__struct.hpp"
// Member 'accel_set'
#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__struct.hpp"
// Member 'path_history'
#include "j2735_v2x_msgs/msg/detail/path_history__struct.hpp"
// Member 'path_prediction'
#include "j2735_v2x_msgs/msg/detail/path_prediction__struct.hpp"
// Member 'propulsion'
#include "j2735_v2x_msgs/msg/detail/propelled_information__struct.hpp"
// Member 'use_state'
#include "j2735_v2x_msgs/msg/detail/personal_device_usage_state__struct.hpp"
// Member 'cross_request'
#include "j2735_v2x_msgs/msg/detail/personal_crossing_request__struct.hpp"
// Member 'cross_state'
#include "j2735_v2x_msgs/msg/detail/personal_crossing_in_progress__struct.hpp"
// Member 'cluster_size'
#include "j2735_v2x_msgs/msg/detail/number_of_participants_in_cluster__struct.hpp"
// Member 'cluster_radius'
#include "j2735_v2x_msgs/msg/detail/personal_cluster_radius__struct.hpp"
// Member 'event_responder_type'
#include "j2735_v2x_msgs/msg/detail/public_safety_event_responder_worker_type__struct.hpp"
// Member 'activity_type'
#include "j2735_v2x_msgs/msg/detail/public_safety_and_road_worker_activity__struct.hpp"
// Member 'activity_sub_type'
#include "j2735_v2x_msgs/msg/detail/public_safety_directing_traffic_sub_type__struct.hpp"
// Member 'assist_type'
#include "j2735_v2x_msgs/msg/detail/personal_assistive__struct.hpp"
// Member 'sizing'
#include "j2735_v2x_msgs/msg/detail/user_size_and_behaviour__struct.hpp"
// Member 'attachment'
#include "j2735_v2x_msgs/msg/detail/attachment__struct.hpp"
// Member 'attachment_radius'
#include "j2735_v2x_msgs/msg/detail/attachment_radius__struct.hpp"
// Member 'animal_type'
#include "j2735_v2x_msgs/msg/detail/animal_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__PSM __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__PSM __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PSM_
{
  using Type = PSM_<ContainerAllocator>;

  explicit PSM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : basic_type(_init),
    sec_mark(_init),
    msg_cnt(_init),
    id(_init),
    position(_init),
    accuracy(_init),
    speed(_init),
    heading(_init),
    accel_set(_init),
    path_history(_init),
    path_prediction(_init),
    propulsion(_init),
    use_state(_init),
    cross_request(_init),
    cross_state(_init),
    cluster_size(_init),
    cluster_radius(_init),
    event_responder_type(_init),
    activity_type(_init),
    activity_sub_type(_init),
    assist_type(_init),
    sizing(_init),
    attachment(_init),
    attachment_radius(_init),
    animal_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0ul;
    }
  }

  explicit PSM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : basic_type(_alloc, _init),
    sec_mark(_alloc, _init),
    msg_cnt(_alloc, _init),
    id(_alloc, _init),
    position(_alloc, _init),
    accuracy(_alloc, _init),
    speed(_alloc, _init),
    heading(_alloc, _init),
    accel_set(_alloc, _init),
    path_history(_alloc, _init),
    path_prediction(_alloc, _init),
    propulsion(_alloc, _init),
    use_state(_alloc, _init),
    cross_request(_alloc, _init),
    cross_state(_alloc, _init),
    cluster_size(_alloc, _init),
    cluster_radius(_alloc, _init),
    event_responder_type(_alloc, _init),
    activity_type(_alloc, _init),
    activity_sub_type(_alloc, _init),
    assist_type(_alloc, _init),
    sizing(_alloc, _init),
    attachment(_alloc, _init),
    attachment_radius(_alloc, _init),
    animal_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0ul;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint32_t;
  _presence_vector_type presence_vector;
  using _basic_type_type =
    j2735_v2x_msgs::msg::PersonalDeviceUserType_<ContainerAllocator>;
  _basic_type_type basic_type;
  using _sec_mark_type =
    j2735_v2x_msgs::msg::DSecond_<ContainerAllocator>;
  _sec_mark_type sec_mark;
  using _msg_cnt_type =
    j2735_v2x_msgs::msg::MsgCount_<ContainerAllocator>;
  _msg_cnt_type msg_cnt;
  using _id_type =
    j2735_v2x_msgs::msg::TemporaryID_<ContainerAllocator>;
  _id_type id;
  using _position_type =
    j2735_v2x_msgs::msg::Position3D_<ContainerAllocator>;
  _position_type position;
  using _accuracy_type =
    j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator>;
  _accuracy_type accuracy;
  using _speed_type =
    j2735_v2x_msgs::msg::Velocity_<ContainerAllocator>;
  _speed_type speed;
  using _heading_type =
    j2735_v2x_msgs::msg::Heading_<ContainerAllocator>;
  _heading_type heading;
  using _accel_set_type =
    j2735_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator>;
  _accel_set_type accel_set;
  using _path_history_type =
    j2735_v2x_msgs::msg::PathHistory_<ContainerAllocator>;
  _path_history_type path_history;
  using _path_prediction_type =
    j2735_v2x_msgs::msg::PathPrediction_<ContainerAllocator>;
  _path_prediction_type path_prediction;
  using _propulsion_type =
    j2735_v2x_msgs::msg::PropelledInformation_<ContainerAllocator>;
  _propulsion_type propulsion;
  using _use_state_type =
    j2735_v2x_msgs::msg::PersonalDeviceUsageState_<ContainerAllocator>;
  _use_state_type use_state;
  using _cross_request_type =
    j2735_v2x_msgs::msg::PersonalCrossingRequest_<ContainerAllocator>;
  _cross_request_type cross_request;
  using _cross_state_type =
    j2735_v2x_msgs::msg::PersonalCrossingInProgress_<ContainerAllocator>;
  _cross_state_type cross_state;
  using _cluster_size_type =
    j2735_v2x_msgs::msg::NumberOfParticipantsInCluster_<ContainerAllocator>;
  _cluster_size_type cluster_size;
  using _cluster_radius_type =
    j2735_v2x_msgs::msg::PersonalClusterRadius_<ContainerAllocator>;
  _cluster_radius_type cluster_radius;
  using _event_responder_type_type =
    j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType_<ContainerAllocator>;
  _event_responder_type_type event_responder_type;
  using _activity_type_type =
    j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity_<ContainerAllocator>;
  _activity_type_type activity_type;
  using _activity_sub_type_type =
    j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType_<ContainerAllocator>;
  _activity_sub_type_type activity_sub_type;
  using _assist_type_type =
    j2735_v2x_msgs::msg::PersonalAssistive_<ContainerAllocator>;
  _assist_type_type assist_type;
  using _sizing_type =
    j2735_v2x_msgs::msg::UserSizeAndBehaviour_<ContainerAllocator>;
  _sizing_type sizing;
  using _attachment_type =
    j2735_v2x_msgs::msg::Attachment_<ContainerAllocator>;
  _attachment_type attachment;
  using _attachment_radius_type =
    j2735_v2x_msgs::msg::AttachmentRadius_<ContainerAllocator>;
  _attachment_radius_type attachment_radius;
  using _animal_type_type =
    j2735_v2x_msgs::msg::AnimalType_<ContainerAllocator>;
  _animal_type_type animal_type;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint32_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__basic_type(
    const j2735_v2x_msgs::msg::PersonalDeviceUserType_<ContainerAllocator> & _arg)
  {
    this->basic_type = _arg;
    return *this;
  }
  Type & set__sec_mark(
    const j2735_v2x_msgs::msg::DSecond_<ContainerAllocator> & _arg)
  {
    this->sec_mark = _arg;
    return *this;
  }
  Type & set__msg_cnt(
    const j2735_v2x_msgs::msg::MsgCount_<ContainerAllocator> & _arg)
  {
    this->msg_cnt = _arg;
    return *this;
  }
  Type & set__id(
    const j2735_v2x_msgs::msg::TemporaryID_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__position(
    const j2735_v2x_msgs::msg::Position3D_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__accuracy(
    const j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator> & _arg)
  {
    this->accuracy = _arg;
    return *this;
  }
  Type & set__speed(
    const j2735_v2x_msgs::msg::Velocity_<ContainerAllocator> & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__heading(
    const j2735_v2x_msgs::msg::Heading_<ContainerAllocator> & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__accel_set(
    const j2735_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator> & _arg)
  {
    this->accel_set = _arg;
    return *this;
  }
  Type & set__path_history(
    const j2735_v2x_msgs::msg::PathHistory_<ContainerAllocator> & _arg)
  {
    this->path_history = _arg;
    return *this;
  }
  Type & set__path_prediction(
    const j2735_v2x_msgs::msg::PathPrediction_<ContainerAllocator> & _arg)
  {
    this->path_prediction = _arg;
    return *this;
  }
  Type & set__propulsion(
    const j2735_v2x_msgs::msg::PropelledInformation_<ContainerAllocator> & _arg)
  {
    this->propulsion = _arg;
    return *this;
  }
  Type & set__use_state(
    const j2735_v2x_msgs::msg::PersonalDeviceUsageState_<ContainerAllocator> & _arg)
  {
    this->use_state = _arg;
    return *this;
  }
  Type & set__cross_request(
    const j2735_v2x_msgs::msg::PersonalCrossingRequest_<ContainerAllocator> & _arg)
  {
    this->cross_request = _arg;
    return *this;
  }
  Type & set__cross_state(
    const j2735_v2x_msgs::msg::PersonalCrossingInProgress_<ContainerAllocator> & _arg)
  {
    this->cross_state = _arg;
    return *this;
  }
  Type & set__cluster_size(
    const j2735_v2x_msgs::msg::NumberOfParticipantsInCluster_<ContainerAllocator> & _arg)
  {
    this->cluster_size = _arg;
    return *this;
  }
  Type & set__cluster_radius(
    const j2735_v2x_msgs::msg::PersonalClusterRadius_<ContainerAllocator> & _arg)
  {
    this->cluster_radius = _arg;
    return *this;
  }
  Type & set__event_responder_type(
    const j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType_<ContainerAllocator> & _arg)
  {
    this->event_responder_type = _arg;
    return *this;
  }
  Type & set__activity_type(
    const j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity_<ContainerAllocator> & _arg)
  {
    this->activity_type = _arg;
    return *this;
  }
  Type & set__activity_sub_type(
    const j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType_<ContainerAllocator> & _arg)
  {
    this->activity_sub_type = _arg;
    return *this;
  }
  Type & set__assist_type(
    const j2735_v2x_msgs::msg::PersonalAssistive_<ContainerAllocator> & _arg)
  {
    this->assist_type = _arg;
    return *this;
  }
  Type & set__sizing(
    const j2735_v2x_msgs::msg::UserSizeAndBehaviour_<ContainerAllocator> & _arg)
  {
    this->sizing = _arg;
    return *this;
  }
  Type & set__attachment(
    const j2735_v2x_msgs::msg::Attachment_<ContainerAllocator> & _arg)
  {
    this->attachment = _arg;
    return *this;
  }
  Type & set__attachment_radius(
    const j2735_v2x_msgs::msg::AttachmentRadius_<ContainerAllocator> & _arg)
  {
    this->attachment_radius = _arg;
    return *this;
  }
  Type & set__animal_type(
    const j2735_v2x_msgs::msg::AnimalType_<ContainerAllocator> & _arg)
  {
    this->animal_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t HAS_ACCEL_SET =
    1u;
  static constexpr uint32_t HAS_PATH_HISTORY =
    2u;
  static constexpr uint32_t HAS_PATH_PREDICTION =
    4u;
  static constexpr uint32_t HAS_PROPULSION =
    8u;
  static constexpr uint32_t HAS_USE_STATE =
    16u;
  static constexpr uint32_t HAS_CROSS_REQUEST =
    32u;
  static constexpr uint32_t HAS_CROSS_STATE =
    64u;
  static constexpr uint32_t HAS_CLUSTER_SIZE =
    128u;
  static constexpr uint32_t HAS_CLUSTER_RADIUS =
    256u;
  static constexpr uint32_t HAS_EVENT_RESPONDER_TYPE =
    512u;
  static constexpr uint32_t HAS_ACTIVITY_TYPE =
    1024u;
  static constexpr uint32_t HAS_ACTIVITY_SUB_TYPE =
    2048u;
  static constexpr uint32_t HAS_ASSIST_TYPE =
    4096u;
  static constexpr uint32_t HAS_SIZING =
    8192u;
  static constexpr uint32_t HAS_ATTACHMENT =
    16384u;
  static constexpr uint32_t HAS_ATTACHMENT_RADIUS =
    32768u;
  static constexpr uint32_t HAS_ANIMAL_TYPE =
    65536u;
  static constexpr uint32_t HAS_REGIONAL_EXTENSION =
    131072u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::PSM_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::PSM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PSM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PSM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PSM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PSM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PSM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PSM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PSM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PSM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__PSM
    std::shared_ptr<j2735_v2x_msgs::msg::PSM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__PSM
    std::shared_ptr<j2735_v2x_msgs::msg::PSM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PSM_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->basic_type != other.basic_type) {
      return false;
    }
    if (this->sec_mark != other.sec_mark) {
      return false;
    }
    if (this->msg_cnt != other.msg_cnt) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->accuracy != other.accuracy) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->accel_set != other.accel_set) {
      return false;
    }
    if (this->path_history != other.path_history) {
      return false;
    }
    if (this->path_prediction != other.path_prediction) {
      return false;
    }
    if (this->propulsion != other.propulsion) {
      return false;
    }
    if (this->use_state != other.use_state) {
      return false;
    }
    if (this->cross_request != other.cross_request) {
      return false;
    }
    if (this->cross_state != other.cross_state) {
      return false;
    }
    if (this->cluster_size != other.cluster_size) {
      return false;
    }
    if (this->cluster_radius != other.cluster_radius) {
      return false;
    }
    if (this->event_responder_type != other.event_responder_type) {
      return false;
    }
    if (this->activity_type != other.activity_type) {
      return false;
    }
    if (this->activity_sub_type != other.activity_sub_type) {
      return false;
    }
    if (this->assist_type != other.assist_type) {
      return false;
    }
    if (this->sizing != other.sizing) {
      return false;
    }
    if (this->attachment != other.attachment) {
      return false;
    }
    if (this->attachment_radius != other.attachment_radius) {
      return false;
    }
    if (this->animal_type != other.animal_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const PSM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PSM_

// alias to use template instance with default allocator
using PSM =
  j2735_v2x_msgs::msg::PSM_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PSM_<ContainerAllocator>::HAS_ACCEL_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PSM_<ContainerAllocator>::HAS_PATH_HISTORY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PSM_<ContainerAllocator>::HAS_PATH_PREDICTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PSM_<ContainerAllocator>::HAS_PROPULSION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PSM_<ContainerAllocator>::HAS_USE_STATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PSM_<ContainerAllocator>::HAS_CROSS_REQUEST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PSM_<ContainerAllocator>::HAS_CROSS_STATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PSM_<ContainerAllocator>::HAS_CLUSTER_SIZE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PSM_<ContainerAllocator>::HAS_CLUSTER_RADIUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PSM_<ContainerAllocator>::HAS_EVENT_RESPONDER_TYPE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PSM_<ContainerAllocator>::HAS_ACTIVITY_TYPE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PSM_<ContainerAllocator>::HAS_ACTIVITY_SUB_TYPE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PSM_<ContainerAllocator>::HAS_ASSIST_TYPE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PSM_<ContainerAllocator>::HAS_SIZING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PSM_<ContainerAllocator>::HAS_ATTACHMENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PSM_<ContainerAllocator>::HAS_ATTACHMENT_RADIUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PSM_<ContainerAllocator>::HAS_ANIMAL_TYPE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PSM_<ContainerAllocator>::HAS_REGIONAL_EXTENSION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PSM__STRUCT_HPP_
