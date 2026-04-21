// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from raspbot_patrol:msg/PatrolStatus.idl
// generated code does not contain a copyright notice

#ifndef RASPBOT_PATROL__MSG__DETAIL__PATROL_STATUS__FUNCTIONS_H_
#define RASPBOT_PATROL__MSG__DETAIL__PATROL_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "raspbot_patrol/msg/rosidl_generator_c__visibility_control.h"

#include "raspbot_patrol/msg/detail/patrol_status__struct.h"

/// Initialize msg/PatrolStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * raspbot_patrol__msg__PatrolStatus
 * )) before or use
 * raspbot_patrol__msg__PatrolStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_raspbot_patrol
bool
raspbot_patrol__msg__PatrolStatus__init(raspbot_patrol__msg__PatrolStatus * msg);

/// Finalize msg/PatrolStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspbot_patrol
void
raspbot_patrol__msg__PatrolStatus__fini(raspbot_patrol__msg__PatrolStatus * msg);

/// Create msg/PatrolStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * raspbot_patrol__msg__PatrolStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspbot_patrol
raspbot_patrol__msg__PatrolStatus *
raspbot_patrol__msg__PatrolStatus__create();

/// Destroy msg/PatrolStatus message.
/**
 * It calls
 * raspbot_patrol__msg__PatrolStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspbot_patrol
void
raspbot_patrol__msg__PatrolStatus__destroy(raspbot_patrol__msg__PatrolStatus * msg);

/// Check for msg/PatrolStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspbot_patrol
bool
raspbot_patrol__msg__PatrolStatus__are_equal(const raspbot_patrol__msg__PatrolStatus * lhs, const raspbot_patrol__msg__PatrolStatus * rhs);

/// Copy a msg/PatrolStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspbot_patrol
bool
raspbot_patrol__msg__PatrolStatus__copy(
  const raspbot_patrol__msg__PatrolStatus * input,
  raspbot_patrol__msg__PatrolStatus * output);

/// Initialize array of msg/PatrolStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * raspbot_patrol__msg__PatrolStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspbot_patrol
bool
raspbot_patrol__msg__PatrolStatus__Sequence__init(raspbot_patrol__msg__PatrolStatus__Sequence * array, size_t size);

/// Finalize array of msg/PatrolStatus messages.
/**
 * It calls
 * raspbot_patrol__msg__PatrolStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspbot_patrol
void
raspbot_patrol__msg__PatrolStatus__Sequence__fini(raspbot_patrol__msg__PatrolStatus__Sequence * array);

/// Create array of msg/PatrolStatus messages.
/**
 * It allocates the memory for the array and calls
 * raspbot_patrol__msg__PatrolStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspbot_patrol
raspbot_patrol__msg__PatrolStatus__Sequence *
raspbot_patrol__msg__PatrolStatus__Sequence__create(size_t size);

/// Destroy array of msg/PatrolStatus messages.
/**
 * It calls
 * raspbot_patrol__msg__PatrolStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspbot_patrol
void
raspbot_patrol__msg__PatrolStatus__Sequence__destroy(raspbot_patrol__msg__PatrolStatus__Sequence * array);

/// Check for msg/PatrolStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspbot_patrol
bool
raspbot_patrol__msg__PatrolStatus__Sequence__are_equal(const raspbot_patrol__msg__PatrolStatus__Sequence * lhs, const raspbot_patrol__msg__PatrolStatus__Sequence * rhs);

/// Copy an array of msg/PatrolStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspbot_patrol
bool
raspbot_patrol__msg__PatrolStatus__Sequence__copy(
  const raspbot_patrol__msg__PatrolStatus__Sequence * input,
  raspbot_patrol__msg__PatrolStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RASPBOT_PATROL__MSG__DETAIL__PATROL_STATUS__FUNCTIONS_H_
