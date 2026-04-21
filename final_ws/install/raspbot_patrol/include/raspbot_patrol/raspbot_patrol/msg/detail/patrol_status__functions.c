// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raspbot_patrol:msg/PatrolStatus.idl
// generated code does not contain a copyright notice
#include "raspbot_patrol/msg/detail/patrol_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `patrol_state`
#include "rosidl_runtime_c/string_functions.h"

bool
raspbot_patrol__msg__PatrolStatus__init(raspbot_patrol__msg__PatrolStatus * msg)
{
  if (!msg) {
    return false;
  }
  // obstacle_distance
  // patrol_state
  if (!rosidl_runtime_c__String__init(&msg->patrol_state)) {
    raspbot_patrol__msg__PatrolStatus__fini(msg);
    return false;
  }
  // current_waypoint
  return true;
}

void
raspbot_patrol__msg__PatrolStatus__fini(raspbot_patrol__msg__PatrolStatus * msg)
{
  if (!msg) {
    return;
  }
  // obstacle_distance
  // patrol_state
  rosidl_runtime_c__String__fini(&msg->patrol_state);
  // current_waypoint
}

bool
raspbot_patrol__msg__PatrolStatus__are_equal(const raspbot_patrol__msg__PatrolStatus * lhs, const raspbot_patrol__msg__PatrolStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obstacle_distance
  if (lhs->obstacle_distance != rhs->obstacle_distance) {
    return false;
  }
  // patrol_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->patrol_state), &(rhs->patrol_state)))
  {
    return false;
  }
  // current_waypoint
  if (lhs->current_waypoint != rhs->current_waypoint) {
    return false;
  }
  return true;
}

bool
raspbot_patrol__msg__PatrolStatus__copy(
  const raspbot_patrol__msg__PatrolStatus * input,
  raspbot_patrol__msg__PatrolStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // obstacle_distance
  output->obstacle_distance = input->obstacle_distance;
  // patrol_state
  if (!rosidl_runtime_c__String__copy(
      &(input->patrol_state), &(output->patrol_state)))
  {
    return false;
  }
  // current_waypoint
  output->current_waypoint = input->current_waypoint;
  return true;
}

raspbot_patrol__msg__PatrolStatus *
raspbot_patrol__msg__PatrolStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__msg__PatrolStatus * msg = (raspbot_patrol__msg__PatrolStatus *)allocator.allocate(sizeof(raspbot_patrol__msg__PatrolStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspbot_patrol__msg__PatrolStatus));
  bool success = raspbot_patrol__msg__PatrolStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raspbot_patrol__msg__PatrolStatus__destroy(raspbot_patrol__msg__PatrolStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raspbot_patrol__msg__PatrolStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raspbot_patrol__msg__PatrolStatus__Sequence__init(raspbot_patrol__msg__PatrolStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__msg__PatrolStatus * data = NULL;

  if (size) {
    data = (raspbot_patrol__msg__PatrolStatus *)allocator.zero_allocate(size, sizeof(raspbot_patrol__msg__PatrolStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspbot_patrol__msg__PatrolStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspbot_patrol__msg__PatrolStatus__fini(&data[i - 1]);
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
raspbot_patrol__msg__PatrolStatus__Sequence__fini(raspbot_patrol__msg__PatrolStatus__Sequence * array)
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
      raspbot_patrol__msg__PatrolStatus__fini(&array->data[i]);
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

raspbot_patrol__msg__PatrolStatus__Sequence *
raspbot_patrol__msg__PatrolStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raspbot_patrol__msg__PatrolStatus__Sequence * array = (raspbot_patrol__msg__PatrolStatus__Sequence *)allocator.allocate(sizeof(raspbot_patrol__msg__PatrolStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raspbot_patrol__msg__PatrolStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raspbot_patrol__msg__PatrolStatus__Sequence__destroy(raspbot_patrol__msg__PatrolStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raspbot_patrol__msg__PatrolStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raspbot_patrol__msg__PatrolStatus__Sequence__are_equal(const raspbot_patrol__msg__PatrolStatus__Sequence * lhs, const raspbot_patrol__msg__PatrolStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raspbot_patrol__msg__PatrolStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raspbot_patrol__msg__PatrolStatus__Sequence__copy(
  const raspbot_patrol__msg__PatrolStatus__Sequence * input,
  raspbot_patrol__msg__PatrolStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raspbot_patrol__msg__PatrolStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raspbot_patrol__msg__PatrolStatus * data =
      (raspbot_patrol__msg__PatrolStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raspbot_patrol__msg__PatrolStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raspbot_patrol__msg__PatrolStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raspbot_patrol__msg__PatrolStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
