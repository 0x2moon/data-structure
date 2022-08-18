#include <stdio.h>
#include <stdlib.h>
#include "tad.h"
#define TAM 8

void merge(struct intVector *vector, int inicio, int meio, int final){

	int controleesquerda = 0, controledireita = 0, controleprincipal = inicio;

	int tamanhoesquerda = meio - inicio + 1;
	int tamanhodireita  = final - meio;

	int esquerda[tamanhoesquerda];
	int direita [tamanhodireita];

	for (int i = 0; i < tamanhoesquerda; i++)
	{
		esquerda[i] = vector->data[inicio + i];	
	}
	
	for (int i = 0; i < tamanhodireita; i++)
	{
		direita[i] = vector->data[meio + 1 + i];
	}

	while (controleesquerda < tamanhoesquerda && controledireita < tamanhodireita)
	{
		if (esquerda[controleesquerda] >= direita[controledireita])
		{
			vector->data[controleprincipal] = direita[controledireita];
			controledireita++;
		}
		
		else
		{
			vector->data[controleprincipal] = esquerda[controleesquerda];
			controleesquerda++;
		}
		controleprincipal++;
	}
	
	while (controleesquerda < tamanhoesquerda)
	{
		vector->data[controleprincipal] = esquerda[controleesquerda];
		controleesquerda++;
		controleprincipal++;
	}
	

	while (controledireita < tamanhodireita)
	{
		vector->data[controleprincipal] = direita[controledireita];
		controledireita++;
		controleprincipal++;
	}


}

void mergesort(struct intVector *vector, int inicio, int final){
	if (inicio < final)
	{   
		int meio = inicio + (final - inicio) / 2;
		mergesort(vector, inicio, meio);
		mergesort(vector, meio + 1, final);
		merge(vector, inicio, meio, final);
	}
}