#include<stdint.h>
#include"Time.h"

uint32_t time_time2Second(Time t){
    return t.hour*3600 + t.minute*60 + t.second;
}

Time time_second2Time(uint32_t second){
    uint8_t h, m, s;
    h = second / 3600;
    second %= 3600;
    m = second / 60;
    second %= 60;
    s = second;
    Time t = {h, m, s};
    return t;
}

void time_differentTime(Time t1, Time t2, Time *t3){
    uint32_t s1, s2;
    s1 = time_time2Second(t1);
    s2 = time_time2Second(t2);
    *t3 = time_second2Time((uint32_t)abs((int32_t)(s1 - s2)));
}

