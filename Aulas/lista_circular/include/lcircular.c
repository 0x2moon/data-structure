#include <stdio.h>
#include <stdlib.h>
#include "./../lib/lcircular.h"

struct __listacircular{
    int size;
    struct __node *begin;
    struct __node *end;
};

struct __node{
    int val;
    struct __node *next;
    struct __node *prev;
};


bool _isempty(struct __listacircular *clist){
    if(clist->begin == NULL && clist->end == NULL){
        return true;
        }
    return false;
}

struct  __listacircular *lcircular_create(){
    struct __listacircular *clist = (struct __listacircular *) malloc(sizeof(struct __listacircular));
    clist->size = 0;
    clist->begin = NULL;
    clist->end = NULL;
    return clist;
}

struct  __node *node_create(){
    struct __node *cnode = (struct __node *) malloc(sizeof(struct __node));
    return cnode;
}

void _add_first(struct __listacircular *clist, int val){
    struct __node *cnode = node_create();
    if(_isempty(clist) == true){
        clist->begin = cnode;
        clist->end = cnode;
    }else{
        cnode->next= clist->begin;
        clist->begin = cnode;
        cnode->prev= clist->end;
        
    }
    clist->size++;
    cnode->val = val;
}

void _add_end(struct __listacircular *clist, int val){
    struct __node *cnode = node_create();
    cnode->val = val;
    clist->size++;
    if(_isempty(clist) == true){
        clist->begin = cnode;
        clist->end = cnode;
    }else{
        cnode->prev= clist->end;
        clist->end = cnode;
        cnode->next= clist->begin;
        
    }
}

void _remove(struct __listacircular *clist, int pos){
    struct __node *auxnode = node_create();
    struct __node *aux = node_create(); 
    auxnode = clist->begin;
    while (auxnode->val != pos)
    {
        auxnode->next;
        aux = auxnode;
    }
    if(aux->val == pos){
        auxnode = aux->prev;
        auxnode->next = aux->next;
        auxnode = aux->next;
        auxnode->prev = aux->prev;
        free(aux);
    }
    clist->size--;
    auxnode = NULL;
    aux = NULL;
    free(aux);
    free(auxnode);
}

void _search (struct __listacircular *clist, int val){
    struct __node *auxnode = node_create();
    auxnode = clist->begin;
    for (size_t i = 0; i < clist->size; i++)
    {
        if (auxnode->val == val)
        {
            fprintf(stdout, "\nValue - %d | adress - %x\n", auxnode->val, *auxnode);
        }
        auxnode->next;
    }
    
    /*while (auxnode != clist->end)
    {
        if (auxnode->val == val)
        {
            fprintf(stdout, "Value - %d | adress - %x\n", auxnode->val, *auxnode);
        }
        auxnode->next;
    }*/

    
}

void _print_listacircular(struct __listacircular *clist){
    struct __node *aux = node_create();
    aux = clist->begin;
    fprintf(stdout, "Lista circular ->");
    for (size_t i = 0; i < clist->size; i++)
    {
        fprintf(stdout, " %d ->", aux->val);
        aux->next;
    }
    fprintf(stdout, " Lista circular");
    aux = NULL;
    free(aux);    
}

void _print_invert_listacircular(struct __listacircular *clist){
        struct __node *aux = node_create();
    aux = clist->end;
    fprintf(stdout, "Lista circular ->");
    for (size_t i = 0; i > clist->size; i++)
    {
        fprintf(stdout, " %d ->", aux->val);
        aux->prev;
    }
    fprintf(stdout, " -> Lista circular");
    aux = NULL;
    free(aux);
}
