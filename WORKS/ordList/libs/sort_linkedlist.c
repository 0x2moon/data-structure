#include "sort_linkedlist"
#include "tad_linkedlist"

void __swp(int *__a_vallue, int *__b_vallue){
    int aux;
    aux = *__a_vallue;
    *__a_vallue =  *__b_vallue;
    *__b_vallue = aux;
}

void __bubblesort_linkedlist_int(llint llint_vector){

}

void __selectionsort_linkedlist_int(llint llint_vector);
void __insertionsort_linkedlist_int(llint llint_vector); 
void __mergesort_linkedlist_int(llint llint_vector);
void __quicksort_linkedlist_int(llint llint_vector);