#include <stdio.h>
#include <stdlib.h>
#include "libs/tad_linkedlist.h"
#include "libs/sort_linkedlist.h"
#define SIZELIST 10
int main(){
    
    llint *linkedlist_intvector = __create_linkedlist_int(SIZELIST);
    for(int i; i < SIZELIST; i++){
        __addFirst_linkedlist_int(linkedlist_intvector, rand()%SIZELIST);
    }

    __print_linkedlist_int(linkedlist_intvector);
    __bubblesort_linkedlist_int(linkedlist_intvector);
    __print_linkedlist_int(linkedlist_intvector);
    // printf("CERTO\n");
    // puts("compilou e executou sem erro");
    return 0;
}