ArrayStack* createArrayStack(int size){
    ArrayStack *pReturn = NULL;
    int i =0;
    
    if(size > 0){
        pReturn = (ArrayStack*)malloc(sizeof(ArrayStack));
        if(pReturn != NULL){
            memset(pReturn,0,sizeof(ArrayStack));
            pReturn->maxElementCount = size;
        }
        else {
            printf("오류 메모리할당")
            return NULL;
        }
        
        pReturn->pElement = (ArrayStackNode*)malloc(sizeof(ArrayStackNode) * size);
        if (pReturn->pElement != NULL){
            memeset(pReturn->pElement,0,sizeof(ArrayStackNode) * size);
        }
        else{
            printf("오류 메모리 할당 2");
            free(pReturn); return NULL;
        }
    }
    else{
        printf("오류 사이즈크기");
        return NULL;
    }
}

int pushAS(ArrayStack* pStack, ArrayStackNode element){
    int ret = FASLE, i = 0;
    
    if(pStack != NULL){
        if(isArrayStackFull(pStack) == FALSE){
            pStack->pElement[pStack->currentElementCount] = element;
            pStack->currentElementCount++;
            ret = TRUE;
        }
        else{
            printf("오류 스택이 가득 참");
        }
    }
    return ret;
}

ArrayStack* popAS(ArrayStack* pStack){
    ArrayStackNode* pReturn = NULL;
    if(pStack != NULL){
        if(isArrayStackEmpty(pStack) == FALSE){
            pReturn = (ArrayStackNode *)malloc(sizeof(ArrayStackNode));
            if(pReturn != NULL){
                pReturn = pStack->pElement[pStack->currentElementCount-1];
                pStack->currentElementCount--;
            }
            else {
                printf("오류 메모리할당");
            }
        }
    }
    return pReturn;
}

ArrayStackNode* peekAS(ArrayStack* pStack){
    ArrayStackNode* pReturn = NULL;
    if(pStack != NULL){
        if(isArrayStackEmpty(pStack) == FALSE{
            pReturn = &(pStack->pElement[pStack->currentElementCount-1]);
        }
    }
    return pReturn;
}



            

