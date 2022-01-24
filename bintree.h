#ifndef _BIN_TREE_
#define _BIN_TREE_

typedef struct BinTreeNodeType{
    char data;
    
    struct BinTreeNodeType* pLeftChild;
    struct BinTreeNodeType* pRightChild;
} BinTreeNode;

typedef struct BinTreeType{
    struct BinTreeNodeType* pRootNode;
} BinTree;


    
