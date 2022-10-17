#include <stdio.h>
#include <stdlib.h>
#include "../include/duallist.h"

dlist *create_duallist(int capacity_dlist){
    dlist *duallist = (dlist *) calloc(capacity_dlist, sizeof(dlist));
    duallist->dlist_capacity = capacity_dlist;
    duallist->dlist_size = 0;
    duallist->__begin_node = NULL;
    duallist->__end_node = NULL;
    return duallist;
}

dnode *create_duallist_node(){
    dnode *node_duallist = (dnode *) malloc (sizeof(dnode));
    return node_duallist;
}

void duallist_destroy(dlist **ref_dlist){
    dlist *dlist_destroy = *ref_dlist;
    dnode *dnode_dlist_destroy = dlist_destroy->__begin_node;
    dnode *aux = NULL;
    while (dnode_dlist_destroy != NULL)
    {
        aux = dnode_dlist_destroy;
        dnode_dlist_destroy = dnode_dlist_destroy->next_nodedlist;
        free(aux);
    }
    free(dlist_destroy);
    *ref_dlist = NULL;
}


int __size_dlist(dlist *__dlist){
    return __dlist->dlist_size;
}

int __capacity_dlist(dlist *__dlist){
    return __dlist->dlist_capacity;
}
bool __full_dlist (dlist *__dlist);
bool __dlist_empty(dlist *__dlist);
.
void __addFirst_linkedlist_int(llint *llint_vector, int vallue){
    llnode *nodelist_first = __create_linkedlist_node();
    nodelist_first->__node_vallue = vallue;
    if(__start_linkedlist_int(llint_vector) == false){
        llint_vector->__begin_node = nodelist_first;
        llint_vector->__end_node = nodelist_first;
        nodelist_first->__next_nodellint = NULL;
    }else{
        nodelist_first->__next_nodellint = llint_vector->__begin_node;
        llint_vector->__begin_node = nodelist_first;
    }
    llint_vector->__struct_size++;
}



bool __start_linkedlist_int(llint *llint_vector){
 if((llint_vector->__struct_size > 0) && (llint_vector->__begin_node != NULL)){
    return true;
 }
 return false;   
}

void __print_linkedlist_int(llint *llint_vector){
    llnode *aux = llint_vector->__begin_node;
    printf("Linkedlist\n\t// ");
    while (aux != NULL)
    {
        printf("%d -> ", aux->__node_vallue);
        aux = aux->__next_nodellint;
    }
    printf("NULL\n");
}