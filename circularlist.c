int addCLElement(CircularList* pList, int position, CircularListNode element){
    int ret = FALSE;
    int i =0;
    CircularListNode *pPreNode = NULL, *pNewNode = NULL, *pLastNode = NULL;
    if(pList != NULL){
        if(position >0 && position <= pList->currentElementCount){
            pNewNode = (CircularListNode*)malloc(sizeof(CircularListNode));
            if (pNewNode ==NULL){
                printf("오류 메모리할당")
                return ret;
            }
            *pNewNode = element;
            pNewNode->pLink = NULL;
            
            if(position == 0) {
                if(pList->currentElementCount == 0){
                    pList->pLink = pNewNode;
                    pewNode->pLink = pNewNode;
                }
                else {
                    pLastNode = pList->pLink;
                    while(pLastNode->pLink != pList->pLink) {
                        pLastNode = pLastNode ->pLink;
                    }
                    pList->pLink = pNewNode;
                    pNewNode->pLink = pLastNode->pLink;
                    pLastNode->pLink = pNewNode;    
                }
                
            }
            
            else {
                pPreNode = pList->pLink;
                for(i=0; i < position-1; i++){
                    pPreNode = pPreNode->pLink;
                }
                pNewNode->pLink = pPreNode->pLink;
                pPreNode->pLink = pNewNode;
            }
            
            pList->currentElementCount++;
            ret = TRUE;
        }
        else{
            printf("오류 위치인덱스");
        }
    }
    return ret;
}

int removeCLElement(CircularList* pList, int position){
    int ret = FALSE;
    int i = 0, nodeCount = 0;
    CircularListNode *pPreNode = NULL, *pDelNode = NULL, *pLastNode = NULL;
    
    if(pList != NULL){
        nodeCount = getCircularListLength(pList);
        if(position >=0 && position < nodeCount){
            if(position == 0 ){
                pDelNode = pList->pLink;
                if(nodeCount == 1){
                    free(pDelNode);
                    pList->pLink = NULL;
                }
                else {
                    pLastNode = pList->pLink;
                    while(pLastNode->pLink != pList->pLink){
                        pLastNode = pLastNode->pLink;
                    }
                    pLastNode->pLink = pDelNode->pLink;
                    pList->pLink = pDelNode->pLink;
                    free(pDelNode);
                }
            }
            
            else {
                pPreNode = pList->pLink;
                for(i=0; i < position-1; i++){
                    pPreNode = pPreNode->pLink;
                }
                
                pDelNode = pPreNode->pLink;
                pPreNode->pLink = pDelNode->pLink;
                free(pDelNode);
            }
            
            pList->currentElementCount--;
            ret = TRUE; 
    }
        else{
            printf("오류 위치 인덱스);
        }
    }
    return ret;
}



                    
        
        
        
        
        
        
        
        
        
        
        
        
        
