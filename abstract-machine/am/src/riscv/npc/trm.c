/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-09-08 11:35:11
 * @LastEditTime: 2022-10-28 17:27:36
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
#include <am.h>
#include <klib-macros.h>

# define npc_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))
extern char _heap_start;
int main(const char *args);


extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

# define DEVICE_BASE 0xa0000000
#define MMIO_BASE 0xa0000000
#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
void putch(char ch) {
   *(volatile uint32_t *)(SERIAL_PORT) = ch;
}

void halt(int code) {
  npc_trap(code);
  while (1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
