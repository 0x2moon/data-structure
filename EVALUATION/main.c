#include "libs/tad.h"
#include "libs/sort.h"
#include <stdio.h>
#include <stdlib.h>
#define TAM 8

int main(){
struct intVector *vector = create(TAM); 
   for (int i = 0; i < TAM; i++)
   {    
        int r = rand()%TAM;
        append(vector, r);
   }
   
   print(vector);
   mergeSort(vector, 0, TAM);
   printf ("\n\nOrdenado \n\n\n");
   print(vector);
    return 0;
}