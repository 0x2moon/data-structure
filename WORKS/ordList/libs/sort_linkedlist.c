#include "sort_linkedlist.h"
#include <stddef.h>


void __swp(int *__a_vallue, int *__b_vallue){
    int aux;
    aux = *__a_vallue;
    *__a_vallue =  *__b_vallue;
    *__b_vallue = aux;
}

void __bubblesort_linkedlist_int(llint *llint_vector){
    llnode *aux_node->__next_nodellint = llint_vector->__begin_node;
    for(int i = 0; i < llint_vector->__struct_size; i++){
        for(int j = 0; j < llint_vector->__struct_size; j++){
            
            if(aux_node->__node_vallue+(j+1) != NULL){
                if(aux_node->__node_vallue+j > aux_node->__node_vallue+(j+1)){
                    __swp(&aux_node->__node_vallue+j,&aux_node->__node_vallue+(j+1));
                }
            }
        }
    }
}