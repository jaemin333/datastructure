#ifndef _LINKED_QUEUE_
#define _LINKED_QUEUE_

typedef struct QueueNodeType {
    char data;
    struct QueueNodeType* pLink;
} QueueNode;

typedef struct LinkedQueueType {
    int currentElemetCount;
    QueueNode* pFrnotNode;
    QueueNode* pRearNode;
} LinkedQueue;

#endif
