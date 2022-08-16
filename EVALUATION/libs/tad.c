#include "tad.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct intVector *create(int tam ){

    struct intVector *vet = (struct intVector *) calloc(1, sizeof( struct intVector));
    vet->capacity = tam;
    vet->size = 0;
    vet->data = (int *)malloc(vet->capacity *sizeof(int));
    return vet;
}

int size(struct intVector *vector){
    return vector->size;
}

int capacity(struct intVector *vector){
    return vector->capacity;
}

int at(struct intVector *vector, int pos){
    if(pos < 0 || pos < vector->size){
        fprintf(stderr, "error invalid positions\n");
        fprintf(stderr, "index [%d] is out if bounds\n",pos);
        exit(1);
    }

    return vector->data[pos];

}

int getvector(struct intVector *vector, int index){
    return vector->data[index];
}

void destroy(struct intVector **vet_ref){
    struct intVector *vet = *vet_ref;
    free(vet->data);
    free(vet);
        
}

bool _isfull(struct intVector *vector){
    if (vector->size == vector->capacity){
    return true;
    }   
    return false;
}

void append(struct intVector *vector, int n){
    if (_isfull(vector) == true){
           fprintf(stderr, "vector is full, realocation...\n");
           if ((vector = (struct intVector *) realloc(vector,(vector->capacity +1) * sizeof(struct intVector))) != NULL){
               vector->data[(vector->size)+1] = n;
           }
    }

    vector->data[vector->size] = n;
    vector->size++;
}

void print(struct intVector *vector){
    for (int i = 0; i < vector->size; i++){
        printf("\tvector->data[%d] = %d\n", i, vector->data[i]);
    }

}