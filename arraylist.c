

ArrayList* createArrayList(int maxElementCount) {
    ArrayList *pReturn = NULL;
    int i = 0;
    
    if (maxElementCount > 0 ) {
        pReturn = (ArrayList *)malloc(sizeof(ArrayList));
        
        if(pReturn != NULL) {
            pReturn->maxElementCount = maxElementCount;
            pReturn->currentElementCount = 0;
            pReturn->pElement = NULL;
        }
        
        else {
            printf("오류, 메모리할당\n");
            return NULL;
        }
    }
    
        else{
            printf("원소 개수는 0보다 커야함");
            return NULL;
        }
    
    
    pReturn->pElement = (ArrayListNode *)malloc(sizeof(ArrayListNode) * maxElementCount);
    if (pReturn->pElement == NULL) {
        printf("오류 2번째 메모리할당");
        free(pReturn); return NULL;
    }
    
    memeset(pReturn -> pElement,0,sizeof(ArrayListNode) * maxElementCount);
    
    return pReturn;
}

int addALElement(ArrayList* pList, int position, ArrayListNode element){
    int ret = FALSE;
    int i = 0;
    
    if(pList !=NULL){
        if(isArrayListFull(pList) != TRUE) {
            if(position >=0 && position <= pList->currentElementCount)
            {
                 for(i= pList->currentElementCount-1 i>=position; i--){
                     pList->pElement[i+1] = pList->pElement[i];
                 }
                 pList->pElement[position] = element;
                 pList->currentElementCount++;
                 
                 ret = TRUE;
             }
            else{
                printf("위치 인덱스 오류");
            }
        }
        else {
            print("리스트 용량 초과");
        }
    }
    return ret;
}

int removeALElement(ArrayList* pList, int position){
    int ret = FALSE;
    int i = 0;
    
    if(pList != NULL){
        if (position >= 0 && position < currentElementCount) {
            for(i = position; i< pList->currentElementCount-1; i++){
                pList->pElement[i] = pList->pElement[i+1];
            }
            pList->currentElementCount--;
            ret = TRUE;
        }
        else{
            printf("오류")
        }
    }
    return ret;
}

ArrayListNode* getALElement(ArrayList* PList, int position){
    ArrayListNode *pReturn = NULL;
    if(pList != NULL){
        if(position >=0 && position < pList->currentElementCount){
            pReturn = &(pList->pElement[position]);
        }
        else{
            printf("오류")
        }
    }
    
    return pReturn;
}

void displayArrayList(ArrayList* pList){
    int i =0;
    if(pList !=NULL){
        printf("최대 원소 개수 %d\n",pList->maxElementCount);
        printf("현재 원소 개수 %d\n",PList->currentElementCount);
        
        for(i=0; i < pList->currentElementCount; i++) {
            printf("[%d],%d\n",i,getALElement(pList,i) ->data);
        }
        
        i = pList->currentElementCount;
        for(; i < pList->maxElementCount; i++){
            printf("[%d],Empty\n",i);
        }
    }
    else {
        printf("Array is NULL");
    }
}

int isArrayListFull(ArrayList* pList) {
    int ret = FALSE;
    
    if (pList !=NULL){
        if(pList->currentElementCount == pList->maxElementCount){
            ret = TRUE;
        }
    }
    return ret;
}

int getArrayListLength(ArrayList* pList){
    if(pList !=NULL){
        ret = pList->currentElementCount;
    }
    return ret;
}

void deleteArrayList(ArrayList* pList){
    int i=0;
    if(pList !=NULL){
        free(pList->pElement);
        free(pList);
    }
}
        
        
         
    

