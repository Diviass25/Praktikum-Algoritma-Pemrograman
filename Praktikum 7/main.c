#include <stdio.h>
#include <stdlib.h>
#include "sequential.h"

int main()
{
	//Kamus Lokal
	int IX;
	int Tabel_T[] = {1,2,3,4,5,6,7,8,9,10};
	int X = 8;
	int N = sizeof(Tabel_T) / sizeof(Tabel_T[0]);

 	//Algoritma
	SEQSearchX1(Tabel_T, N, &IX, X);
    if(IX == -1)
	{
    	printf("Elemen tidak ditemukan)\n");
    }
	else
	{
		printf("Elemen berada pada index ke-%d", IX);
	}
	return 0;
}
