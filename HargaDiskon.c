/* Nama File    : HargaDiskon.c */
/* Deskripsi    : Menghitung besarnya harga setelah diberikan diskon sesuai jenis diskon*/
/* Nama         : Divia Shinta Sukarsaatmadja */
/* NIM          : 24060121140104 */
/* Tanggal      : Senin, 14 Maret 2022 */

#include <stdio.h>

int main (){
	/* Kamus */
	int n;
	int d;
	char p;

	/* Algoritma */
	printf("Program Harga Diskon \n");
	printf("Harga awal produk : Rp. ");
	scanf("%d", &n);
	printf("Jenis diskon : ");
	scanf(" %c", &p);

	if (200 < n && n < 10000){
        switch(p){
            case 'A' :
                d = 0.9 * n;
                printf("Harga produk setelah diskon adalah : Rp. %d\n", d);
			break;

            case 'B' :
                d = 0.85 * n;
                printf("Harga produk setelah diskon adalah : Rp. %d\n", d);
			break;

            case 'C' :
                d = 0.8 * n;
                printf("Harga produk setelah diskon adalah : Rp. %d\n", d);
			break;
        }
    }
    else {printf("Maaf, jenis diskon tidak terdata");
	}
	return 0;
}

