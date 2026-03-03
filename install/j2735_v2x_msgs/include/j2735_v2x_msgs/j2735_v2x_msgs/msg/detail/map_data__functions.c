// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/MapData.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/map_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `layer_type`
#include "j2735_v2x_msgs/msg/detail/layer_type__functions.h"
// Member `intersections`
#include "j2735_v2x_msgs/msg/detail/intersection_geometry__functions.h"
// Member `road_segments`
#include "j2735_v2x_msgs/msg/detail/road_segment_list__functions.h"
// Member `data_parameters`
#include "j2735_v2x_msgs/msg/detail/data_parameters__functions.h"
// Member `restriction_list`
#include "j2735_v2x_msgs/msg/detail/restriction_class_list__functions.h"

bool
j2735_v2x_msgs__msg__MapData__init(j2735_v2x_msgs__msg__MapData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    j2735_v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // time_stamp
  // time_stamp_exists
  // msg_issue_revision
  // layer_type
  if (!j2735_v2x_msgs__msg__LayerType__init(&msg->layer_type)) {
    j2735_v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // layer_id
  // layer_id_exists
  // intersections
  if (!j2735_v2x_msgs__msg__IntersectionGeometry__Sequence__init(&msg->intersections, 0)) {
    j2735_v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // intersections_exists
  // road_segments
  if (!j2735_v2x_msgs__msg__RoadSegmentList__init(&msg->road_segments)) {
    j2735_v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // road_segments_exists
  // data_parameters
  if (!j2735_v2x_msgs__msg__DataParameters__init(&msg->data_parameters)) {
    j2735_v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // data_parameters_exists
  // restriction_list
  if (!j2735_v2x_msgs__msg__RestrictionClassList__init(&msg->restriction_list)) {
    j2735_v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // restriction_list_exists
  return true;
}

void
j2735_v2x_msgs__msg__MapData__fini(j2735_v2x_msgs__msg__MapData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // time_stamp
  // time_stamp_exists
  // msg_issue_revision
  // layer_type
  j2735_v2x_msgs__msg__LayerType__fini(&msg->layer_type);
  // layer_id
  // layer_id_exists
  // intersections
  j2735_v2x_msgs__msg__IntersectionGeometry__Sequence__fini(&msg->intersections);
  // intersections_exists
  // road_segments
  j2735_v2x_msgs__msg__RoadSegmentList__fini(&msg->road_segments);
  // road_segments_exists
  // data_parameters
  j2735_v2x_msgs__msg__DataParameters__fini(&msg->data_parameters);
  // data_parameters_exists
  // restriction_list
  j2735_v2x_msgs__msg__RestrictionClassList__fini(&msg->restriction_list);
  // restriction_list_exists
}

bool
j2735_v2x_msgs__msg__MapData__are_equal(const j2735_v2x_msgs__msg__MapData * lhs, const j2735_v2x_msgs__msg__MapData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // time_stamp
  if (lhs->time_stamp != rhs->time_stamp) {
    return false;
  }
  // time_stamp_exists
  if (lhs->time_stamp_exists != rhs->time_stamp_exists) {
    return false;
  }
  // msg_issue_revision
  if (lhs->msg_issue_revision != rhs->msg_issue_revision) {
    return false;
  }
  // layer_type
  if (!j2735_v2x_msgs__msg__LayerType__are_equal(
      &(lhs->layer_type), &(rhs->layer_type)))
  {
    return false;
  }
  // layer_id
  if (lhs->layer_id != rhs->layer_id) {
    return false;
  }
  // layer_id_exists
  if (lhs->layer_id_exists != rhs->layer_id_exists) {
    return false;
  }
  // intersections
  if (!j2735_v2x_msgs__msg__IntersectionGeometry__Sequence__are_equal(
      &(lhs->intersections), &(rhs->intersections)))
  {
    return false;
  }
  // intersections_exists
  if (lhs->intersections_exists != rhs->intersections_exists) {
    return false;
  }
  // road_segments
  if (!j2735_v2x_msgs__msg__RoadSegmentList__are_equal(
      &(lhs->road_segments), &(rhs->road_segments)))
  {
    return false;
  }
  // road_segments_exists
  if (lhs->road_segments_exists != rhs->road_segments_exists) {
    return false;
  }
  // data_parameters
  if (!j2735_v2x_msgs__msg__DataParameters__are_equal(
      &(lhs->data_parameters), &(rhs->data_parameters)))
  {
    return false;
  }
  // data_parameters_exists
  if (lhs->data_parameters_exists != rhs->data_parameters_exists) {
    return false;
  }
  // restriction_list
  if (!j2735_v2x_msgs__msg__RestrictionClassList__are_equal(
      &(lhs->restriction_list), &(rhs->restriction_list)))
  {
    return false;
  }
  // restriction_list_exists
  if (lhs->restriction_list_exists != rhs->restriction_list_exists) {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__MapData__copy(
  const j2735_v2x_msgs__msg__MapData * input,
  j2735_v2x_msgs__msg__MapData * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // time_stamp
  output->time_stamp = input->time_stamp;
  // time_stamp_exists
  output->time_stamp_exists = input->time_stamp_exists;
  // msg_issue_revision
  output->msg_issue_revision = input->msg_issue_revision;
  // layer_type
  if (!j2735_v2x_msgs__msg__LayerType__copy(
      &(input->layer_type), &(output->layer_type)))
  {
    return false;
  }
  // layer_id
  output->layer_id = input->layer_id;
  // layer_id_exists
  output->layer_id_exists = input->layer_id_exists;
  // intersections
  if (!j2735_v2x_msgs__msg__IntersectionGeometry__Sequence__copy(
      &(input->intersections), &(output->intersections)))
  {
    return false;
  }
  // intersections_exists
  output->intersections_exists = input->intersections_exists;
  // road_segments
  if (!j2735_v2x_msgs__msg__RoadSegmentList__copy(
      &(input->road_segments), &(output->road_segments)))
  {
    return false;
  }
  // road_segments_exists
  output->road_segments_exists = input->road_segments_exists;
  // data_parameters
  if (!j2735_v2x_msgs__msg__DataParameters__copy(
      &(input->data_parameters), &(output->data_parameters)))
  {
    return false;
  }
  // data_parameters_exists
  output->data_parameters_exists = input->data_parameters_exists;
  // restriction_list
  if (!j2735_v2x_msgs__msg__RestrictionClassList__copy(
      &(input->restriction_list), &(output->restriction_list)))
  {
    return false;
  }
  // restriction_list_exists
  output->restriction_list_exists = input->restriction_list_exists;
  return true;
}

j2735_v2x_msgs__msg__MapData *
j2735_v2x_msgs__msg__MapData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__MapData * msg = (j2735_v2x_msgs__msg__MapData *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__MapData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__MapData));
  bool success = j2735_v2x_msgs__msg__MapData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__MapData__destroy(j2735_v2x_msgs__msg__MapData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__MapData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__MapData__Sequence__init(j2735_v2x_msgs__msg__MapData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__MapData * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__MapData *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__MapData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__MapData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__MapData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
j2735_v2x_msgs__msg__MapData__Sequence__fini(j2735_v2x_msgs__msg__MapData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      j2735_v2x_msgs__msg__MapData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

j2735_v2x_msgs__msg__MapData__Sequence *
j2735_v2x_msgs__msg__MapData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__MapData__Sequence * array = (j2735_v2x_msgs__msg__MapData__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__MapData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__MapData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__MapData__Sequence__destroy(j2735_v2x_msgs__msg__MapData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__MapData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__MapData__Sequence__are_equal(const j2735_v2x_msgs__msg__MapData__Sequence * lhs, const j2735_v2x_msgs__msg__MapData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__MapData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__MapData__Sequence__copy(
  const j2735_v2x_msgs__msg__MapData__Sequence * input,
  j2735_v2x_msgs__msg__MapData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__MapData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__MapData * data =
      (j2735_v2x_msgs__msg__MapData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__MapData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__MapData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__MapData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
