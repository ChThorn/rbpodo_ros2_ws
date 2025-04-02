// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rbpodo_msgs:msg/SystemState.idl
// generated code does not contain a copyright notice
#include "rbpodo_msgs/msg/detail/system_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rbpodo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rbpodo_msgs/msg/detail/system_state__struct.h"
#include "rbpodo_msgs/msg/detail/system_state__functions.h"
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


using _SystemState__ros_msg_type = rbpodo_msgs__msg__SystemState;

static bool _SystemState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SystemState__ros_msg_type * ros_message = static_cast<const _SystemState__ros_msg_type *>(untyped_ros_message);
  // Field name: time
  {
    cdr << ros_message->time;
  }

  // Field name: jnt_ref
  {
    size_t size = 6;
    auto array_ptr = ros_message->jnt_ref;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: jnt_ang
  {
    size_t size = 6;
    auto array_ptr = ros_message->jnt_ang;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: jnt_cur
  {
    size_t size = 6;
    auto array_ptr = ros_message->jnt_cur;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tcp_ref
  {
    size_t size = 6;
    auto array_ptr = ros_message->tcp_ref;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tcp_pos
  {
    size_t size = 6;
    auto array_ptr = ros_message->tcp_pos;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: analog_in
  {
    size_t size = 4;
    auto array_ptr = ros_message->analog_in;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: analog_out
  {
    size_t size = 4;
    auto array_ptr = ros_message->analog_out;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: digital_in
  {
    size_t size = 16;
    auto array_ptr = ros_message->digital_in;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: digital_out
  {
    size_t size = 16;
    auto array_ptr = ros_message->digital_out;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: jnt_temperature
  {
    size_t size = 6;
    auto array_ptr = ros_message->jnt_temperature;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: task_pc
  {
    cdr << ros_message->task_pc;
  }

  // Field name: task_repeat
  {
    cdr << ros_message->task_repeat;
  }

  // Field name: task_run_id
  {
    cdr << ros_message->task_run_id;
  }

  // Field name: task_run_num
  {
    cdr << ros_message->task_run_num;
  }

  // Field name: task_run_time
  {
    cdr << ros_message->task_run_time;
  }

  // Field name: task_state
  {
    cdr << ros_message->task_state;
  }

  // Field name: default_speed
  {
    cdr << ros_message->default_speed;
  }

  // Field name: robot_state
  {
    cdr << ros_message->robot_state;
  }

  // Field name: information_chunk_1
  {
    cdr << ros_message->information_chunk_1;
  }

  // Field name: jnt_info
  {
    size_t size = 6;
    auto array_ptr = ros_message->jnt_info;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: collision_detect_onoff
  {
    cdr << (ros_message->collision_detect_onoff ? true : false);
  }

  // Field name: is_freedrive_mode
  {
    cdr << (ros_message->is_freedrive_mode ? true : false);
  }

  // Field name: real_vs_simulation_mode
  {
    cdr << (ros_message->real_vs_simulation_mode ? true : false);
  }

  // Field name: init_state_info
  {
    cdr << ros_message->init_state_info;
  }

  // Field name: init_error
  {
    cdr << ros_message->init_error;
  }

  // Field name: tfb_analog_in
  {
    size_t size = 2;
    auto array_ptr = ros_message->tfb_analog_in;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tfb_digital_in
  {
    size_t size = 2;
    auto array_ptr = ros_message->tfb_digital_in;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tfb_digital_out
  {
    size_t size = 2;
    auto array_ptr = ros_message->tfb_digital_out;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tfb_voltage_out
  {
    cdr << ros_message->tfb_voltage_out;
  }

  // Field name: op_stat_collision_occur
  {
    cdr << (ros_message->op_stat_collision_occur ? true : false);
  }

  // Field name: op_stat_sos_flag
  {
    cdr << ros_message->op_stat_sos_flag;
  }

  // Field name: op_stat_self_collision
  {
    cdr << (ros_message->op_stat_self_collision ? true : false);
  }

  // Field name: op_stat_soft_estop_occur
  {
    cdr << (ros_message->op_stat_soft_estop_occur ? true : false);
  }

  // Field name: op_stat_ems_flag
  {
    cdr << ros_message->op_stat_ems_flag;
  }

  // Field name: information_chunk_2
  {
    cdr << ros_message->information_chunk_2;
  }

  // Field name: information_chunk_3
  {
    cdr << ros_message->information_chunk_3;
  }

  // Field name: inbox_trap_flag
  {
    size_t size = 2;
    auto array_ptr = ros_message->inbox_trap_flag;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: inbox_check_mode
  {
    size_t size = 2;
    auto array_ptr = ros_message->inbox_check_mode;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: eft
  {
    size_t size = 6;
    auto array_ptr = ros_message->eft;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: information_chunk_4
  {
    cdr << ros_message->information_chunk_4;
  }

  // Field name: extend_io1_analog_in
  {
    size_t size = 4;
    auto array_ptr = ros_message->extend_io1_analog_in;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: extend_io1_analog_out
  {
    size_t size = 4;
    auto array_ptr = ros_message->extend_io1_analog_out;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: extend_io1_digital_info
  {
    cdr << ros_message->extend_io1_digital_info;
  }

  // Field name: aa_joint_ref
  {
    size_t size = 6;
    auto array_ptr = ros_message->aa_joint_ref;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: safety_board_stat_info
  {
    cdr << ros_message->safety_board_stat_info;
  }

  return true;
}

static bool _SystemState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SystemState__ros_msg_type * ros_message = static_cast<_SystemState__ros_msg_type *>(untyped_ros_message);
  // Field name: time
  {
    cdr >> ros_message->time;
  }

  // Field name: jnt_ref
  {
    size_t size = 6;
    auto array_ptr = ros_message->jnt_ref;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: jnt_ang
  {
    size_t size = 6;
    auto array_ptr = ros_message->jnt_ang;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: jnt_cur
  {
    size_t size = 6;
    auto array_ptr = ros_message->jnt_cur;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tcp_ref
  {
    size_t size = 6;
    auto array_ptr = ros_message->tcp_ref;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tcp_pos
  {
    size_t size = 6;
    auto array_ptr = ros_message->tcp_pos;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: analog_in
  {
    size_t size = 4;
    auto array_ptr = ros_message->analog_in;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: analog_out
  {
    size_t size = 4;
    auto array_ptr = ros_message->analog_out;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: digital_in
  {
    size_t size = 16;
    auto array_ptr = ros_message->digital_in;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: digital_out
  {
    size_t size = 16;
    auto array_ptr = ros_message->digital_out;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: jnt_temperature
  {
    size_t size = 6;
    auto array_ptr = ros_message->jnt_temperature;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: task_pc
  {
    cdr >> ros_message->task_pc;
  }

  // Field name: task_repeat
  {
    cdr >> ros_message->task_repeat;
  }

  // Field name: task_run_id
  {
    cdr >> ros_message->task_run_id;
  }

  // Field name: task_run_num
  {
    cdr >> ros_message->task_run_num;
  }

  // Field name: task_run_time
  {
    cdr >> ros_message->task_run_time;
  }

  // Field name: task_state
  {
    cdr >> ros_message->task_state;
  }

  // Field name: default_speed
  {
    cdr >> ros_message->default_speed;
  }

  // Field name: robot_state
  {
    cdr >> ros_message->robot_state;
  }

  // Field name: information_chunk_1
  {
    cdr >> ros_message->information_chunk_1;
  }

  // Field name: jnt_info
  {
    size_t size = 6;
    auto array_ptr = ros_message->jnt_info;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: collision_detect_onoff
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->collision_detect_onoff = tmp ? true : false;
  }

  // Field name: is_freedrive_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_freedrive_mode = tmp ? true : false;
  }

  // Field name: real_vs_simulation_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->real_vs_simulation_mode = tmp ? true : false;
  }

  // Field name: init_state_info
  {
    cdr >> ros_message->init_state_info;
  }

  // Field name: init_error
  {
    cdr >> ros_message->init_error;
  }

  // Field name: tfb_analog_in
  {
    size_t size = 2;
    auto array_ptr = ros_message->tfb_analog_in;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tfb_digital_in
  {
    size_t size = 2;
    auto array_ptr = ros_message->tfb_digital_in;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: tfb_digital_out
  {
    size_t size = 2;
    auto array_ptr = ros_message->tfb_digital_out;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: tfb_voltage_out
  {
    cdr >> ros_message->tfb_voltage_out;
  }

  // Field name: op_stat_collision_occur
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->op_stat_collision_occur = tmp ? true : false;
  }

  // Field name: op_stat_sos_flag
  {
    cdr >> ros_message->op_stat_sos_flag;
  }

  // Field name: op_stat_self_collision
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->op_stat_self_collision = tmp ? true : false;
  }

  // Field name: op_stat_soft_estop_occur
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->op_stat_soft_estop_occur = tmp ? true : false;
  }

  // Field name: op_stat_ems_flag
  {
    cdr >> ros_message->op_stat_ems_flag;
  }

  // Field name: information_chunk_2
  {
    cdr >> ros_message->information_chunk_2;
  }

  // Field name: information_chunk_3
  {
    cdr >> ros_message->information_chunk_3;
  }

  // Field name: inbox_trap_flag
  {
    size_t size = 2;
    auto array_ptr = ros_message->inbox_trap_flag;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: inbox_check_mode
  {
    size_t size = 2;
    auto array_ptr = ros_message->inbox_check_mode;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: eft
  {
    size_t size = 6;
    auto array_ptr = ros_message->eft;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: information_chunk_4
  {
    cdr >> ros_message->information_chunk_4;
  }

  // Field name: extend_io1_analog_in
  {
    size_t size = 4;
    auto array_ptr = ros_message->extend_io1_analog_in;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: extend_io1_analog_out
  {
    size_t size = 4;
    auto array_ptr = ros_message->extend_io1_analog_out;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: extend_io1_digital_info
  {
    cdr >> ros_message->extend_io1_digital_info;
  }

  // Field name: aa_joint_ref
  {
    size_t size = 6;
    auto array_ptr = ros_message->aa_joint_ref;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: safety_board_stat_info
  {
    cdr >> ros_message->safety_board_stat_info;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rbpodo_msgs
size_t get_serialized_size_rbpodo_msgs__msg__SystemState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SystemState__ros_msg_type * ros_message = static_cast<const _SystemState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name time
  {
    size_t item_size = sizeof(ros_message->time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name jnt_ref
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->jnt_ref;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name jnt_ang
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->jnt_ang;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name jnt_cur
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->jnt_cur;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tcp_ref
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->tcp_ref;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tcp_pos
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->tcp_pos;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name analog_in
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->analog_in;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name analog_out
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->analog_out;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name digital_in
  {
    size_t array_size = 16;
    auto array_ptr = ros_message->digital_in;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name digital_out
  {
    size_t array_size = 16;
    auto array_ptr = ros_message->digital_out;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name jnt_temperature
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->jnt_temperature;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name task_pc
  {
    size_t item_size = sizeof(ros_message->task_pc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name task_repeat
  {
    size_t item_size = sizeof(ros_message->task_repeat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name task_run_id
  {
    size_t item_size = sizeof(ros_message->task_run_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name task_run_num
  {
    size_t item_size = sizeof(ros_message->task_run_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name task_run_time
  {
    size_t item_size = sizeof(ros_message->task_run_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name task_state
  {
    size_t item_size = sizeof(ros_message->task_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name default_speed
  {
    size_t item_size = sizeof(ros_message->default_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_state
  {
    size_t item_size = sizeof(ros_message->robot_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name information_chunk_1
  {
    size_t item_size = sizeof(ros_message->information_chunk_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name jnt_info
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->jnt_info;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name collision_detect_onoff
  {
    size_t item_size = sizeof(ros_message->collision_detect_onoff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_freedrive_mode
  {
    size_t item_size = sizeof(ros_message->is_freedrive_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name real_vs_simulation_mode
  {
    size_t item_size = sizeof(ros_message->real_vs_simulation_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name init_state_info
  {
    size_t item_size = sizeof(ros_message->init_state_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name init_error
  {
    size_t item_size = sizeof(ros_message->init_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tfb_analog_in
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->tfb_analog_in;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tfb_digital_in
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->tfb_digital_in;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tfb_digital_out
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->tfb_digital_out;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tfb_voltage_out
  {
    size_t item_size = sizeof(ros_message->tfb_voltage_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name op_stat_collision_occur
  {
    size_t item_size = sizeof(ros_message->op_stat_collision_occur);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name op_stat_sos_flag
  {
    size_t item_size = sizeof(ros_message->op_stat_sos_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name op_stat_self_collision
  {
    size_t item_size = sizeof(ros_message->op_stat_self_collision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name op_stat_soft_estop_occur
  {
    size_t item_size = sizeof(ros_message->op_stat_soft_estop_occur);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name op_stat_ems_flag
  {
    size_t item_size = sizeof(ros_message->op_stat_ems_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name information_chunk_2
  {
    size_t item_size = sizeof(ros_message->information_chunk_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name information_chunk_3
  {
    size_t item_size = sizeof(ros_message->information_chunk_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inbox_trap_flag
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->inbox_trap_flag;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inbox_check_mode
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->inbox_check_mode;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eft
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->eft;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name information_chunk_4
  {
    size_t item_size = sizeof(ros_message->information_chunk_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extend_io1_analog_in
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->extend_io1_analog_in;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extend_io1_analog_out
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->extend_io1_analog_out;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extend_io1_digital_info
  {
    size_t item_size = sizeof(ros_message->extend_io1_digital_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aa_joint_ref
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->aa_joint_ref;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name safety_board_stat_info
  {
    size_t item_size = sizeof(ros_message->safety_board_stat_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SystemState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rbpodo_msgs__msg__SystemState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rbpodo_msgs
size_t max_serialized_size_rbpodo_msgs__msg__SystemState(
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

  // member: time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: jnt_ref
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: jnt_ang
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: jnt_cur
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tcp_ref
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tcp_pos
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: analog_in
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: analog_out
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: digital_in
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: digital_out
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: jnt_temperature
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: task_pc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: task_repeat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: task_run_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: task_run_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: task_run_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: task_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: default_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robot_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: information_chunk_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: jnt_info
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: collision_detect_onoff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_freedrive_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: real_vs_simulation_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: init_state_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: init_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tfb_analog_in
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tfb_digital_in
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tfb_digital_out
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tfb_voltage_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: op_stat_collision_occur
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: op_stat_sos_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: op_stat_self_collision
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: op_stat_soft_estop_occur
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: op_stat_ems_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: information_chunk_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: information_chunk_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: inbox_trap_flag
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: inbox_check_mode
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: eft
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: information_chunk_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: extend_io1_analog_in
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: extend_io1_analog_out
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: extend_io1_digital_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aa_joint_ref
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: safety_board_stat_info
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
    using DataType = rbpodo_msgs__msg__SystemState;
    is_plain =
      (
      offsetof(DataType, safety_board_stat_info) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SystemState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rbpodo_msgs__msg__SystemState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SystemState = {
  "rbpodo_msgs::msg",
  "SystemState",
  _SystemState__cdr_serialize,
  _SystemState__cdr_deserialize,
  _SystemState__get_serialized_size,
  _SystemState__max_serialized_size
};

static rosidl_message_type_support_t _SystemState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SystemState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rbpodo_msgs, msg, SystemState)() {
  return &_SystemState__type_support;
}

#if defined(__cplusplus)
}
#endif
