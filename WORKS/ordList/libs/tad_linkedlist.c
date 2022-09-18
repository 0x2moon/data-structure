#include <stdio.h>
#include <stdlib.h>
#include "tad_linkedlist.h"

struct __linkedlist_int{
    int __struct_capacity;
    int __struct_size;
    llnode *__begin_node;
    llnode *__end_node;
};

struct __linkedlist_node{
    int __node_vallue;
    llnode *__next_nodellint;
};


llint *__create_linkedlist_int(int capacity_list){
    llint *linkedlist_int = (llint *) calloc (capacity_list, sizeof(llint));
    linkedlist_int->__struct_capacity = capacity_list;
    linkedlist_int->__struct_size = 0;
    linkedlist_int->__begin_node = NULL;
    linkedlist_int->__end_node = NULL;
    return linkedlist_int;
}

llnode *__create_linkedlist_node(){
    llnode *nodelist = (llnode *) malloc (sizeof(llnode));
    return nodelist;
}

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