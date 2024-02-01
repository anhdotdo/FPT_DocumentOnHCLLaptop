#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"lib.h"

int32_t main(){
    Time t1, t2, t3;
    uint8_t h, m, s;
    inputTime(&t1);         // enter input data
    inputTime(&t2);
    differentTime(t1, t2, &t3); // return the different time
    printf("The different time: ");
    showTime(t3);               // show the time

    return 0;
}