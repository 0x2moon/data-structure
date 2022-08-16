#include "tad.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct int_vector{
    int capacity;
    int size;
    int *data;
};

intVector *create(int tam ){

    intVector *vet  = (intVector *) calloc(1, sizeof(intVector));
    vet->capacity = tam;
    vet->size = 0;
    vet->data = (int *)calloc(vet->capacity,sizeof(int));
    return vet;
}

int size(const intVector *vector){
    return vector->size;
}

int capacity(const intVector *vector){
    return vector->capacity;
}

int at(const intVector *vector, int pos){
    if(pos < 0 || pos < vector->size){
        fprintf(stderr, "error invalid positions\n");
        fprintf(stderr, "index [%d] is out if bounds\n",pos);
        exit(1);
    }

    return vector->data[pos];

}

int getvector(const intVector *vector, int index){
    return vector->data[index];
}

void destroy(intVector **vet_ref){
    intVector *vet = *vet_ref;
    free(vet->data);
    free(vet);
        
}

bool _isfull(intVector *vector){
    if (vector->size == vector->capacity){
    return true;
    }   
    return false;
}

void append(intVector *vector, int n){
    if (_isfull(vector) == true){
           fprintf(stderr, "vector is full, realocation...\n");
           if ((vector = (intVector *) realloc(vector,(vector->capacity +1) * sizeof(intVector))) != NULL){
               vector->data[(vector->size)+1] = n;
           }
    }
    vector->data[vector->size+1] = n;
}

void print(const intVector *vector){
    for (int i = 0; i < vector->size ; i++){
        fprintf(stdout, "\tvector->data[%d] = %d\n", i, vector->data[i]);
    }

}