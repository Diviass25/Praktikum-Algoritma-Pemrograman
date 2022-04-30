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

