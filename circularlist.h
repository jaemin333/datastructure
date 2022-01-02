#ifndef _CIRCULARLIST_
#define _CIRCULARLIST_

typedef struct CircularListNodeType {
    int data;
    struct CircularListNodeType* pLink;
} CircularListNode;

typedef struct CircularListType {
    int currentElementCount;
    CircularListNode* pLink;
} CircularList;

#endif
