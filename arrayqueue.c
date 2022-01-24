ArrayQueue* createArrayQueue(int maxElementCount){
    ArrayQueue *pReturn = NULL;
    int i = 0;
    
    if(maxElementCount > 0 ){
        pReturn = (ArrayQueue *)malloc(sizeof(ArrayQueue));
        if(pReturn !=NULL){
            memset(pReturn,0,sizeof(ArrayQueue));
            pReturn->maxElementCount = maxElementCount;
            pReturn->front = -1;
            pReturn->rear = -1;
        }
        else{
            printf("오류 메모리할당");
            return NULL;
        }
    }
    
    else {
        printf("오류, 큐 크기");
        return NULL;
    }
    
    pReturn -> pElement = (ArrayQueueNode *)malloc(sizeof(ArrayQueueNode) * maxElementCount);
    if(pReturn->pElement != NULL){
        memset(pReturn->pElement,0,sizeof(ArrayQueueNode) * maxElementCount);
    }
    
    else{
        printf("오류 메모리할당");
        free(pReturn);
        return NULL;
    }
    return pReturn;
}

int enqueueAQ(ArrayQueue* pQueue, ArrayQueueNode element){
    int ret = FALSE;
    int i = 0;
    
    if(pQueue != NULL) {
        if(isArrayQueueFull(pQueue) == FALSE) {
            pQueue->rear++;
            pQueue->pElement[pQueue->rear] = element;
            pQueue->maxElementCount++;
            ret = TRUE;
        }
        
        else {
            printf("오류, 큐가 가득 참");
        }
    }
    
    return ret;
}

ArrayQueueNode *dequeueAQ(ArrayQueue* pQueue){
    ArrayQueueNode *pReturn = NULL;
    if (pQueue != NULL) {
        if(isArrayQueueEmpty(pQueue) == FALSE){
            pReturn = (ArrayQueueNode *)malloc(sizeof(ArrayQueueNode));
            if(pReturn != NULL) {
                pQueue->front++;
                *pReturn = pQueue->pElement[pQueue->front];
                pQueue->currentElementCount--;
            }
            else{
                printf("오류 메모리할당");
            }
        }
    }
    return pReturn;
}

ArrayQueueNode *peekAQ(ArrayQueue* pQueue){
    ArrayQueueNode *pReturn = NULL;
    if (pQueue != NULL){
        if(isArrayQueueEmpty(pQueue) == FALSE){
            pReturn = &(pQueue->pElement[front+1]);
        }
    }
    
    return pReturn;
}

int isArrayQueueFull(ArrayQueue* pQueue){
    int ret = FALSE;
    
    if(pQueue != NULL){
        if(pQueue->currentElementCount = pQueue->maxElementCount
        || pQueue->rear = pQueue->maxElementCount-1) {
            ret = TRUE;
        }
    }
    
    return ret;
}


            
