/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-10-31 00:04:20
 * @LastEditTime: 2022-11-06 01:31:41
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
#ifndef __COMMON_H__
#define __COMMON_H__

/* Uncomment these macros to enable corresponding functionality. */
#define HAS_CTE
//#define HAS_VME
//#define MULTIPROGRAM
//#define TIME_SHARING

#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <debug.h>

#endif

void do_syscall(Context *c);