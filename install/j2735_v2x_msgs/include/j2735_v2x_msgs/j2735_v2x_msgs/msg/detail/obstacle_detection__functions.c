// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/ObstacleDetection.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/obstacle_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ob_dist`
#include "j2735_v2x_msgs/msg/detail/obstacle_distance__functions.h"
// Member `ob_direct`
#include "j2735_v2x_msgs/msg/detail/obstacle_direction__functions.h"
// Member `date_time`
#include "j2735_v2x_msgs/msg/detail/d_date_time__functions.h"
// Member `description`
#include "j2735_v2x_msgs/msg/detail/iti_scodes__functions.h"
// Member `location_details`
#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__functions.h"
// Member `vert_event`
#include "j2735_v2x_msgs/msg/detail/vertical_acceleration_threshold__functions.h"

bool
j2735_v2x_msgs__msg__ObstacleDetection__init(j2735_v2x_msgs__msg__ObstacleDetection * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // ob_dist
  if (!j2735_v2x_msgs__msg__ObstacleDistance__init(&msg->ob_dist)) {
    j2735_v2x_msgs__msg__ObstacleDetection__fini(msg);
    return false;
  }
  // ob_direct
  if (!j2735_v2x_msgs__msg__ObstacleDirection__init(&msg->ob_direct)) {
    j2735_v2x_msgs__msg__ObstacleDetection__fini(msg);
    return false;
  }
  // date_time
  if (!j2735_v2x_msgs__msg__DDateTime__init(&msg->date_time)) {
    j2735_v2x_msgs__msg__ObstacleDetection__fini(msg);
    return false;
  }
  // description
  if (!j2735_v2x_msgs__msg__ITIScodes__init(&msg->description)) {
    j2735_v2x_msgs__msg__ObstacleDetection__fini(msg);
    return false;
  }
  // location_details
  if (!j2735_v2x_msgs__msg__ITISGenericLocations__init(&msg->location_details)) {
    j2735_v2x_msgs__msg__ObstacleDetection__fini(msg);
    return false;
  }
  // vert_event
  if (!j2735_v2x_msgs__msg__VerticalAccelerationThreshold__init(&msg->vert_event)) {
    j2735_v2x_msgs__msg__ObstacleDetection__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__ObstacleDetection__fini(j2735_v2x_msgs__msg__ObstacleDetection * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // ob_dist
  j2735_v2x_msgs__msg__ObstacleDistance__fini(&msg->ob_dist);
  // ob_direct
  j2735_v2x_msgs__msg__ObstacleDirection__fini(&msg->ob_direct);
  // date_time
  j2735_v2x_msgs__msg__DDateTime__fini(&msg->date_time);
  // description
  j2735_v2x_msgs__msg__ITIScodes__fini(&msg->description);
  // location_details
  j2735_v2x_msgs__msg__ITISGenericLocations__fini(&msg->location_details);
  // vert_event
  j2735_v2x_msgs__msg__VerticalAccelerationThreshold__fini(&msg->vert_event);
}

bool
j2735_v2x_msgs__msg__ObstacleDetection__are_equal(const j2735_v2x_msgs__msg__ObstacleDetection * lhs, const j2735_v2x_msgs__msg__ObstacleDetection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // ob_dist
  if (!j2735_v2x_msgs__msg__ObstacleDistance__are_equal(
      &(lhs->ob_dist), &(rhs->ob_dist)))
  {
    return false;
  }
  // ob_direct
  if (!j2735_v2x_msgs__msg__ObstacleDirection__are_equal(
      &(lhs->ob_direct), &(rhs->ob_direct)))
  {
    return false;
  }
  // date_time
  if (!j2735_v2x_msgs__msg__DDateTime__are_equal(
      &(lhs->date_time), &(rhs->date_time)))
  {
    return false;
  }
  // description
  if (!j2735_v2x_msgs__msg__ITIScodes__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // location_details
  if (!j2735_v2x_msgs__msg__ITISGenericLocations__are_equal(
      &(lhs->location_details), &(rhs->location_details)))
  {
    return false;
  }
  // vert_event
  if (!j2735_v2x_msgs__msg__VerticalAccelerationThreshold__are_equal(
      &(lhs->vert_event), &(rhs->vert_event)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__ObstacleDetection__copy(
  const j2735_v2x_msgs__msg__ObstacleDetection * input,
  j2735_v2x_msgs__msg__ObstacleDetection * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // ob_dist
  if (!j2735_v2x_msgs__msg__ObstacleDistance__copy(
      &(input->ob_dist), &(output->ob_dist)))
  {
    return false;
  }
  // ob_direct
  if (!j2735_v2x_msgs__msg__ObstacleDirection__copy(
      &(input->ob_direct), &(output->ob_direct)))
  {
    return false;
  }
  // date_time
  if (!j2735_v2x_msgs__msg__DDateTime__copy(
      &(input->date_time), &(output->date_time)))
  {
    return false;
  }
  // description
  if (!j2735_v2x_msgs__msg__ITIScodes__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // location_details
  if (!j2735_v2x_msgs__msg__ITISGenericLocations__copy(
      &(input->location_details), &(output->location_details)))
  {
    return false;
  }
  // vert_event
  if (!j2735_v2x_msgs__msg__VerticalAccelerationThreshold__copy(
      &(input->vert_event), &(output->vert_event)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__ObstacleDetection *
j2735_v2x_msgs__msg__ObstacleDetection__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__ObstacleDetection * msg = (j2735_v2x_msgs__msg__ObstacleDetection *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__ObstacleDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__ObstacleDetection));
  bool success = j2735_v2x_msgs__msg__ObstacleDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__ObstacleDetection__destroy(j2735_v2x_msgs__msg__ObstacleDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__ObstacleDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__ObstacleDetection__Sequence__init(j2735_v2x_msgs__msg__ObstacleDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__ObstacleDetection * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__ObstacleDetection *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__ObstacleDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__ObstacleDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__ObstacleDetection__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__ObstacleDetection__Sequence__fini(j2735_v2x_msgs__msg__ObstacleDetection__Sequence * array)
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
      j2735_v2x_msgs__msg__ObstacleDetection__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__ObstacleDetection__Sequence *
j2735_v2x_msgs__msg__ObstacleDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__ObstacleDetection__Sequence * array = (j2735_v2x_msgs__msg__ObstacleDetection__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__ObstacleDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__ObstacleDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__ObstacleDetection__Sequence__destroy(j2735_v2x_msgs__msg__ObstacleDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__ObstacleDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__ObstacleDetection__Sequence__are_equal(const j2735_v2x_msgs__msg__ObstacleDetection__Sequence * lhs, const j2735_v2x_msgs__msg__ObstacleDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__ObstacleDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__ObstacleDetection__Sequence__copy(
  const j2735_v2x_msgs__msg__ObstacleDetection__Sequence * input,
  j2735_v2x_msgs__msg__ObstacleDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__ObstacleDetection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__ObstacleDetection * data =
      (j2735_v2x_msgs__msg__ObstacleDetection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__ObstacleDetection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__ObstacleDetection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__ObstacleDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
