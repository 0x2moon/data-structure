#ifndef DUAL_LIST_H
#define DUAL_LIST_H
#include <stdbool.h>

typedef struct duallist dlist;
typedef struct duallist_node dnode;

struct duallist{
    int dlist_capacity;
    int dlist_size;
    dnode *__begin_node;
    dnode *__end_node;
};

struct duallist_node{
    int dnode_vallue;
    dnode *next_nodedlist;
};

dlist *create_duallist(int capacity_dlist);
dnode *create_duallist_node();
void duallist_destroy(dlist **ref_dlist);

int __size_dlist(dlist *__dlist);
int __capacity_dlist(dlist *__dlist);
bool __full_dlist (dlist *__dlist);
bool __dlist_empty(dlist *__dlist);


void addFirst_dlist(dlist *__dlist, int vallue);
void addlast_dlist(dlist *__dlist, int vallue);
void addOrd_dlist(dlist *__dlist, int vallue);

void search_dlist(dlist *__dlist, int vallue);
void subst_vallue_dlist(dlist *__dlist, int vallue);

void print_dlist (dlist *__dlist);
#endif