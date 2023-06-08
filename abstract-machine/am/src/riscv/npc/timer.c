#include <am.h>
#include <sys/time.h>
#include <time.h>
#include <klib-macros.h>
#include <stdio.h>
uint64_t boottime;
#define DEVICE_BASE 0xa0000000
#define MMIO_BASE 0xa0000000
#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
void __am_timer_init() {
  uint32_t lo = *(volatile uint32_t *)(RTC_ADDR);
  uint32_t hi = *(volatile uint32_t *)(RTC_ADDR+4);
  boottime = ((uint64_t)hi)|lo;
}


void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {

  uint32_t lo = *(volatile uint32_t *)(RTC_ADDR);
  uint32_t hi = *(volatile uint32_t *)(RTC_ADDR+4);
  uint64_t time = ((uint64_t)hi<<32)|lo;
  uptime->us=time-boottime;
  //printf("\n9999999999  %d\n",time);
  
}
void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
