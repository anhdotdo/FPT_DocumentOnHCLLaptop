
#include<stdint.h>
#include<stdlib.h>
#include"MyLib_Device.h"

static Node* HEAD = NULL;        // global variable
static uint32_t len = 0;

Node* List_getList();                                               // function for getting the Node* HEAD
int32_t List_getLength();                                           // function for getting length of the list
Node* List_createNewNode(DeviceType data);                          // function for creating a node of device
List_StatusType List_addHead(DeviceType data);                      // function for inserting at head
List_StatusType List_addTail(DeviceType data);                      // function for inserting at tail 
List_StatusType List_addAtNth(DeviceType data, int32_t pos);        // function for inserting at a position
List_StatusType List_deleteHead();                                  // function for deleting at head
List_StatusType List_deleteTail();                                  // function for deleting at tail
List_StatusType List_deleteAtNth(int32_t pos);                      // function for deleting at a position