/* Nama File    : SelectionSort.c */
/* Deskripsi    : Membuat program selection sort yaitu metode pengurutan dengan 
				mencari nilai data terkecil dimulai dari data diposisi 0 hingga diposisi N-1*/
/* Nama         : Divia Shinta Sukarsaatmadja */
/* NIM          : 24060121140104 */
/* Tanggal      : Jumat, 29 April 2022 */

#include <stdio.h>

//Program swap
void swap(int *a, int *b)
{
	//Kamus lokal
	int temp;
	
	//Algoritma
	temp = *a;
	*a = *b;
	*b = temp;
}

//Program selection Sort
void selectionSort(int arr[], int n)
{
	//Kamus lokal
	int i, j, min_idx;

	//Algoritma
	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
		{
			min_idx = i;
			if (arr[j] < arr[min_idx])
			{
				min_idx = j;
			}
		}
		swap(&arr[min_idx], &arr[i]);
	}
}

//Program print Array
void printArray(int arr[], int size)
{
	//Kamus lokal
	int i;
	
	//Algoritma
	for (i=0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//Program main
int main()
{
	//Kamus lokal
	int arr[] = {25,46,48,79,45,13,23,26,28,27,78};
	int n;
	
	//Algoritma
	n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}

