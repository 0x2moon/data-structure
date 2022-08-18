#include "libs/tad.h"
#include "libs/sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100000

int main(){
struct intVector *vector = create(TAM); 
   for (int i = 0; i < TAM; i++)
   {    
        int r = rand()%TAM;
        append(vector, r);
   }
   clock_t start = clock();
   mergesort(vector, 0, TAM);
   clock_t end = clock();
   double time = (double) (end - start) / CLOCKS_PER_SEC;
   printf ("\n\n\nTime = %lf", time);   
   return 0;
}