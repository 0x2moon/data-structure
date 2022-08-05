#include "float_vector.h"

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

void destroy(FloatVector **vet_ref){

FloatVector *vet = *vet_ref;
free(vet->data);
free(vet);

}
