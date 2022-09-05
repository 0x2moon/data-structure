#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct _snode SNode;
typedef struct _slinked_list slinkedlist;

slinkedlist *linkedlist_create();
SNode *SNode_create(int val);

#endif