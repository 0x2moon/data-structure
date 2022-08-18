/*#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

void merge(struct intVector *vector, int l, int m, int r)
{
	// variaveis de controle
	int i, j, k;
	// indici
	int n1 = m - l + 1;
	int n2 = r - m;


	int L[n1], R[n2];

	for (i = 0; i < n1; i++)
		L[i] = vector->data[ l + i];
	for (j = 0; j < n2; j++)
		R[j] = vector->data[m + 1 + j];

	
	i = 0; j = 0; k = l;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			vector->data[k] = L[i];
			i++;
		}
		else {
			vector->data[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		vector->data[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		vector->data[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(struct intVector *vector, int l, int r)
{
	if (l < r) {
		int m = l + (r - l) / 2;
		mergeSort(vector, l, m);
		mergeSort(vector, m + 1, r);

		merge(vector, l, m, r);
	}
}

//refazer do inicio
*/