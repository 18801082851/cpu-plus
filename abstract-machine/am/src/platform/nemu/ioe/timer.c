/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-09-08 11:35:11
 * @LastEditTime: 2022-10-27 16:47:58
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
#include <am.h>
#include <nemu.h>
#include <stdio.h>
uint64_t boottime;
void __am_timer_init() {
  uint32_t lo = *(volatile uint32_t *)(RTC_ADDR);
  uint32_t hi = *(volatile uint32_t *)(RTC_ADDR+4);
  boottime = ((uint64_t)hi)|lo;
  //printf("\nboottime is%d\n",boottime);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  
  
  uint32_t lo = *(volatile uint32_t *)(RTC_ADDR);
  uint32_t hi = *(volatile uint32_t *)(RTC_ADDR+4);
  uint64_t time = ((uint64_t)hi<<32)|lo;
 // uint64_t time2 = ((uint64_t)hi)|(uint64_t)lo;
  // if(time!=time2){
  //   printf("c is %d time is %d\n",c,d);
  //   panic("\nuptime Not Equl\n");}
  uptime->us=time-boottime;
}
void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
