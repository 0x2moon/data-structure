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
void add_first(slinkedlist *l, int val){
    SNode *p = SNode_create(val);
    p->next = l->begin;
    l->begin = p;
    l->size++;
}

void add_end(slinkedlist *l, int val){
    SNode *p = SNode_create(val);
    if (l->begin == NULL)
    {
        l->begin = p;
    }else{
        SNode *aux = l->begin;
        while (p->next != NULL)
        {
            aux = aux->next;
        }
        aux->next = p;
    }
    l->size++;    
}

void print_ll(slinkedlist *l){
    SNode *p = l->begin;
    printf("L -> ");
    while (p != NULL)
    {
        printf("%d -> ", p->next);
        p = p->next;
    }
    printf("NULL\n");
    
}