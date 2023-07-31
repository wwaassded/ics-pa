#include <am.h>
#include <nemu.h>

static uint32_t start_time = 0;
void __am_timer_init() {
  
}
void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  if(start_time == 0) {
      uptime->us = 0;
      start_time = inl(RTC_ADDR);
  } else {
  }
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
