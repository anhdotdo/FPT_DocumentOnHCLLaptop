#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

typedef struct Node{
    int32_t data;
    struct Node* pNext;
}NodeType;

void List_addNode(int32_t data, NodeType **headAddress){
    NodeType *ptr;
    ptr = (NodeType*)malloc(sizeof(NodeType));
    ptr->data = data;
    ptr->pNext = *headAddress;
    *headAddress = ptr;
}

NodeType *List_addHead(int32_t data, NodeType *head){
    NodeType *ptr = (NodeType*)malloc(sizeof(NodeType));
    ptr->data = data;
    ptr->pNext = head;
    head = ptr;
    return head;
}

// ham print cac phan tu cua list
// ham delete node
// tao thu vien cho linked list

uint8_t main(){
    NodeType* head = NULL;
    // List_addNode(10, &head);
    // List_addNode(20, &head);
    // printf("%d\n", head->data);

    // head = List_addHead(10, head);
    // head = List_addHead(20, head);
    // printf("%d\n", head->data);

    return 0;
}