#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(){
 slinkedlist *slink = linkedlist_create();
 SNode *s = SNode_create(2);
 add_end(slink, 8);
 add_end(slink, 9);
 add_end(slink, 12);
 add_end(slink, 10);
 add_first(slink, 15);
 print_ll(slink);
return 0;
}