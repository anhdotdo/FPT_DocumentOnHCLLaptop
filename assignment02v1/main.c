#include<stdio.h>
#include<stdint.h>
#include"Device.h"
#include"IO_Device.h"

int8_t main(){
    uint8_t user_input;                         // input variable from user
    List_StatusType status = LIST_OK;           // default status of the list

    DeviceType data;                            // temporary variables
    int32_t pos;
    Node* pTemp = NULL;

    do{
        IO_List_showMenu();                                 // function for showing menu
        IO_List_userInputChar(&user_input);                 // function for getting input

        // functions for managing list of devices
        switch (user_input)
        {
        case 'i':                                           // insert one device at Nth position in the list
            printf("Enter device's information! \n");
            IO_List_inputData(&data);
            printf("Enter position: ");
            scanf("%d", &pos);
            status = List_addAtNth(data, pos);
            break;
        case 'd':                                           // delete one device at a position
            printf("Enter position: ");
            scanf("%d", &pos);
            status = List_deleteAtNth(pos);
            break;
        case 'p':                                           // print all the list of devices
            pTemp = List_getList();
            IO_List_showList(pTemp);
            break;
        default:
            break;
        }
        IO_List_showMessage(status);                        // show message about the list's status
    }while(user_input != 'e');                      

    return 0;
}