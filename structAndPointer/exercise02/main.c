#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include"lib.h"

int32_t main(){
    uint32_t n = 0;
    uint8_t mode;
    Device devices[100];     
    showMenu();
    scanf("%hhd", &mode);
    while (mode != 0)
    {
        switch (mode)
        {
        case 1:
            addDevice(devices, &n);
            break;
        case 2:
            addDevices(devices, &n);
            break;
        case 3:
            deleteDevice(devices, &n);
            break;
        case 4:
            displayDevices(devices, n);
            break;
        default:
            printf("You choose a invalid number\n");
            break;
        }
        showMenu();                 // nhap lai mode
        scanf("%hhd", &mode);
    }
    return 0;
}