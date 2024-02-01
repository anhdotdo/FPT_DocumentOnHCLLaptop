#ifndef _MYLIB_H_
#define _MYLIB_H_
#include<stdint.h>

typedef struct                                      // defind an new data type: Time
{
    uint8_t hour;
    uint8_t minute;
    uint8_t second;
}Time;

#endif