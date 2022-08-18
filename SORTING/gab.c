#include <stdio.h>
#define TAM 8
void mergesort(int v[],int inicio, int final);
void merge(int arr[], int l, int m, int r);
void print(int v[], int tam);

int main(){
    int v[] = { 0,3,6,8,9,10,7,2};
    mergesort(v, 0, TAM);
    return 0;
}

void mergesort(int v[], int inicio, int final){
        if (inicio < final)
        {   
			int meio = inicio + (final - inicio) / 2;
            mergesort(v, inicio,    meio);
            mergesort(v, meio + 1, final);
    	    merge(v,inicio,meio,final);
        }
}

void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* create temp arrays */
	int L[n1], R[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

void print(int v[], int tam){
    for (int i = 0; i < tam; i++)
    {
        printf("v[%d] = %d", i, v[i]);
    }
    
}
