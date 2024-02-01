#include<stdint.h>
#include<stdlib.h>
#include"MyLib.h"

uint32_t time_time2Second(Time t);
Time time_second2Time(uint32_t second);
void time_differentTime(Time t1, Time t2, Time *t3);