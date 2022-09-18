#ifndef TAD_LINKED_LIST_H
#define TAD_LINKED_LIST_H
#include <stdbool.h>

typedef struct __linkedlist_int llint;
typedef struct __linkedlist_node llnode;

llint *__create_linkedlist_int(int capacity_list);
llnode *__create_linkedlist_node();
void destroy(llint **ref_llint_vector);

int __size_linkedlist_int(llint *llint_vector);
int __capacity_linkedlist_int(llint *llint_vector);
bool __full_linkedlist_int(llint *llint_vector);
bool __start_linkedlist_int(llint *llint_vector);

void __addFirst_linkedlist_int(llint *llint_vector, int vallue);
void __addEnd_linkedlist_int(llint *llint_vector, int vallue);
void __addOrd_linkedlist_int(llint *llint_vector, int vallue);

void __search_linkedlist_int(llint *llint_vector, int vallue);
void __removeVallue_linkedlist_int(llint *llint_vector, int vallue);

void __print_linkedlist_int(llint *llint_vector);
#endif