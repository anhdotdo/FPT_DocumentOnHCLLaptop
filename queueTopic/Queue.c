#include"Queue.h"
 
static Queue_Type queue;

void Queue_Init()
{
    queue.Rear = -1;
    queue.Front = 0;
}

Queue_Status_Type Queue_Push(uint32_t data)
{
    Queue_Status_Type status = Q_OK;
    int8_t idx = (queue.Rear + 1) % MAX_SIZE;

    if(queue.Rear == -1 || idx != queue.Front){
        queue.QueueData[idx] = data;
        queue.Rear = (queue.Rear + 1) % MAX_SIZE;
    }else{
        status = Q_IS_FULL;
    }
    return status;
}

void Queue_ForcePush(uint32_t data)
{
    // => pop() firstly
    Queue_Pop();
    // => push() 
    Queue_Push(data);
}

Queue_Status_Type Queue_Pop()
{
    Queue_Status_Type status = Q_OK;
    
    if(Queue_isEmpty()){
        status = Q_IS_EMPTY;
    }else{
        if(queue.Front % MAX_SIZE != queue.Rear){
            queue.Front = (queue.Front + 1) % MAX_SIZE;
        }else{
            queue.Rear = -1;
            queue.Front = 0;
            status = Q_IS_EMPTY;
        }
    }
    return status;
}

/*
if cur_len = 1, after pop() -> rear = -1, front = 0 
*/
Queue_Bool_Type Queue_isEmpty()
{
    return (queue.Rear == -1 && queue.Front == 0);
}

/*
if cur_len = 1, after pop() -> rear = -1, front = 0 
*/
Queue_Bool_Type Queue_isFull()
{
    return (queue.Rear + 1) % MAX_SIZE == queue.Front;
}

void IO_Display()
{
    uint8_t idx;

    if(Queue_isEmpty()){
        return;
    }

    idx = queue.Front;
    if(idx == queue.Rear){
        printf("%d ", queue.QueueData[idx]);
    }else
    {
        while(idx != queue.Rear){
            printf("%d ", queue.QueueData[idx]);
            idx = (++idx) % MAX_SIZE;
        }
        printf("%d ", queue.QueueData[idx]);
    }
    printf("\n");
}

// functions
    // Queue_Push(): add an element at back
    // Queue_ForcePush(): 
    // Queue_Pop(): delete an element at front
    // Queue_Front(): read element at front
    // Queue_Back(): read element at back 
    // Queue_isEmpty()
    // Queue_isFull()
