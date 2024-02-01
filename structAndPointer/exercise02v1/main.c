#include<stdio.h>
#include<stdint.h>
#include"Device.h"
#include"IO.h"

uint8_t *DEVICE_MESSAGE[] = {"Device is nonexistent", 
                            "Device is existent", 
                            "Device seccessfully!", 
                            "Overflowed the list",
                            "Exit"
                            };

int8_t main(){
    uint8_t mode;
    uint32_t n = 0;
    Device devices[100];    
    uint8_t user_inputID[20];
    DeviceStatus status = DEVICE_SUCCESS;
    do{
        showMenu();
        io_userInputChar(&mode);
        // do{                             // mo rong input la chuoi bat ky
        //     scanf("%hhd", &mode);
        // }while(!isValidMode(mode));

        switch (mode)
        {
        case 0:
            status = DEVICE_EXIT;
            break;
        case 1:
            status = addDevice(devices, &n);
            break;
        case 2:
            status = addDevices(devices, &n);
            break;
        case 3:
            printf("Enter device's ID: ");
            scanf("%s", user_inputID);
            status = deleteDevice(devices, &n, user_inputID);
            break;
        case 4:
            status = displayDevices(devices, n);
            break;
        }
        IO_showMessage(status);
    }while(mode != 0);
    return 0;
}
