//Nama Folder	: Praktikum 7
//Nama Program 	: sequential.c
//Tugas		 	: Membuat soal tentang searching (bebas) dengan algoritma sequential atau binary.
//				Minimal elemen arraynya ada 10.

//Membuat soal searching
//Soal			: N = 10, T berisi {1,2,3,4,5,6,7,8,9,10} X = 8
// 				Pemeriksaan dilakukan terhadap {1,2,3,4,5,6,7,8}
//				Output: IX = 7
//Deskripsi    : Mencari angka 8 pada Tabel T [1..N] secara sequential mulai dari T1.
// 				Hasilnya adalah indeks IX dimana Tix = X (i terkecil).
//				IX = 0 jika tidak ketemu.
//				Skema pencarian tanpa boolean.

//Identitas
//Nama      	: Divia Shinta Sukarsaatmadja
//NIM	       	: 24060121140104
//Kelas     	: Informatika B
//Lab			: B1
//Tanggal 		: Sabtu, 16 April 2022

#include <stdio.h>
#include "sequential.h"

void SEQSearchX1(int T[], int N, int *IX, int X)
{
	//Kamus Lokal
	int i;

	//Algoritma
	i = 0;
    while (i < N-1 && X != T[i])
	{
        i += 1;
    }
    if (T[i] == X)
	{
        *IX = i;
    }
	else
	{
        *IX = -1;
    }
}



