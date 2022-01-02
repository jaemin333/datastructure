#ifndef _LINKEDLIST_
#define _LINKEDLIST_

typedef struct ListNodeType {
    int data;
    struct ListNodeType* pLink;
} ListNode;

typedef struct LinkedListType {
    int currentElementCount;
    ListNode headerNode;
} LinkedList;

#endif
