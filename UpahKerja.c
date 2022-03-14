/* Nama File    : UpahKerja.c */
/* Deskripsi    : Menghitung upah kerja sesuai dengan golongan yang tertera pada tabel upah*/
/* Nama         : Divia Shinta Sukarsaatmadja */
/* NIM          : 24060121140104 */
/* Tanggal      : Senin, 14 Maret 2022 */

#include <stdio.h>

int main (){
	/* Kamus */
	int j;
	int g;
	int U;
	int total;

	/* Algoritma */
	printf("Program Upah Kerja \n");
	printf("Jam kerja per minggu  : ");
	scanf("%d", &j);
	printf("Golongan pekerja : ");
	scanf("%d", &g);

	switch (g){
        case 1 : U = 1000;
        break;
        case 2 : U = 1500;
        break;
        case 3 : U = 2000;
        break;
        case 4 : U = 2500;
        break;
        default:
            printf("\n Maaf, golongan pekerja tidak tersedia\n");
        break;
        }


    if (0 < j && j < 40){
        total = j * U;
    }else {
        total = U * 40 + ((j - 40) * 1.5 * U);
        }
    printf("Upah kerja sebesar : %d", total);

	return 0;
}

