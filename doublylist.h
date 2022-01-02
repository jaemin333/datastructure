#ifndef _DOUBLYLIST_
#define _DOUBLYIST_

typedef struct DoubleListNodeType {
    int data;
    struct DoubleListNodeType* pLLink;
    struct DoubleListNodeType* pRLink;
} DoublyListNode;

typedef struct DoublyListType {
    int currentElementCount;
    DoublyListNode headerNode;
} DoublyList;

#endif
