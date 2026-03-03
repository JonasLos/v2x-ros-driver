// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_msgs:srv/ReleaseIndicatorControl.idl
// generated code does not contain a copyright notice
#include "carma_msgs/srv/detail/release_indicator_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `ind_list`
#include "carma_msgs/msg/detail/light_bar_indicator__functions.h"
// Member `cda_list`
#include "carma_msgs/msg/detail/light_bar_cda_type__functions.h"
// Member `requester_name`
#include "rosidl_runtime_c/string_functions.h"

bool
carma_msgs__srv__ReleaseIndicatorControl_Request__init(carma_msgs__srv__ReleaseIndicatorControl_Request * msg)
{
  if (!msg) {
    return false;
  }
  // ind_list
  if (!carma_msgs__msg__LightBarIndicator__Sequence__init(&msg->ind_list, 0)) {
    carma_msgs__srv__ReleaseIndicatorControl_Request__fini(msg);
    return false;
  }
  // cda_list
  if (!carma_msgs__msg__LightBarCDAType__Sequence__init(&msg->cda_list, 0)) {
    carma_msgs__srv__ReleaseIndicatorControl_Request__fini(msg);
    return false;
  }
  // requester_name
  if (!rosidl_runtime_c__String__init(&msg->requester_name)) {
    carma_msgs__srv__ReleaseIndicatorControl_Request__fini(msg);
    return false;
  }
  return true;
}

void
carma_msgs__srv__ReleaseIndicatorControl_Request__fini(carma_msgs__srv__ReleaseIndicatorControl_Request * msg)
{
  if (!msg) {
    return;
  }
  // ind_list
  carma_msgs__msg__LightBarIndicator__Sequence__fini(&msg->ind_list);
  // cda_list
  carma_msgs__msg__LightBarCDAType__Sequence__fini(&msg->cda_list);
  // requester_name
  rosidl_runtime_c__String__fini(&msg->requester_name);
}

bool
carma_msgs__srv__ReleaseIndicatorControl_Request__are_equal(const carma_msgs__srv__ReleaseIndicatorControl_Request * lhs, const carma_msgs__srv__ReleaseIndicatorControl_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ind_list
  if (!carma_msgs__msg__LightBarIndicator__Sequence__are_equal(
      &(lhs->ind_list), &(rhs->ind_list)))
  {
    return false;
  }
  // cda_list
  if (!carma_msgs__msg__LightBarCDAType__Sequence__are_equal(
      &(lhs->cda_list), &(rhs->cda_list)))
  {
    return false;
  }
  // requester_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->requester_name), &(rhs->requester_name)))
  {
    return false;
  }
  return true;
}

bool
carma_msgs__srv__ReleaseIndicatorControl_Request__copy(
  const carma_msgs__srv__ReleaseIndicatorControl_Request * input,
  carma_msgs__srv__ReleaseIndicatorControl_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // ind_list
  if (!carma_msgs__msg__LightBarIndicator__Sequence__copy(
      &(input->ind_list), &(output->ind_list)))
  {
    return false;
  }
  // cda_list
  if (!carma_msgs__msg__LightBarCDAType__Sequence__copy(
      &(input->cda_list), &(output->cda_list)))
  {
    return false;
  }
  // requester_name
  if (!rosidl_runtime_c__String__copy(
      &(input->requester_name), &(output->requester_name)))
  {
    return false;
  }
  return true;
}

carma_msgs__srv__ReleaseIndicatorControl_Request *
carma_msgs__srv__ReleaseIndicatorControl_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__ReleaseIndicatorControl_Request * msg = (carma_msgs__srv__ReleaseIndicatorControl_Request *)allocator.allocate(sizeof(carma_msgs__srv__ReleaseIndicatorControl_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_msgs__srv__ReleaseIndicatorControl_Request));
  bool success = carma_msgs__srv__ReleaseIndicatorControl_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_msgs__srv__ReleaseIndicatorControl_Request__destroy(carma_msgs__srv__ReleaseIndicatorControl_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_msgs__srv__ReleaseIndicatorControl_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence__init(carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__ReleaseIndicatorControl_Request * data = NULL;

  if (size) {
    data = (carma_msgs__srv__ReleaseIndicatorControl_Request *)allocator.zero_allocate(size, sizeof(carma_msgs__srv__ReleaseIndicatorControl_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_msgs__srv__ReleaseIndicatorControl_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_msgs__srv__ReleaseIndicatorControl_Request__fini(&data[i - 1]);
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
carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence__fini(carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence * array)
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
      carma_msgs__srv__ReleaseIndicatorControl_Request__fini(&array->data[i]);
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

carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence *
carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence * array = (carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence *)allocator.allocate(sizeof(carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence__destroy(carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence__are_equal(const carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence * lhs, const carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_msgs__srv__ReleaseIndicatorControl_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence__copy(
  const carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence * input,
  carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_msgs__srv__ReleaseIndicatorControl_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    carma_msgs__srv__ReleaseIndicatorControl_Request * data =
      (carma_msgs__srv__ReleaseIndicatorControl_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_msgs__srv__ReleaseIndicatorControl_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          carma_msgs__srv__ReleaseIndicatorControl_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_msgs__srv__ReleaseIndicatorControl_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
carma_msgs__srv__ReleaseIndicatorControl_Response__init(carma_msgs__srv__ReleaseIndicatorControl_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
carma_msgs__srv__ReleaseIndicatorControl_Response__fini(carma_msgs__srv__ReleaseIndicatorControl_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
carma_msgs__srv__ReleaseIndicatorControl_Response__are_equal(const carma_msgs__srv__ReleaseIndicatorControl_Response * lhs, const carma_msgs__srv__ReleaseIndicatorControl_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
carma_msgs__srv__ReleaseIndicatorControl_Response__copy(
  const carma_msgs__srv__ReleaseIndicatorControl_Response * input,
  carma_msgs__srv__ReleaseIndicatorControl_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

carma_msgs__srv__ReleaseIndicatorControl_Response *
carma_msgs__srv__ReleaseIndicatorControl_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__ReleaseIndicatorControl_Response * msg = (carma_msgs__srv__ReleaseIndicatorControl_Response *)allocator.allocate(sizeof(carma_msgs__srv__ReleaseIndicatorControl_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_msgs__srv__ReleaseIndicatorControl_Response));
  bool success = carma_msgs__srv__ReleaseIndicatorControl_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_msgs__srv__ReleaseIndicatorControl_Response__destroy(carma_msgs__srv__ReleaseIndicatorControl_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_msgs__srv__ReleaseIndicatorControl_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence__init(carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__ReleaseIndicatorControl_Response * data = NULL;

  if (size) {
    data = (carma_msgs__srv__ReleaseIndicatorControl_Response *)allocator.zero_allocate(size, sizeof(carma_msgs__srv__ReleaseIndicatorControl_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_msgs__srv__ReleaseIndicatorControl_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_msgs__srv__ReleaseIndicatorControl_Response__fini(&data[i - 1]);
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
carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence__fini(carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence * array)
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
      carma_msgs__srv__ReleaseIndicatorControl_Response__fini(&array->data[i]);
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

carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence *
carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence * array = (carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence *)allocator.allocate(sizeof(carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence__destroy(carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence__are_equal(const carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence * lhs, const carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_msgs__srv__ReleaseIndicatorControl_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence__copy(
  const carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence * input,
  carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_msgs__srv__ReleaseIndicatorControl_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    carma_msgs__srv__ReleaseIndicatorControl_Response * data =
      (carma_msgs__srv__ReleaseIndicatorControl_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_msgs__srv__ReleaseIndicatorControl_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          carma_msgs__srv__ReleaseIndicatorControl_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_msgs__srv__ReleaseIndicatorControl_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "carma_msgs/srv/detail/release_indicator_control__functions.h"

bool
carma_msgs__srv__ReleaseIndicatorControl_Event__init(carma_msgs__srv__ReleaseIndicatorControl_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    carma_msgs__srv__ReleaseIndicatorControl_Event__fini(msg);
    return false;
  }
  // request
  if (!carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence__init(&msg->request, 0)) {
    carma_msgs__srv__ReleaseIndicatorControl_Event__fini(msg);
    return false;
  }
  // response
  if (!carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence__init(&msg->response, 0)) {
    carma_msgs__srv__ReleaseIndicatorControl_Event__fini(msg);
    return false;
  }
  return true;
}

void
carma_msgs__srv__ReleaseIndicatorControl_Event__fini(carma_msgs__srv__ReleaseIndicatorControl_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence__fini(&msg->request);
  // response
  carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence__fini(&msg->response);
}

bool
carma_msgs__srv__ReleaseIndicatorControl_Event__are_equal(const carma_msgs__srv__ReleaseIndicatorControl_Event * lhs, const carma_msgs__srv__ReleaseIndicatorControl_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
carma_msgs__srv__ReleaseIndicatorControl_Event__copy(
  const carma_msgs__srv__ReleaseIndicatorControl_Event * input,
  carma_msgs__srv__ReleaseIndicatorControl_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

carma_msgs__srv__ReleaseIndicatorControl_Event *
carma_msgs__srv__ReleaseIndicatorControl_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__ReleaseIndicatorControl_Event * msg = (carma_msgs__srv__ReleaseIndicatorControl_Event *)allocator.allocate(sizeof(carma_msgs__srv__ReleaseIndicatorControl_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_msgs__srv__ReleaseIndicatorControl_Event));
  bool success = carma_msgs__srv__ReleaseIndicatorControl_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_msgs__srv__ReleaseIndicatorControl_Event__destroy(carma_msgs__srv__ReleaseIndicatorControl_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_msgs__srv__ReleaseIndicatorControl_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence__init(carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__ReleaseIndicatorControl_Event * data = NULL;

  if (size) {
    data = (carma_msgs__srv__ReleaseIndicatorControl_Event *)allocator.zero_allocate(size, sizeof(carma_msgs__srv__ReleaseIndicatorControl_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_msgs__srv__ReleaseIndicatorControl_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_msgs__srv__ReleaseIndicatorControl_Event__fini(&data[i - 1]);
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
carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence__fini(carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence * array)
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
      carma_msgs__srv__ReleaseIndicatorControl_Event__fini(&array->data[i]);
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

carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence *
carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence * array = (carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence *)allocator.allocate(sizeof(carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence__destroy(carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence__are_equal(const carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence * lhs, const carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_msgs__srv__ReleaseIndicatorControl_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence__copy(
  const carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence * input,
  carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_msgs__srv__ReleaseIndicatorControl_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    carma_msgs__srv__ReleaseIndicatorControl_Event * data =
      (carma_msgs__srv__ReleaseIndicatorControl_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_msgs__srv__ReleaseIndicatorControl_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          carma_msgs__srv__ReleaseIndicatorControl_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_msgs__srv__ReleaseIndicatorControl_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
