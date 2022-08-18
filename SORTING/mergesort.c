#include <stdio.h>
#define TAM 8
void mergesort(int v[],int inicio, int final);
void merge( int v[], int inicio, int meio, int final);
void print(int v[], int tam);

int main(){
    int v[] = {0,3,6,8,9,10,7,2};
    print(v, TAM);
	printf("\n\naaaaaaaaaaa\n\n");
	mergesort(v, 0, TAM-1);
	print(v, TAM);
    return 0;
}

void mergesort(int v[], int inicio, int final){
	if (inicio < final)
	{   
		int meio = inicio + (final - inicio) / 2;
		mergesort(v, inicio, meio);
		mergesort(v, meio + 1, final);
		merge(v, inicio, meio, final);
	}
}

void merge( int v[], int inicio, int meio, int final){

	int controleesquerda = 0, controledireita = 0, controleprincipal = inicio;

	int tamanhoesquerda = meio - inicio + 1;
	int tamanhodireita  = final - meio;

	int esquerda[tamanhoesquerda];
	int direita [tamanhodireita];

	for (int i = 0; i < tamanhoesquerda; i++)
	{
		esquerda[i] = v[inicio + i];	
	}
	
	for (int i = 0; i < tamanhodireita; i++)
	{
		direita[i] = v[meio + 1 + i];
	}

	while (controleesquerda < tamanhoesquerda && controledireita < tamanhodireita)
	{
		if (esquerda[controleesquerda] >= direita[controledireita])
		{
			v[controleprincipal] = direita[controledireita];
			controledireita++;
		}
		
		else
		{
			v[controleprincipal] = esquerda[controleesquerda];
			controleesquerda++;
		}
		controleprincipal++;
	}
	
	while (controleesquerda < tamanhoesquerda)
	{
		v[controleprincipal] = esquerda[controleesquerda];
		controleesquerda++;
		controleprincipal++;
	}
	

	while (controledireita < tamanhodireita)
	{
		v[controleprincipal] = direita[controledireita];
		controledireita++;
		controleprincipal++;
	}


}

void print(int v[], int tam){
    for (int i = 0; i < tam; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }
    
}
