/* Nama File    : InsertionSort.c */
/* Deskripsi    : Membuat program insertion sort yaitu metode pengurutan dengan cara 
				membandingkan dan mengurutkan dua data pertama pada array, kemudian 
				membandingkan data para array berikutnya apakah sudah berada di tempat 
				semestinya*/
/* Nama         : Divia Shinta Sukarsaatmadja */
/* NIM          : 24060121140104 */
/* Tanggal      : Sabtu, 30 April 2022 */

#include <math.h>
#include <stdio.h>

//Program insertion Sort
void insertionSort(int arr[], int n)
{
	//Kamus lokal
	int i, key, j;
	
	//Algoritma
	for (i = 1; i < n; i++) 
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) 
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

//Program print Array
void printArray(int arr[], int n)
{
	//Kamus lokal
	int i;
	
	//Algoritma
	for (i = 0; i < n; i++)
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
	n = sizeof(arr) / sizeof(arr[0]);
	insertionSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}


