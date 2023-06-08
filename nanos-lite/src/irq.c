/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-10-31 00:04:20
 * @LastEditTime: 2022-11-06 03:48:10
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
#include <common.h>

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case 1 : Log("Event ID = 1 is EVENT_YIELD!\n")     ;break;
    case 2 : Log("Event ID = 2 is EVENT_SYSTEMCALL!\n");do_syscall(c);break;
    case 4 : Log("Event ID = 4 is EVENT_ERROR!\n")    ;break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
