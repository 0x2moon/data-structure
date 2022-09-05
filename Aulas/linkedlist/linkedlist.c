#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

typedef struct _snode {
    int val;
    struct _snode *next;
}SNode;

typedef struct _slinked_list {
    SNode *begin;
    int size;
}slinkedlist;

slinkedlist *linkedlist_create(){
    slinkedlist *linkedlist = (slinkedlist *) calloc (1, sizeof(slinkedlist));
    linkedlist->begin = NULL;
    return linkedlist;
}

SNode *SNode_create(int val){
    
    SNode *snode = (SNode *) calloc (1, sizeof(SNode));
    snode->val = val;
    snode->next = NULL;

    return snode;
}
