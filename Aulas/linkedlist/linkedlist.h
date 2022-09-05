#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct _snode SNode;
typedef struct _slinked_list slinkedlist;

slinkedlist *linkedlist_create();
SNode *SNode_create(int val);

void add_first(slinkedlist *l, int val);
void add_end(slinkedlist *l, int val);

void print_ll(slinkedlist *l);

#endif

//entregar no final do mes uma lista ordenada para inserir no meio