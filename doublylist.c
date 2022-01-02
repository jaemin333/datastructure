
DoublyList* createDoublyList(){
    DoublyList* pReturn = NULL;
    int i = 0;
    
    pReturn = (DoublyList*)malloc(sizeof(DoublyList));
    if(pReturn != NULL){
        memset(pReturn,0,sizeof(DoublyList));
        
        pReturn->headerNode.pLLink = &(pReturn->headerNode);
        pReturn->headerNode.pRLink = &(pReturn->headerNode);
        
    }
    
    else {
        printf("오류 메모리할당");
        return NULL;
    }
    
    return pReturn;
}

int addDLElement(DoublyList* pList, int position, DoublyListNode element){
    int ret = FALSE, i = 0;
    DoublyListNode *pPreNode, *pNewNode, *pTempNode = NULL;
    if(pList != NULL){
        if(position >=0 && position <= pList->currentElementCount ){
            pNewNode = (DoublyListNode*)malloc(sizeof(DoublyListNode));
            if(pNewNode == NULL){
                printf("오류 메모리할당");
                return ret;
            }
            
            *pNewNode = element;
            pNewNode->pLLink = NULL;
            pNewNode->pRLink = NULL;
            
            pPreNode = &(pList->headerNode);
            for(i=0; i < position; i++){
                pPreNode = pPreNode -> pRLink;
            }
            
            pNewNode->pLLink = pPreNode;
            pNewNode->pRLink = pPreNode->pRLink;
            pPreNode->pRLink = pNewNode;
            pNewNode->pRLink->pLLink = pNewNode;
            
            pList->currentElementCount++;
            ret = TRUE;
        }
        else{
            printf("오류 위치");
        }
    }
    return ret;
}


int removeDLElement(DoublyList* pList, int position) {
    int ret = FALSE;
    int i =0, nodeCount = 0;
    DoublyListNode *pPreNode = NULL, *pDelNode = NULL, pTempNode = NULL;
    
    if(pList != NULL){
        nodeCount = getDoublyListLength(pList);
        if(position >= 0 && positon < nodeCount-1){
            pPreNode = &(pList->headerNode);
            for(i=0; i < position; i++){
                pPreNode = pPreNode -> pRLink;
            }
            
            pDelNode = pPreNode->pRLink;
            
            pPreNode->pRLink = pDelNode->pRLink;
            pDelNode->pRLink->pLLink = pPreNode;
            free(pDelNode);
            
            pList->currentElementCount--;
            ret = TRUE;
        }
        else {
            printf("오류 위치");
        }
    }
    return ret;
}
