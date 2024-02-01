#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

typedef struct
{
    uint8_t hour;
    uint8_t minute;
    uint8_t second;
}Time;

void inputTime(Time *t){
    printf("Enter your time (hh:mm:ss): \n");
    scanf("%hhd%hhd%hhd", &(t->hour), &(t->minute), &(t->second));
}

// calculate the different time
// time2Second(): convert time to second
// second2Time(): convert second to time
uint32_t time2Second(Time t){
    return t.hour*3600 + t.minute*60 + t.second;
}

Time second2Time(uint32_t second){
    uint8_t h, m, s;
    h = second / 3600;
    second %= 3600;
    m = second / 60;
    second %= 60;
    s = second;
    Time t = {h, m, s};
    return t;
}

void differentTime(Time t1, Time t2, Time *t3){
    uint32_t s1, s2;
    s1 = time2Second(t1);
    s2 = time2Second(t2);
    *t3 = second2Time((uint32_t)abs((int32_t)(s1 - s2)));
}

void show(uint8_t t){
    if(t < 10){
        printf("0%d", t);
    }else{
        printf("%d", t);
    }
}

void showTime(Time t){
    show(t.hour);
    printf(":");
    show(t.minute);
    printf(":");
    show(t.second);
    printf("\n");
}

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

