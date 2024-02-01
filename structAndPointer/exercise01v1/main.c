#include<stdio.h>
#include<stdint.h>
#include"Time.h"
#include"IO.h"

int32_t main(){
    Time t1, t2, t_temp;
    uint8_t h, m, s;
    printf("Enter your time (hh:mm:ss), time1: \n");
    time_inputTime(&t1);
    printf("Enter your time (hh:mm:ss), time2: \n");
    time_inputTime(&t2);
    time_differentTime(t1, t2, &t_temp); // return the different time
    printf("The different time: ");
    time_showTime(t_temp);

    return 0;
}