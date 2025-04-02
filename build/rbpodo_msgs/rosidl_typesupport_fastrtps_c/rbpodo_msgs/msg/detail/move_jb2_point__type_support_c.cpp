// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rbpodo_msgs:msg/MoveJb2Point.idl
// generated code does not contain a copyright notice
#include "rbpodo_msgs/msg/detail/move_jb2_point__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rbpodo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rbpodo_msgs/msg/detail/move_jb2_point__struct.h"
#include "rbpodo_msgs/msg/detail/move_jb2_point__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MoveJb2Point__ros_msg_type = rbpodo_msgs__msg__MoveJb2Point;

static bool _MoveJb2Point__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MoveJb2Point__ros_msg_type * ros_message = static_cast<const _MoveJb2Point__ros_msg_type *>(untyped_ros_message);
  // Field name: joint
  {
    size_t size = 6;
    auto array_ptr = ros_message->joint;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: acceleration
  {
    cdr << ros_message->acceleration;
  }

  // Field name: blending_value
  {
    cdr << ros_message->blending_value;
  }

  return true;
}

static bool _MoveJb2Point__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MoveJb2Point__ros_msg_type * ros_message = static_cast<_MoveJb2Point__ros_msg_type *>(untyped_ros_message);
  // Field name: joint
  {
    size_t size = 6;
    auto array_ptr = ros_message->joint;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: acceleration
  {
    cdr >> ros_message->acceleration;
  }

  // Field name: blending_value
  {
    cdr >> ros_message->blending_value;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rbpodo_msgs
size_t get_serialized_size_rbpodo_msgs__msg__MoveJb2Point(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MoveJb2Point__ros_msg_type * ros_message = static_cast<const _MoveJb2Point__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->joint;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration
  {
    size_t item_size = sizeof(ros_message->acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blending_value
  {
    size_t item_size = sizeof(ros_message->blending_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MoveJb2Point__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rbpodo_msgs__msg__MoveJb2Point(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rbpodo_msgs
size_t max_serialized_size_rbpodo_msgs__msg__MoveJb2Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: joint
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: blending_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rbpodo_msgs__msg__MoveJb2Point;
    is_plain =
      (
      offsetof(DataType, blending_value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MoveJb2Point__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rbpodo_msgs__msg__MoveJb2Point(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MoveJb2Point = {
  "rbpodo_msgs::msg",
  "MoveJb2Point",
  _MoveJb2Point__cdr_serialize,
  _MoveJb2Point__cdr_deserialize,
  _MoveJb2Point__get_serialized_size,
  _MoveJb2Point__max_serialized_size
};

static rosidl_message_type_support_t _MoveJb2Point__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MoveJb2Point,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rbpodo_msgs, msg, MoveJb2Point)() {
  return &_MoveJb2Point__type_support;
}

#if defined(__cplusplus)
}
#endif
