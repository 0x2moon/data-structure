#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

struct __linkedlist{
    int size;
    int capacity;
    struct __node *begin;
    struct __node *end;
};

struct __node{
    int val;
    struct __node *next;
};

bool _isfull(struct __linkedlist *linkedlist){
    if (linkedlist->capacity > linkedlist->size)
    {
        return false;
    }
    return true;
}

struct  __linkedlist *linkedlist_create(int sizecapacity){
    struct  __linkedlist *newlinkedlist = (struct  __linkedlist *) calloc (sizecapacity, sizeof(struct  __linkedlist));
    newlinkedlist->capacity = sizecapacity;
    newlinkedlist->size = 0;
    newlinkedlist->begin = NULL;
    newlinkedlist->end = NULL;
    return newlinkedlist;
}

struct  __node *node_create(struct __linkedlist *linkedlist, int val){
   if (_isfull != false)
   {
    struct __node *newnode = ( struct __node *) malloc (sizeof(struct __node));
    newnode->next = NULL;
    newnode->val = val;
        if (linkedlist->size == 0)
        {
            linkedlist->begin = newnode;
            linkedlist->end = NULL;
        }else{
            newnode->next = linkedlist->end;
            linkedlist->end = newnode;
        }
        linkedlist->size++;
        return newnode;
   }
   
    
}

void _printlinkedlist(struct __linkedlist *linkedlist){
    struct __node *p = linkedlist->begin;
    printf("Linkedlist -> ");
    while (p != NULL)
    {
        printf("%d -> ", p->val);
        p = p->next;
    }
    printf("NULL\n");
    
}