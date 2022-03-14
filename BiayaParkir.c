/* Nama File    : BiayaParkir.c */
/* Deskripsi    : Menghitung biaya parkir berdasarkan lamanya parkir*/
/* Nama         : Divia Shinta Sukarsaatmadja */
/* NIM          : 24060121140104 */
/* Tanggal      : Senin, 14 Maret 2022 */

#include <stdio.h>

int main (){
	/* Kamus */
	int a,b;

	/* Algoritma */
	printf("Program Biaya Parkir \n");
	printf("Jam lamanya parkir : ");
	scanf("%d", &a);

	if ( a > 2) {
		b = 2000 + (a-2) * 500 ;
		printf("Biaya parkir sebesar : Rp. %d", b);
    }
	else{
		b = 2000;
		printf("Biaya parkir sebesar : Rp. %d", b);
	}
	return 0;
}

