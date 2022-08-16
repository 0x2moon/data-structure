#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE_VECTOR 8

void swp(int *a, int *b){
    int aux;
    aux = *a;
    *a =  *b;
    *b = aux;
}

int *createvector(int size){
    int *vector = (int *) malloc (size * sizeof(int));
    for (int i = 0; i < size; i++){
        vector[i] = rand() % size;
    }
    return vector;
}

void printfvector(int *vector){
     
    for (int i = 0; i < SIZE_VECTOR; i++){
       printf("vector[%d] = %d \n", i, vector[i]);
    }
    printf("\n\n");
}

void selectionshort(int *vector){
    for (int i = 0; i < SIZE_VECTOR; i++){
        int min = i;
        for (int j = i; j < SIZE_VECTOR; j++)
        {
            if (vector[j] < vector[min])
            {
                min = j;
            }
        }
     swp(&vector[i], &vector[min]);
            
        
    }
    
}
int main(){
    int *vector   = createvector(SIZE_VECTOR);   
    clock_t start = clock();
    selectionshort(vector);
    clock_t end   = clock();
    int total  = (end - start) / CLOCKS_PER_SEC;
    printf(" tempo = %d \n", total);
    return 0;
}