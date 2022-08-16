typedef struct int_vector intVector;

intVector *create(int tam);
void destroy(intVector **ref_vector);
int size(const intVector *vector);
int capacity(const intVector *vector);
int at(const intVector *vector, int pos);
int getvector(const intVector *vector, int index);
void append(intVector *vector, int n);
void print(const intVector *vector);