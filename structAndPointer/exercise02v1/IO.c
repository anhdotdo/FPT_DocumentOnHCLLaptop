#include<stdint.h>
#include<stdio.h>
#include"IO.h"

BoolType isValidMode(uint8_t mode){
    if(mode >= 0 && mode <= 4){
        return true;
    }
    return false;
}

void io_userInputChar(uint8_t *c){
    uint8_t userInputString[50];
    do{
        scanf("%s", userInputString);
        *c = userInputString[0];
    }while(!(strlen(userInputString) == 1 && *c >= '0' && *c <= '9' && isValidMode(*c - 0x30)));
    *c -= 0x30;
}

void showMenu(){
    printf("-------PROGRAM OF MANAGING DEVICES------------------------------------------------------------------------------\n");
    printf("1. Add a device     2. Add mutil devices    3. Delete a device using ID      4. Display all devices      0. Exit\n");
    printf("----------------------------------------------------------------------------------------------------------------\n");
    printf("Which number you choose?: ");
}

void createNewDevice(Device *devices){            // create a device
    printf("Name: ");
    scanf("%s", devices->name);
    printf("ID: ");
    scanf("%s", devices->id);
    printf("Power(W): ");
    scanf("%u", &(devices->power));
    printf("Unit price: ");
    scanf("%u", &(devices->unitPrice));
}

DeviceStatus addDevice(Device *devices, uint32_t *n){   // them 1 thiet bi
    if(*n > 100){
        return DEVICE_OVERFLOWED_LIST;
    }
    printf("Enter information of device %d\n", *n+1);
    createNewDevice(&(devices[*n]));
    (*n)++;
    return DEVICE_SUCCESS;
}

DeviceStatus addDevices(Device *devices, uint32_t *n){   // them n thiet bi
    if(*n > 100){
        return DEVICE_OVERFLOWED_LIST;
    }
    int32_t i;
    uint32_t n1;
    printf("Enter amount of devices: ");
    scanf("%d", &n1);
    for(i = *n; i < *n + n1; i++){
        printf("Enter information of device %d\n", i+1);
        createNewDevice(&(devices[i]));
    }
    (*n) += n1;
    return DEVICE_SUCCESS;
}

void displayDevice(Device d){                   // display one device
    printf("Name: %s\n", d.name);
    printf("ID: %s\n", d.id);
    printf("Power(w): %u\n", d.power);
    printf("Unit Price: %u\n", d.unitPrice);
}

DeviceStatus displayDevices(Device *devices, int n){
    int32_t i;
    printf("------------------------List of all devices\n");
    for(i = 0; i < n; i++){
        printf("Device %d \n", i + 1);
        displayDevice(devices[i]);
    }
    return DEVICE_SUCCESS;
}

void IO_showMessage(DeviceStatus status){
    printf("%s\n", DEVICE_MESSAGE[status]);
}