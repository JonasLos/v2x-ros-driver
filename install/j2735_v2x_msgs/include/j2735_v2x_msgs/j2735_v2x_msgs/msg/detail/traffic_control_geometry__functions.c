// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlGeometry.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/traffic_control_geometry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `proj`
// Member `datum`
#include "rosidl_runtime_c/string_functions.h"
// Member `nodes`
#include "j2735_v2x_msgs/msg/detail/path_node__functions.h"

bool
j2735_v2x_msgs__msg__TrafficControlGeometry__init(j2735_v2x_msgs__msg__TrafficControlGeometry * msg)
{
  if (!msg) {
    return false;
  }
  // proj
  if (!rosidl_runtime_c__String__init(&msg->proj)) {
    j2735_v2x_msgs__msg__TrafficControlGeometry__fini(msg);
    return false;
  }
  // datum
  if (!rosidl_runtime_c__String__init(&msg->datum)) {
    j2735_v2x_msgs__msg__TrafficControlGeometry__fini(msg);
    return false;
  }
  // reftime
  // reflon
  // reflat
  // refelv
  // heading
  // nodes
  if (!j2735_v2x_msgs__msg__PathNode__Sequence__init(&msg->nodes, 0)) {
    j2735_v2x_msgs__msg__TrafficControlGeometry__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__TrafficControlGeometry__fini(j2735_v2x_msgs__msg__TrafficControlGeometry * msg)
{
  if (!msg) {
    return;
  }
  // proj
  rosidl_runtime_c__String__fini(&msg->proj);
  // datum
  rosidl_runtime_c__String__fini(&msg->datum);
  // reftime
  // reflon
  // reflat
  // refelv
  // heading
  // nodes
  j2735_v2x_msgs__msg__PathNode__Sequence__fini(&msg->nodes);
}

bool
j2735_v2x_msgs__msg__TrafficControlGeometry__are_equal(const j2735_v2x_msgs__msg__TrafficControlGeometry * lhs, const j2735_v2x_msgs__msg__TrafficControlGeometry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // proj
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->proj), &(rhs->proj)))
  {
    return false;
  }
  // datum
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->datum), &(rhs->datum)))
  {
    return false;
  }
  // reftime
  if (lhs->reftime != rhs->reftime) {
    return false;
  }
  // reflon
  if (lhs->reflon != rhs->reflon) {
    return false;
  }
  // reflat
  if (lhs->reflat != rhs->reflat) {
    return false;
  }
  // refelv
  if (lhs->refelv != rhs->refelv) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // nodes
  if (!j2735_v2x_msgs__msg__PathNode__Sequence__are_equal(
      &(lhs->nodes), &(rhs->nodes)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__TrafficControlGeometry__copy(
  const j2735_v2x_msgs__msg__TrafficControlGeometry * input,
  j2735_v2x_msgs__msg__TrafficControlGeometry * output)
{
  if (!input || !output) {
    return false;
  }
  // proj
  if (!rosidl_runtime_c__String__copy(
      &(input->proj), &(output->proj)))
  {
    return false;
  }
  // datum
  if (!rosidl_runtime_c__String__copy(
      &(input->datum), &(output->datum)))
  {
    return false;
  }
  // reftime
  output->reftime = input->reftime;
  // reflon
  output->reflon = input->reflon;
  // reflat
  output->reflat = input->reflat;
  // refelv
  output->refelv = input->refelv;
  // heading
  output->heading = input->heading;
  // nodes
  if (!j2735_v2x_msgs__msg__PathNode__Sequence__copy(
      &(input->nodes), &(output->nodes)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__TrafficControlGeometry *
j2735_v2x_msgs__msg__TrafficControlGeometry__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrafficControlGeometry * msg = (j2735_v2x_msgs__msg__TrafficControlGeometry *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__TrafficControlGeometry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__TrafficControlGeometry));
  bool success = j2735_v2x_msgs__msg__TrafficControlGeometry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__TrafficControlGeometry__destroy(j2735_v2x_msgs__msg__TrafficControlGeometry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__TrafficControlGeometry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence__init(j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrafficControlGeometry * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__TrafficControlGeometry *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__TrafficControlGeometry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__TrafficControlGeometry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__TrafficControlGeometry__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence__fini(j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence * array)
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
      j2735_v2x_msgs__msg__TrafficControlGeometry__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence *
j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence * array = (j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence__destroy(j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence__are_equal(const j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence * lhs, const j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__TrafficControlGeometry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence__copy(
  const j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence * input,
  j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__TrafficControlGeometry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__TrafficControlGeometry * data =
      (j2735_v2x_msgs__msg__TrafficControlGeometry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__TrafficControlGeometry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__TrafficControlGeometry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__TrafficControlGeometry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
