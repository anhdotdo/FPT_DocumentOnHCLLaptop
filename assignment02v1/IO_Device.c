
#include"IO_Device.h"

void IO_List_showMenu(){
    printf("***************************************************PROGRAM OF MANAGING DEVICES\n");
    printf("'i' : Insert a new device to list\n");
    printf("'d' : Delete a device at a postion entered from list\n");
    printf("'p' : Print all the list of device\n");
    printf("'e' : Exit the program\n");
    printf("***************************************************\n");
    printf("Which one you choose?: ");
}

void IO_List_userInputChar(uint8_t *c){
    uint8_t userInputString[50];
    do{
        scanf("%s", userInputString);
        *c = userInputString[0];
    }while(!(strlen(userInputString) == 1 && (*c == 'e' || *c == 'i' || *c == 'd' || *c == 'p')));
}

void IO_List_showMessage(List_StatusType status){
    printf("%s\n", MESSAGE_LIST[status]);
}

void IO_List_inputData(DeviceType *deviceData){
    uint8_t c;
    scanf("%c", &c);
    printf("Enter device's name: ");
    scanf("%s", deviceData->name);
    printf("Enter device's power: ");
    scanf("%d", &(deviceData->power));
    printf("Enter device's unit price: ");
    scanf("%d", &(deviceData->unit_price));
}

void IO_List_showDevice(DeviceType device){
    printf("Name: %s\nPower: %d\nUnit Price: %d\n", device.name, device.power, device.unit_price);
}

void IO_List_showList(Node* head){
    Node* pTemp = head;
    int32_t count = 1;
    while(pTemp != NULL){
        printf("***Device %d****\n", count);
        IO_List_showDevice(pTemp->data);
        pTemp = pTemp->pNext;
        count++;
    }
}