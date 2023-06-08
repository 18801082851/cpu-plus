/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-09-08 11:35:11
 * @LastEditTime: 2022-10-27 16:48:45
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  int k = AM_KEY_NONE;
  uint32_t lo = *(volatile uint32_t *)(KBD_ADDR);
  //uint32_t hi = *(volatile uint32_t *)(KBD_ADDR+4);
   k = lo;
  kbd->keydown = (k & KEYDOWN_MASK ? true : false);
  kbd->keycode = k & ~KEYDOWN_MASK;
}
