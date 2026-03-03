// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/TrailerUnitDescription.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `is_dolly`
#include "j2735_v2x_msgs/msg/detail/is_dolly__functions.h"
// Member `width`
#include "j2735_v2x_msgs/msg/detail/vehicle_width__functions.h"
// Member `length`
#include "j2735_v2x_msgs/msg/detail/vehicle_length__functions.h"
// Member `height`
// Member `center_of_gravity`
#include "j2735_v2x_msgs/msg/detail/vehicle_height__functions.h"
// Member `mass`
#include "j2735_v2x_msgs/msg/detail/trailer_mass__functions.h"
// Member `bumper_heights`
#include "j2735_v2x_msgs/msg/detail/bumper_heights__functions.h"
// Member `front_pivot`
// Member `rear_pivot`
#include "j2735_v2x_msgs/msg/detail/pivot_point_description__functions.h"
// Member `rear_wheel_offset`
#include "j2735_v2x_msgs/msg/detail/offset_b12__functions.h"
// Member `position_offset`
#include "j2735_v2x_msgs/msg/detail/node_xy24b__functions.h"
// Member `elevation_offset`
#include "j2735_v2x_msgs/msg/detail/vert_offset_b07__functions.h"
// Member `crumb_data`
#include "j2735_v2x_msgs/msg/detail/trailer_history_point_list__functions.h"

bool
j2735_v2x_msgs__msg__TrailerUnitDescription__init(j2735_v2x_msgs__msg__TrailerUnitDescription * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // is_dolly
  if (!j2735_v2x_msgs__msg__IsDolly__init(&msg->is_dolly)) {
    j2735_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // width
  if (!j2735_v2x_msgs__msg__VehicleWidth__init(&msg->width)) {
    j2735_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // length
  if (!j2735_v2x_msgs__msg__VehicleLength__init(&msg->length)) {
    j2735_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // height
  if (!j2735_v2x_msgs__msg__VehicleHeight__init(&msg->height)) {
    j2735_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // mass
  if (!j2735_v2x_msgs__msg__TrailerMass__init(&msg->mass)) {
    j2735_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // bumper_heights
  if (!j2735_v2x_msgs__msg__BumperHeights__init(&msg->bumper_heights)) {
    j2735_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // center_of_gravity
  if (!j2735_v2x_msgs__msg__VehicleHeight__init(&msg->center_of_gravity)) {
    j2735_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // front_pivot
  if (!j2735_v2x_msgs__msg__PivotPointDescription__init(&msg->front_pivot)) {
    j2735_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // rear_pivot
  if (!j2735_v2x_msgs__msg__PivotPointDescription__init(&msg->rear_pivot)) {
    j2735_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // rear_wheel_offset
  if (!j2735_v2x_msgs__msg__OffsetB12__init(&msg->rear_wheel_offset)) {
    j2735_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // position_offset
  if (!j2735_v2x_msgs__msg__NodeXY24b__init(&msg->position_offset)) {
    j2735_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // elevation_offset
  if (!j2735_v2x_msgs__msg__VertOffsetB07__init(&msg->elevation_offset)) {
    j2735_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // crumb_data
  if (!j2735_v2x_msgs__msg__TrailerHistoryPointList__init(&msg->crumb_data)) {
    j2735_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__TrailerUnitDescription__fini(j2735_v2x_msgs__msg__TrailerUnitDescription * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // is_dolly
  j2735_v2x_msgs__msg__IsDolly__fini(&msg->is_dolly);
  // width
  j2735_v2x_msgs__msg__VehicleWidth__fini(&msg->width);
  // length
  j2735_v2x_msgs__msg__VehicleLength__fini(&msg->length);
  // height
  j2735_v2x_msgs__msg__VehicleHeight__fini(&msg->height);
  // mass
  j2735_v2x_msgs__msg__TrailerMass__fini(&msg->mass);
  // bumper_heights
  j2735_v2x_msgs__msg__BumperHeights__fini(&msg->bumper_heights);
  // center_of_gravity
  j2735_v2x_msgs__msg__VehicleHeight__fini(&msg->center_of_gravity);
  // front_pivot
  j2735_v2x_msgs__msg__PivotPointDescription__fini(&msg->front_pivot);
  // rear_pivot
  j2735_v2x_msgs__msg__PivotPointDescription__fini(&msg->rear_pivot);
  // rear_wheel_offset
  j2735_v2x_msgs__msg__OffsetB12__fini(&msg->rear_wheel_offset);
  // position_offset
  j2735_v2x_msgs__msg__NodeXY24b__fini(&msg->position_offset);
  // elevation_offset
  j2735_v2x_msgs__msg__VertOffsetB07__fini(&msg->elevation_offset);
  // crumb_data
  j2735_v2x_msgs__msg__TrailerHistoryPointList__fini(&msg->crumb_data);
}

bool
j2735_v2x_msgs__msg__TrailerUnitDescription__are_equal(const j2735_v2x_msgs__msg__TrailerUnitDescription * lhs, const j2735_v2x_msgs__msg__TrailerUnitDescription * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // is_dolly
  if (!j2735_v2x_msgs__msg__IsDolly__are_equal(
      &(lhs->is_dolly), &(rhs->is_dolly)))
  {
    return false;
  }
  // width
  if (!j2735_v2x_msgs__msg__VehicleWidth__are_equal(
      &(lhs->width), &(rhs->width)))
  {
    return false;
  }
  // length
  if (!j2735_v2x_msgs__msg__VehicleLength__are_equal(
      &(lhs->length), &(rhs->length)))
  {
    return false;
  }
  // height
  if (!j2735_v2x_msgs__msg__VehicleHeight__are_equal(
      &(lhs->height), &(rhs->height)))
  {
    return false;
  }
  // mass
  if (!j2735_v2x_msgs__msg__TrailerMass__are_equal(
      &(lhs->mass), &(rhs->mass)))
  {
    return false;
  }
  // bumper_heights
  if (!j2735_v2x_msgs__msg__BumperHeights__are_equal(
      &(lhs->bumper_heights), &(rhs->bumper_heights)))
  {
    return false;
  }
  // center_of_gravity
  if (!j2735_v2x_msgs__msg__VehicleHeight__are_equal(
      &(lhs->center_of_gravity), &(rhs->center_of_gravity)))
  {
    return false;
  }
  // front_pivot
  if (!j2735_v2x_msgs__msg__PivotPointDescription__are_equal(
      &(lhs->front_pivot), &(rhs->front_pivot)))
  {
    return false;
  }
  // rear_pivot
  if (!j2735_v2x_msgs__msg__PivotPointDescription__are_equal(
      &(lhs->rear_pivot), &(rhs->rear_pivot)))
  {
    return false;
  }
  // rear_wheel_offset
  if (!j2735_v2x_msgs__msg__OffsetB12__are_equal(
      &(lhs->rear_wheel_offset), &(rhs->rear_wheel_offset)))
  {
    return false;
  }
  // position_offset
  if (!j2735_v2x_msgs__msg__NodeXY24b__are_equal(
      &(lhs->position_offset), &(rhs->position_offset)))
  {
    return false;
  }
  // elevation_offset
  if (!j2735_v2x_msgs__msg__VertOffsetB07__are_equal(
      &(lhs->elevation_offset), &(rhs->elevation_offset)))
  {
    return false;
  }
  // crumb_data
  if (!j2735_v2x_msgs__msg__TrailerHistoryPointList__are_equal(
      &(lhs->crumb_data), &(rhs->crumb_data)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__TrailerUnitDescription__copy(
  const j2735_v2x_msgs__msg__TrailerUnitDescription * input,
  j2735_v2x_msgs__msg__TrailerUnitDescription * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // is_dolly
  if (!j2735_v2x_msgs__msg__IsDolly__copy(
      &(input->is_dolly), &(output->is_dolly)))
  {
    return false;
  }
  // width
  if (!j2735_v2x_msgs__msg__VehicleWidth__copy(
      &(input->width), &(output->width)))
  {
    return false;
  }
  // length
  if (!j2735_v2x_msgs__msg__VehicleLength__copy(
      &(input->length), &(output->length)))
  {
    return false;
  }
  // height
  if (!j2735_v2x_msgs__msg__VehicleHeight__copy(
      &(input->height), &(output->height)))
  {
    return false;
  }
  // mass
  if (!j2735_v2x_msgs__msg__TrailerMass__copy(
      &(input->mass), &(output->mass)))
  {
    return false;
  }
  // bumper_heights
  if (!j2735_v2x_msgs__msg__BumperHeights__copy(
      &(input->bumper_heights), &(output->bumper_heights)))
  {
    return false;
  }
  // center_of_gravity
  if (!j2735_v2x_msgs__msg__VehicleHeight__copy(
      &(input->center_of_gravity), &(output->center_of_gravity)))
  {
    return false;
  }
  // front_pivot
  if (!j2735_v2x_msgs__msg__PivotPointDescription__copy(
      &(input->front_pivot), &(output->front_pivot)))
  {
    return false;
  }
  // rear_pivot
  if (!j2735_v2x_msgs__msg__PivotPointDescription__copy(
      &(input->rear_pivot), &(output->rear_pivot)))
  {
    return false;
  }
  // rear_wheel_offset
  if (!j2735_v2x_msgs__msg__OffsetB12__copy(
      &(input->rear_wheel_offset), &(output->rear_wheel_offset)))
  {
    return false;
  }
  // position_offset
  if (!j2735_v2x_msgs__msg__NodeXY24b__copy(
      &(input->position_offset), &(output->position_offset)))
  {
    return false;
  }
  // elevation_offset
  if (!j2735_v2x_msgs__msg__VertOffsetB07__copy(
      &(input->elevation_offset), &(output->elevation_offset)))
  {
    return false;
  }
  // crumb_data
  if (!j2735_v2x_msgs__msg__TrailerHistoryPointList__copy(
      &(input->crumb_data), &(output->crumb_data)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__TrailerUnitDescription *
j2735_v2x_msgs__msg__TrailerUnitDescription__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrailerUnitDescription * msg = (j2735_v2x_msgs__msg__TrailerUnitDescription *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__TrailerUnitDescription), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__TrailerUnitDescription));
  bool success = j2735_v2x_msgs__msg__TrailerUnitDescription__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__TrailerUnitDescription__destroy(j2735_v2x_msgs__msg__TrailerUnitDescription * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence__init(j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrailerUnitDescription * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__TrailerUnitDescription *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__TrailerUnitDescription), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__TrailerUnitDescription__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__TrailerUnitDescription__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence__fini(j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence * array)
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
      j2735_v2x_msgs__msg__TrailerUnitDescription__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence *
j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence * array = (j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence__destroy(j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence__are_equal(const j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence * lhs, const j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__TrailerUnitDescription__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence__copy(
  const j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence * input,
  j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__TrailerUnitDescription);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__TrailerUnitDescription * data =
      (j2735_v2x_msgs__msg__TrailerUnitDescription *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__TrailerUnitDescription__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__TrailerUnitDescription__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__TrailerUnitDescription__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
