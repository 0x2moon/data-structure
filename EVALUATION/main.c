#include "libs/tad.h"
#include "libs/sort.h"
#include <stdio.h>
#define TAM 8

int main(){
    intVector *vector = create(TAM); 
for (int i = 0; i < TAM; i++)
{
    append(vector, i);
}

print(vector);

mergeSort(vector, 0, TAM);
print(vector);

    return 0;
}