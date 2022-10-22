#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#define SIZE_LIST 5

int main(){
 
 struct  __linkedlist *list = linkedlist_create(SIZE_LIST);
   struct  __node *nodelist = node_create(list, 15);
  
    // for (int i = 0; i < SIZE_LIST; i++)
    // {
    //      struct  __node *nodelist = node_create(list, i*15);
    // }
    
 _printlinkedlist(list);
return 0;
}

//Platzi Theme e outrun meets