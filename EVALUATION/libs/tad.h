
struct intVector{
    int capacity;
    int size;
    int *data;
};
struct intVector *create(int tam);
void destroy(struct intVector **ref_vector);
int size(struct intVector *vector);
int capacity(struct intVector *vector);
int at(struct intVector *vector, int pos);
int getvector(struct intVector *vector, int index);
void append(struct intVector *vector, int n);
void print(struct intVector *vector);