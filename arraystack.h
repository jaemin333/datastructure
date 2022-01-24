#ifndef _ARRAY_STACK_
#define _ARRAY_STACK_

typedef struct ArrayStackNodeType {
    char data;
} ArrayStackNode;

typedef struct ArrayStackType {
    int maxElementCount;
    int currentElementCount;
    ArrayStackNode *pElement;
} ArrayStack;

#endif

