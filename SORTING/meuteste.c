#include <stdio.h>

#define TAM 6
 
void merge(int arr[], int esquerda, int meio, int direita);
void mergeshort(int arr[], int esquerda, int direita);
void printArray(int A[], int size);
 
 int main(){

    int arr[] = { 12, 11, 13, 5, 6, 7 };
    mergeshort(arr, 0, TAM);

    return 0;
 }


void merge(int arr[], int esquerda, int direita, int meio){
   
    // variaveis de controle
    int vetor_arr, vetor1, vetor2;
    // tamanho dos dois vetores
    int tamanhovetor1 = meio - esquerda + 1;
    printf("tamanho do vetor 1 (direita)\t%d\n",tamanhovetor1);
    int tamanhovetor2 = direita - meio;
    printf("tamanho do vetor 2 (esquerda)\t%d\n",tamanhovetor2);
    // criar veotor dividido
    int vetdireita [tamanhovetor2];
    int vetesquerda[tamanhovetor1];
    // preencher o vetor direito 
    for (vetor1 = 0; vetor1 < tamanhovetor1; vetor1++)
    {
        vetesquerda[vetor1] = arr[esquerda + vetor1]; 
        printf("vetor esquerda[%d] = %d", vetor1, vetesquerda[vetor1]);
        // pq ?
    }
     for (vetor2 = 0; vetor2 < tamanhovetor2; vetor2++)
    {
        vetdireita[vetor2] = arr[meio + 1 + vetor2];
        printf("vetor direita[%d] = %d", vetor2, vetdireita[vetor2]); 
        // pq ?
    }

    vetor1 = 0; vetor2 = 0;
    vetor_arr = esquerda;

    // ordenar o vetor
    while(vetor1 < tamanhovetor1 && vetor2 < tamanhovetor2)
    {
        if (vetesquerda[vetor1] <= vetdireita[vetor2])
        {
            arr[vetor_arr] = vetesquerda[vetor1];
            vetor1++;
        }else
        {
            arr[vetor_arr] = vetdireita[vetor2];
            vetor2++;
        }
        
        vetor_arr++;
        
    }

    // sobras não ordenadas
    while (vetor1 <tamanhovetor1)
    {
        arr[vetor_arr] = vetesquerda [vetor1];
        vetor1++; vetor_arr++;
    }
    

    while (vetor2 <tamanhovetor2)
    {
        arr[vetor_arr] = vetesquerda [vetor2];
        vetor2++; vetor_arr++;
    }
    
}


void mergeshort(int arr[], int esquerda, int direita){
    int meio = esquerda + (direita - esquerda)/2;
    mergeshort(arr,esquerda, meio);
    mergeshort(arr,meio+1,direita);
    merge(arr, esquerda, meio, direita);
    
}

void printArray(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("a [%d] = %d \n", i, A[i]);
	printf("\n");
}