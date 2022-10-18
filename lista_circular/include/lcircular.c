#include <stdio.h>
#include <stdlib.h>
#include "lib/lcircular.h"

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

struct  __listacircular *lcircular_create(){
    struct __listacircular *clist = (struct __listacircular *) malloc(sizeof(struct __listacircular));
    clist->size = 0;
    clist->begin = NULL;
    clist->end = NULL;
    return clist;
}

struct  __node *node_create(struct __listacircular * clist, int val){
    struct __node *cnode = (struct __node *) malloc(sizeof(struct __node));
    clist->size++;
    cnode->val = val;
    //continuar
}