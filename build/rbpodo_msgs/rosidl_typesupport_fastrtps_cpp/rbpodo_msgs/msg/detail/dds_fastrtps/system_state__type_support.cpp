// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rbpodo_msgs:msg/SystemState.idl
// generated code does not contain a copyright notice
#include "rbpodo_msgs/msg/detail/system_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rbpodo_msgs/msg/detail/system_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rbpodo_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rbpodo_msgs
cdr_serialize(
  const rbpodo_msgs::msg::SystemState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: time
  cdr << ros_message.time;
  // Member: jnt_ref
  {
    cdr << ros_message.jnt_ref;
  }
  // Member: jnt_ang
  {
    cdr << ros_message.jnt_ang;
  }
  // Member: jnt_cur
  {
    cdr << ros_message.jnt_cur;
  }
  // Member: tcp_ref
  {
    cdr << ros_message.tcp_ref;
  }
  // Member: tcp_pos
  {
    cdr << ros_message.tcp_pos;
  }
  // Member: analog_in
  {
    cdr << ros_message.analog_in;
  }
  // Member: analog_out
  {
    cdr << ros_message.analog_out;
  }
  // Member: digital_in
  {
    cdr << ros_message.digital_in;
  }
  // Member: digital_out
  {
    cdr << ros_message.digital_out;
  }
  // Member: jnt_temperature
  {
    cdr << ros_message.jnt_temperature;
  }
  // Member: task_pc
  cdr << ros_message.task_pc;
  // Member: task_repeat
  cdr << ros_message.task_repeat;
  // Member: task_run_id
  cdr << ros_message.task_run_id;
  // Member: task_run_num
  cdr << ros_message.task_run_num;
  // Member: task_run_time
  cdr << ros_message.task_run_time;
  // Member: task_state
  cdr << ros_message.task_state;
  // Member: default_speed
  cdr << ros_message.default_speed;
  // Member: robot_state
  cdr << ros_message.robot_state;
  // Member: information_chunk_1
  cdr << ros_message.information_chunk_1;
  // Member: jnt_info
  {
    cdr << ros_message.jnt_info;
  }
  // Member: collision_detect_onoff
  cdr << (ros_message.collision_detect_onoff ? true : false);
  // Member: is_freedrive_mode
  cdr << (ros_message.is_freedrive_mode ? true : false);
  // Member: real_vs_simulation_mode
  cdr << (ros_message.real_vs_simulation_mode ? true : false);
  // Member: init_state_info
  cdr << ros_message.init_state_info;
  // Member: init_error
  cdr << ros_message.init_error;
  // Member: tfb_analog_in
  {
    cdr << ros_message.tfb_analog_in;
  }
  // Member: tfb_digital_in
  {
    cdr << ros_message.tfb_digital_in;
  }
  // Member: tfb_digital_out
  {
    cdr << ros_message.tfb_digital_out;
  }
  // Member: tfb_voltage_out
  cdr << ros_message.tfb_voltage_out;
  // Member: op_stat_collision_occur
  cdr << (ros_message.op_stat_collision_occur ? true : false);
  // Member: op_stat_sos_flag
  cdr << ros_message.op_stat_sos_flag;
  // Member: op_stat_self_collision
  cdr << (ros_message.op_stat_self_collision ? true : false);
  // Member: op_stat_soft_estop_occur
  cdr << (ros_message.op_stat_soft_estop_occur ? true : false);
  // Member: op_stat_ems_flag
  cdr << ros_message.op_stat_ems_flag;
  // Member: information_chunk_2
  cdr << ros_message.information_chunk_2;
  // Member: information_chunk_3
  cdr << ros_message.information_chunk_3;
  // Member: inbox_trap_flag
  {
    cdr << ros_message.inbox_trap_flag;
  }
  // Member: inbox_check_mode
  {
    cdr << ros_message.inbox_check_mode;
  }
  // Member: eft
  {
    cdr << ros_message.eft;
  }
  // Member: information_chunk_4
  cdr << ros_message.information_chunk_4;
  // Member: extend_io1_analog_in
  {
    cdr << ros_message.extend_io1_analog_in;
  }
  // Member: extend_io1_analog_out
  {
    cdr << ros_message.extend_io1_analog_out;
  }
  // Member: extend_io1_digital_info
  cdr << ros_message.extend_io1_digital_info;
  // Member: aa_joint_ref
  {
    cdr << ros_message.aa_joint_ref;
  }
  // Member: safety_board_stat_info
  cdr << ros_message.safety_board_stat_info;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rbpodo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rbpodo_msgs::msg::SystemState & ros_message)
{
  // Member: time
  cdr >> ros_message.time;

  // Member: jnt_ref
  {
    cdr >> ros_message.jnt_ref;
  }

  // Member: jnt_ang
  {
    cdr >> ros_message.jnt_ang;
  }

  // Member: jnt_cur
  {
    cdr >> ros_message.jnt_cur;
  }

  // Member: tcp_ref
  {
    cdr >> ros_message.tcp_ref;
  }

  // Member: tcp_pos
  {
    cdr >> ros_message.tcp_pos;
  }

  // Member: analog_in
  {
    cdr >> ros_message.analog_in;
  }

  // Member: analog_out
  {
    cdr >> ros_message.analog_out;
  }

  // Member: digital_in
  {
    cdr >> ros_message.digital_in;
  }

  // Member: digital_out
  {
    cdr >> ros_message.digital_out;
  }

  // Member: jnt_temperature
  {
    cdr >> ros_message.jnt_temperature;
  }

  // Member: task_pc
  cdr >> ros_message.task_pc;

  // Member: task_repeat
  cdr >> ros_message.task_repeat;

  // Member: task_run_id
  cdr >> ros_message.task_run_id;

  // Member: task_run_num
  cdr >> ros_message.task_run_num;

  // Member: task_run_time
  cdr >> ros_message.task_run_time;

  // Member: task_state
  cdr >> ros_message.task_state;

  // Member: default_speed
  cdr >> ros_message.default_speed;

  // Member: robot_state
  cdr >> ros_message.robot_state;

  // Member: information_chunk_1
  cdr >> ros_message.information_chunk_1;

  // Member: jnt_info
  {
    cdr >> ros_message.jnt_info;
  }

  // Member: collision_detect_onoff
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.collision_detect_onoff = tmp ? true : false;
  }

  // Member: is_freedrive_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_freedrive_mode = tmp ? true : false;
  }

  // Member: real_vs_simulation_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.real_vs_simulation_mode = tmp ? true : false;
  }

  // Member: init_state_info
  cdr >> ros_message.init_state_info;

  // Member: init_error
  cdr >> ros_message.init_error;

  // Member: tfb_analog_in
  {
    cdr >> ros_message.tfb_analog_in;
  }

  // Member: tfb_digital_in
  {
    cdr >> ros_message.tfb_digital_in;
  }

  // Member: tfb_digital_out
  {
    cdr >> ros_message.tfb_digital_out;
  }

  // Member: tfb_voltage_out
  cdr >> ros_message.tfb_voltage_out;

  // Member: op_stat_collision_occur
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.op_stat_collision_occur = tmp ? true : false;
  }

  // Member: op_stat_sos_flag
  cdr >> ros_message.op_stat_sos_flag;

  // Member: op_stat_self_collision
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.op_stat_self_collision = tmp ? true : false;
  }

  // Member: op_stat_soft_estop_occur
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.op_stat_soft_estop_occur = tmp ? true : false;
  }

  // Member: op_stat_ems_flag
  cdr >> ros_message.op_stat_ems_flag;

  // Member: information_chunk_2
  cdr >> ros_message.information_chunk_2;

  // Member: information_chunk_3
  cdr >> ros_message.information_chunk_3;

  // Member: inbox_trap_flag
  {
    cdr >> ros_message.inbox_trap_flag;
  }

  // Member: inbox_check_mode
  {
    cdr >> ros_message.inbox_check_mode;
  }

  // Member: eft
  {
    cdr >> ros_message.eft;
  }

  // Member: information_chunk_4
  cdr >> ros_message.information_chunk_4;

  // Member: extend_io1_analog_in
  {
    cdr >> ros_message.extend_io1_analog_in;
  }

  // Member: extend_io1_analog_out
  {
    cdr >> ros_message.extend_io1_analog_out;
  }

  // Member: extend_io1_digital_info
  cdr >> ros_message.extend_io1_digital_info;

  // Member: aa_joint_ref
  {
    cdr >> ros_message.aa_joint_ref;
  }

  // Member: safety_board_stat_info
  cdr >> ros_message.safety_board_stat_info;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rbpodo_msgs
get_serialized_size(
  const rbpodo_msgs::msg::SystemState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: time
  {
    size_t item_size = sizeof(ros_message.time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: jnt_ref
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.jnt_ref[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: jnt_ang
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.jnt_ang[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: jnt_cur
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.jnt_cur[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tcp_ref
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.tcp_ref[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tcp_pos
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.tcp_pos[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: analog_in
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.analog_in[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: analog_out
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.analog_out[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: digital_in
  {
    size_t array_size = 16;
    size_t item_size = sizeof(ros_message.digital_in[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: digital_out
  {
    size_t array_size = 16;
    size_t item_size = sizeof(ros_message.digital_out[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: jnt_temperature
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.jnt_temperature[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: task_pc
  {
    size_t item_size = sizeof(ros_message.task_pc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: task_repeat
  {
    size_t item_size = sizeof(ros_message.task_repeat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: task_run_id
  {
    size_t item_size = sizeof(ros_message.task_run_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: task_run_num
  {
    size_t item_size = sizeof(ros_message.task_run_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: task_run_time
  {
    size_t item_size = sizeof(ros_message.task_run_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: task_state
  {
    size_t item_size = sizeof(ros_message.task_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: default_speed
  {
    size_t item_size = sizeof(ros_message.default_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot_state
  {
    size_t item_size = sizeof(ros_message.robot_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: information_chunk_1
  {
    size_t item_size = sizeof(ros_message.information_chunk_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: jnt_info
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.jnt_info[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: collision_detect_onoff
  {
    size_t item_size = sizeof(ros_message.collision_detect_onoff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_freedrive_mode
  {
    size_t item_size = sizeof(ros_message.is_freedrive_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: real_vs_simulation_mode
  {
    size_t item_size = sizeof(ros_message.real_vs_simulation_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: init_state_info
  {
    size_t item_size = sizeof(ros_message.init_state_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: init_error
  {
    size_t item_size = sizeof(ros_message.init_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tfb_analog_in
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.tfb_analog_in[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tfb_digital_in
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.tfb_digital_in[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tfb_digital_out
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.tfb_digital_out[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tfb_voltage_out
  {
    size_t item_size = sizeof(ros_message.tfb_voltage_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: op_stat_collision_occur
  {
    size_t item_size = sizeof(ros_message.op_stat_collision_occur);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: op_stat_sos_flag
  {
    size_t item_size = sizeof(ros_message.op_stat_sos_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: op_stat_self_collision
  {
    size_t item_size = sizeof(ros_message.op_stat_self_collision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: op_stat_soft_estop_occur
  {
    size_t item_size = sizeof(ros_message.op_stat_soft_estop_occur);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: op_stat_ems_flag
  {
    size_t item_size = sizeof(ros_message.op_stat_ems_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: information_chunk_2
  {
    size_t item_size = sizeof(ros_message.information_chunk_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: information_chunk_3
  {
    size_t item_size = sizeof(ros_message.information_chunk_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inbox_trap_flag
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.inbox_trap_flag[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inbox_check_mode
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.inbox_check_mode[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eft
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.eft[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: information_chunk_4
  {
    size_t item_size = sizeof(ros_message.information_chunk_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: extend_io1_analog_in
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.extend_io1_analog_in[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: extend_io1_analog_out
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.extend_io1_analog_out[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: extend_io1_digital_info
  {
    size_t item_size = sizeof(ros_message.extend_io1_digital_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aa_joint_ref
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.aa_joint_ref[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: safety_board_stat_info
  {
    size_t item_size = sizeof(ros_message.safety_board_stat_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rbpodo_msgs
max_serialized_size_SystemState(
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


  // Member: time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: jnt_ref
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: jnt_ang
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: jnt_cur
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tcp_ref
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tcp_pos
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: analog_in
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: analog_out
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: digital_in
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: digital_out
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: jnt_temperature
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: task_pc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: task_repeat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: task_run_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: task_run_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: task_run_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: task_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: default_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: robot_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: information_chunk_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: jnt_info
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: collision_detect_onoff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_freedrive_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: real_vs_simulation_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: init_state_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: init_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tfb_analog_in
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tfb_digital_in
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tfb_digital_out
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tfb_voltage_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: op_stat_collision_occur
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: op_stat_sos_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: op_stat_self_collision
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: op_stat_soft_estop_occur
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: op_stat_ems_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: information_chunk_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: information_chunk_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: inbox_trap_flag
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: inbox_check_mode
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: eft
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: information_chunk_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: extend_io1_analog_in
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: extend_io1_analog_out
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: extend_io1_digital_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aa_joint_ref
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: safety_board_stat_info
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
    using DataType = rbpodo_msgs::msg::SystemState;
    is_plain =
      (
      offsetof(DataType, safety_board_stat_info) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SystemState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rbpodo_msgs::msg::SystemState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SystemState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rbpodo_msgs::msg::SystemState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SystemState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rbpodo_msgs::msg::SystemState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SystemState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SystemState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SystemState__callbacks = {
  "rbpodo_msgs::msg",
  "SystemState",
  _SystemState__cdr_serialize,
  _SystemState__cdr_deserialize,
  _SystemState__get_serialized_size,
  _SystemState__max_serialized_size
};

static rosidl_message_type_support_t _SystemState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SystemState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rbpodo_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rbpodo_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rbpodo_msgs::msg::SystemState>()
{
  return &rbpodo_msgs::msg::typesupport_fastrtps_cpp::_SystemState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rbpodo_msgs, msg, SystemState)() {
  return &rbpodo_msgs::msg::typesupport_fastrtps_cpp::_SystemState__handle;
}

#ifdef __cplusplus
}
#endif
