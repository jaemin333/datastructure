#ifndef _LINKED_STACK
#define _LINKED_STACK

typedef struct StackNodeType {
    char data;
    StackNodeType* pLink;
} StackNode;

typedef struct LinkedStackType{
    int currentElementCount;
    StackNode* pTopElement;
} LinkedStack;

#endif
