#ifndef _MYLIB_H_
#define _MYLIB_H_

extern uint8_t *DEVICE_MESSAGE[];

typedef enum{
    false,
    true
}BoolType;

typedef enum{
    DEVICE_IS_NONEXISTENT,
    DEVICE_IS_EXISTENT,
    DEVICE_SUCCESS,
    DEVICE_OVERFLOWED_LIST,
    DEVICE_EXIT
}DeviceStatus;

typedef struct 
{
    uint8_t name[50];
    uint8_t id[50];
    uint32_t power;
    uint32_t unitPrice;
}Device;

#endif
