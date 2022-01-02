int addLLElement(LinkedList* pList, int position, ListNode element) {
    int ret=FALSE;
    int i =0;
    ListNode* pPreNode = NULL;
    ListNode* pNewNode = NULL;
    if(pList != NULL) {
        if (position >=0 && position <= pList->currentElementCount) {
            pNewNode = (ListNode*)malloc(sizeof(ListNode));
            if(pNewNode !=NULL) {
                *pNewNode = element;
                pNewNode->pLink = NULL;
                
                pPreNode = &(pList->headerNode);
                for(i=0; i < position; i++){
                    pPreNode = pPreNode->pLink;
                }
                
                pNewNode->pLink = pPreNode->pLink;
                pPreNode->pLink = pNewNode;
                
                pList->currentElementCount++;
                ret = TRUE;
            }
            else{
                printf("오류 메모리할당");
                return ret;
            }
        }
        else{
            printf("오류 위치");
        }
    }
}

int removeLLElement(LinkedList* pList,int position){
    int ret=FALSE;
    int i=0;
    int nodeCount=0;
    ListNode* pPreNode = NULL;
    ListNode* pDelNode = NULL;
    if(pList != NULL){
        nodeCount = getLinkedListLength(pList);
        if(position >= 0 && position <nodeCount){
            pPreNode = pPreNode->pLink;
            for(i=0; i < position; i++){
                pPreNode = pPreNode->pLink;
                }
                
        pDelNode = pPreNode->pLink;
        pPreNode->pLink = pDelNode->pLink;
        free(pDelNode);
        
        pList->currentElementCount--;
        ret =TRUE;
    }
    
    else{
        printf("오류 위치");
    }
}
    return ret;
} 

ListNode* getLLElement(LinkedList* pList, int position) {
    ListNode* pReturn = NULL;
    int i =0;
    ListNode* pNode = NULL;
    if(pList != NULL){
        if(position >=0 && position <pList->currentElementCount){
            pNode=&(pList->headerNode);
            for(i=0; i<=position; i++){
                pNode = pNode->pLink;
            }
            
            pReturn = pNode;
        }
    }
    return pReturn;
}

void



