/**
 * This file is automatically generated by mig. DO NOT EDIT THIS FILE.
 * This file implements the functions for encoding and decoding the
 * 'test_serial_msg_with_header' message type. See serialpacket.h for more details.
 */

#include <message.h>
#include "serialpacket.h"

uint16_t spacket_header_dest_get(tmsg_t *msg)
{
  return tmsg_read_ube(msg, 0, 16);
}

void spacket_header_dest_set(tmsg_t *msg, uint16_t value)
{
  tmsg_write_ube(msg, 0, 16, value);
}

uint16_t spacket_header_src_get(tmsg_t *msg)
{
  return tmsg_read_ube(msg, 16, 16);
}

void spacket_header_src_set(tmsg_t *msg, uint16_t value)
{
  tmsg_write_ube(msg, 16, 16, value);
}

uint8_t spacket_header_length_get(tmsg_t *msg)
{
  return tmsg_read_ube(msg, 32, 8);
}

void spacket_header_length_set(tmsg_t *msg, uint8_t value)
{
  tmsg_write_ube(msg, 32, 8, value);
}

uint8_t spacket_header_group_get(tmsg_t *msg)
{
  return tmsg_read_ube(msg, 40, 8);
}

void spacket_header_group_set(tmsg_t *msg, uint8_t value)
{
  tmsg_write_ube(msg, 40, 8, value);
}

uint8_t spacket_header_type_get(tmsg_t *msg)
{
  return tmsg_read_ube(msg, 48, 8);
}

void spacket_header_type_set(tmsg_t *msg, uint8_t value)
{
  tmsg_write_ube(msg, 48, 8, value);
}

uint16_t spacket_counter_get(tmsg_t *msg)
{
  return tmsg_read_ube(msg, 56, 16);
}

void spacket_counter_set(tmsg_t *msg, uint16_t value)
{
  tmsg_write_ube(msg, 56, 16, value);
}

size_t spacket_message_offset(size_t index1)
{
  return spacket_message_offsetbits(index1) / 8;
}

uint8_t spacket_message_get(tmsg_t *msg, size_t index1)
{
  return tmsg_read_ube(msg, spacket_message_offsetbits(index1), 8);
}

void spacket_message_set(tmsg_t *msg, size_t index1, uint8_t value)
{
  tmsg_write_ube(msg, spacket_message_offsetbits(index1), 8, value);
}

size_t spacket_message_offsetbits(size_t index1)
{
  size_t offset = 72;
  if (index1 >= 10) { tmsg_fail(); return (size_t)-1; }
  offset += 0 + index1 * 8;
  return offset;
}

uint8_t spacket_messageLength_get(tmsg_t *msg)
{
  return tmsg_read_ube(msg, 152, 8);
}

void spacket_messageLength_set(tmsg_t *msg, uint8_t value)
{
  tmsg_write_ube(msg, 152, 8, value);
}

