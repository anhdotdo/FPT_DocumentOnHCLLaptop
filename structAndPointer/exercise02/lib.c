#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include"lib.h"

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

void addDevice(Device *devices, uint32_t *n){   // them 1 thiet bi
    printf("Enter information of device %d\n", *n+1);
    createNewDevice(&(devices[*n]));
    (*n)++;
    printf("=>Answer: done!\n");
}

void addDevices(Device *devices, uint32_t *n){   // them n thiet bi
    int32_t i;
    uint32_t n1;
    printf("Enter amount of devices: ");
    scanf("%d", &n1);
    for(i = *n; i < *n + n1; i++){
        printf("Enter information of device %d\n", i+1);
        createNewDevice(&(devices[i]));
    }
    (*n) += n1;
    printf("=>Answer: done!\n");
}

void deleteDevice(Device *devices, uint32_t *n){
    int8_t isExist = 0;                     // mac dinh id nhap vao khong ton tai trong ds
    uint8_t id[50];
    int32_t i, j = 0;
    printf("Enter device's ID: ");
    scanf("%s", id);

    Device ds[100];                         // danh sach thiet bi
    for(i = 0; i < *n; i++){
        if(strcmp(devices[i].id, id) == 0){
            isExist = 1;
            continue;
        }
        ds[j] = devices[i];
        j++;
    }

    if(isExist == 1){                       // cap nhap n
        (*n)--;
        printf("=>Answer: done!\n");
    }else{
        printf("=>Answer: %s is nonexistent\n", id);
    }

    for(i = 0; i < *n; i++){
        devices[i] = ds[i];
    }
}

void displayDevice(Device d){                   // display one device
    printf("Name: %s\n", d.name);
    printf("ID: %s\n", d.id);
    printf("Power(w): %u\n", d.power);
    printf("Unit Price: %u\n", d.unitPrice);
}

void displayDevices(Device *devices, int n){
    printf("=>Answer:\n");
    int32_t i;
    printf("------------------------List of all devices\n");
    for(i = 0; i < n; i++){
        printf("---Device %d \n", i + 1);
        displayDevice(devices[i]);
    }
}

void showMenu(){
    printf("-------PROGRAM OF MANAGING DEVICES------------------------------------------------------------------------------\n");
    printf("1. Add a device     2. Add mutil devices    3. Delete a device using ID      4. Display all devices      0. Exit\n");
    printf("----------------------------------------------------------------------------------------------------------------\n");
    printf("Which number you choose?: ");
}