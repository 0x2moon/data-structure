#include "float_vector.h"
#include <stdio.h>


struct float_vector{
    int capacity;
    int size;
    float *data;
};

FloatVector *create(int tam ){

    FloatVector *vet  = (FloatVector *) calloc(1, sizeof(FloatVector));
    vet->capacity = tam;
    vet->size = 0;
    vet->data = (float *)calloc(vet->capacity,sizeof(float));

    return vet;
}

int size(const FloatVector *vector){
    return vector->size;
}

int capacity(const FloatVector *vector){
    return vector->capacity;
}

float at(const FloatVector *vector, int pos){
    if(pos < 0 || vector->size){
        fprintf(stderr, "error invalid positions\n");
        fprintf(stderr, "index [%d] is out if bounds\n");
        exit(1);
    }

    return vector->data[pos];

}

float get(const FloatVector *vector, int index){
    return vector->data[index];
}

void destroy(FloatVector **vet_ref){
    FloatVector *vet = *vet_ref;
    free(vet->data);
    free(vet);
        
}

bool _isfull(FloatVector *vector){
    if (vector->size == vector->capacity){
    return true;
    }   
    return false;
}

void append(FloatVector *vector, float n){
    if (_isfull(vector) == true){
           fprintf(stderr, "vector is full, realocation...\n");
           if ((vector = (FloatVector *) realloc((vector->capacity )+1 * sizeof(FloatVector))) != NULL){
               vector->data[vector->size+1] = n;
           }
    }
    vector->data[vector->size+1] = n;
}

void print(const FloatVector *vector){
    for (int i = 0; i < vector->size ; i++){
        fprintf(stdout, "\tvector->data[%d] = %f\n", i, vector->data[i]);
    }

}