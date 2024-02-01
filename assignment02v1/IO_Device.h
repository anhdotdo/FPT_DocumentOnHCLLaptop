#include<stdint.h>
#include<stdio.h>
#include<string.h>
#include"MyLib_Device.h"

static uint8_t* MESSAGE_LIST[] = {"The memory is overflowed", 
                                    "The list's ok!...", 
                                    "The list's empty",
                                    "Out of range of list"
                                    };

void IO_List_showMenu();                                    // function for showing menu
void IO_List_userInputChar(uint8_t *c);                     // function for getting input
void IO_List_showMessage(List_StatusType status);           // function for showing message of state of List
void IO_List_inputData(DeviceType *deviceData);             // function for requiring data of device from user
void IO_List_showDevice(DeviceType device);                 // function for showing information of one device
void IO_List_showList(Node* head);                          // function for showing information of list of devices