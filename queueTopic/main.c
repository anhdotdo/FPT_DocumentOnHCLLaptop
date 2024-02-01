#include<stdint.h>
#include"Queue.h"

uint8_t main(){
    Queue_Status_Type status = Q_OK;

    // printf("status: %d\n", status);
    Queue_Init();
    // printf("%d\n", Queue_isEmpty());
    status = Queue_Push(10);
    status = Queue_Push(20);
    status = Queue_Push(30);
    status = Queue_Push(40);
    status = Queue_Push(50);
    Queue_ForcePush(60);
    Queue_ForcePush(70);
    // status = Queue_Pop();
    // status = Queue_Pop();
    // status = Queue_Pop();
    // status = Queue_Pop();
    // status = Queue_Pop();
    // status = Queue_Pop();
    printf("status: %d\n", status);
    IO_Display();

    return 0;
}