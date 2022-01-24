#ifndef _ARRAY_QUEUE_
#define _ARRAY_QUEUE_

typedef struct ArrayQueueNodeType {
    char data;
} ArrayQueueNode;

typedef struct ArrayQueueType {
    int maxElementCount;
    int currentElementCount;
    int front;
    int rear;
    ArrayQueueNode *pElement;
} ArrayQueue;

#endif
 
