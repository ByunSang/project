#ifndef __UTIL_H
#define __UTIL_H

#include <stdio.h>
#include <time.h>

#if 0
struct timespec {
	time_t tv_sec;
	long tv_nsec;
};
#endif 

#define NANO_TIME_SPEC (1000000000.0)
static inline double calc_execution_secs(struct timespec s)
{
	struct timespec e;
	double secs = 0;
	clock_gettime(CLOCK_REALTIME, &e);

	secs = (e.tv_sec - s.tv_sec) + (e.tv_nsec - s.tv_nsec) / NANO_TIME_SPEC;

	return secs;
	
}

#define EXECUTION_TIMER_INIT 	struct timespec exe_start_t
#define EXECUTION_TIMER_START	do { clock_gettime(CLOCK_REALTIME, &exe_start_t); } while(0)
#define EXECUTION_TIMER_CALC	calc_execution_secs(exe_start_t)
#define EXXCUTION_TIMER_RESET	EXECUTION_TIMER_START

#endif
