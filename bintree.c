BinTree* makeBinTree(BinTreeNode rootNode){
    BinTree *pReturn = NULL;
    pReturn = (BinTree *)malloc(sizeof(BinTree));
    if(pReturn!=NULL){
        pReturn->pRootNode = (BinTreeNode *)malloc(sizeof(BinTreeNode));
        if(pReturn->pRootNode!=NULL){
            *(pReturn->pRootNode) = rootNode;
            pReturn->pRootNode->pLeftChild = NULL;
            pReturn->pRootNode->pRightChild = NULL;
        }
        
        else{
            printf("���� �޸��Ҵ�");
            free(pReturn):
            pReturn = NULL;
        }
    }
    
    else {
        printf("���� �޸��Ҵ�");
    }
    
    return pReturn;
}


BinTreeNode* insertLeftChildNodeBT(BinTreeNode* pParentNode, BinTreeNode element){
    BinTreeNode *pReturn = NULL;
    if(pParentNode != NULL){
        if(pParentNode->pLeftChild ==NULL){
            pParentNode->pLeftChild = (BinTreeNode *)malloc(sizeof(BinTreeNode));
            if(pParentNode->pLeftChild != NULL){
                *(pParentNode->pLeftChild)= element;
                pParentNode->pLeftChild->pLeftChild = NULL;
                pParentNode->pLeftChild->pRightChild = NULL;
                pReturn = pLeftChild->pLeftChild;
            }
            
            else{
                printf("���� �޸� �Ҵ�");
            }
        }
        
        else{
        printf("���� �̹� ��� ����");
    }
}

return pReturn;
}

BinTreeNode* insertRightChildNodeBT(BinTreeNode* pParentNode, BinTreeNode element){
    BinTreeNode *pReturn = NULL;
    if(pParentNode != NULL){
        if(pParentNode->pRightChild ==NULL){
            pParentNode->pRightChild = (BinTreeNode *)malloc(sizeof(BinTreeNode));
            if(pParentNode->pRightChild != NULL){
                *(pParentNode->pRightChild)= element;
                pParentNode->pRightChild->pLeftChild = NULL;
                pParentNode->pRightChild->pRightChild = NULL;
                pReturn = pParentNode->pRightChild;
            }
            
            else{
                printf("���� �޸� �Ҵ�");
            }
        }
        
        else{
        printf("���� �̹� ��� ����");
    }
}

return pReturn;
}

BinTreeNode* getRootNodeBT(BinTree* PBinTree){
    BinTreeNode* pReturn = NULL;
    if(pBinTree!=NULL){
        pReturn = pBinTree->pRootNode;
    }
    
    return pReturn;
}

BinTreeNode* getLeftChildNodeBt(BinTreeNoed* pNode){
    BinTreeNode* pReturn =NULL;
    
    if(pNode != NULL){
        pReturn = pNode->pLeftChild;
    }
    
    return pReturn;
}

BinTreeNode* getRightChildNodeBt(BinTreeNoed* pNode){
    BinTreeNode* pReturn =NULL;
    
    if(pNode != NULL){
        pReturn = pNode->pRightChild;
    }
    
    return pReturn;
}

void deleteBinTree(BinTree* pBinTree){
    if(pBinTree!=NULL){
        deleteBinTreeNode(pBinTree->pRootNode);
        free(pBinTree);
    }
}

void deleteBinTreeNode(BinTreeNode* pNode){
    if(pNode!=NULL){
        deleteBinTreeNode(pNode->pLeftChild);
        deleteBinTreeNode(pNode->pRightChild);
        free(pNode);
    }
}
