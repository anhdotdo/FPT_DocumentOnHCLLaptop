#ifndef _MYLIB_DEVICE_H_
#define _MYLIB_DEVICE_H_

#include<stdint.h>

#define MAX_NAME 40

typedef struct{                 // user-defined data type
    uint8_t name[MAX_NAME];
    uint32_t power;
    uint32_t unit_price;
}DeviceType;

typedef struct Node{            // user-defined data type
    DeviceType data;
    struct Node* pNext;
}Node;

typedef enum {                  // status type
    LIST_OVER_MEMORY,
    LIST_OK,
    LIST_EMPTY,
    LIST_OUT_OF_RANGE
}List_StatusType;

#endif /*_MYLIB_DEVICE_H_*/
