#include<stdint.h>
#include"Device.h"

DeviceStatus deleteDevice(Device *devices, uint32_t *n, uint8_t *id){
    DeviceStatus status = DEVICE_IS_NONEXISTENT;                     // mac dinh id nhap vao khong ton tai trong ds
    int32_t i, j = 0;
    Device ds[100];                         // danh sach thiet bi
    for(i = 0; i < *n; i++){
        if(strcmp(devices[i].id, id) == 0){
            status = DEVICE_IS_EXISTENT;
            continue;
        }
        ds[j] = devices[i];
        j++;
    }

    if(status == DEVICE_IS_EXISTENT){
        (*n)--;
    }

    for(i = 0; i < *n; i++){
        devices[i] = ds[i];
    }
    return status;
}

