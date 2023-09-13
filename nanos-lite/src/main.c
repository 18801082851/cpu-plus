/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-10-31 00:04:20
 * @LastEditTime: 2022-11-06 03:32:07
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
#include <common.h>

void init_mm(void);
void init_device(void);
void init_ramdisk(void);
void init_irq(void);
void init_fs(void);
void init_proc(void);

int main() {
  extern const char logo[];
  printf("%s", logo);
  Log("'Hello World!' from Nanos-lite");
  Log("Build time: %s, %s", __TIME__, __DATE__);

  init_mm();

  init_device();

  init_ramdisk();

#ifdef HAS_CTE
  init_irq();
#endif

  init_fs();

  init_proc();

  Log("Finish initialization");

#ifdef HAS_CTE
  yield();
#endif

  panic("Should not reach here");
}
