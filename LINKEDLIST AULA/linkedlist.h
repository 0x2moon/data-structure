#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <stdbool.h>

struct __node;
struct __linkedlist;

struct  __linkedlist *linkedlist_create(int sizecapacity);
struct  __node *node_create(struct __linkedlist *linkedlist, int val);

bool _isfull(struct __linkedlist *linkedlist);

void _add_first(struct __linkedlist *linkedlist, int val);
void _add_end(struct __linkedlist *linkedlist, int val);
void _add_ord(struct __linkedlist *linkedlist, int val);
void _search(struct __linkedlist *linkedlist, int val);
void _remove (struct __linkedlist *linkedlist, int pos);
void _printlinkedlist(struct __linkedlist *linkedlist);
#endif