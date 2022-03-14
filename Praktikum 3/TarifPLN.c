/* Nama File    : TarifPLN.c */
/* Deskripsi    : Menghitung besarnya tarif listrik sesuai golongan pada tarif yang diberlakukan*/
/* Nama         : Divia Shinta Sukarsaatmadja */
/* NIM          : 24060121140104 */
/* Tanggal      : Senin, 14 Maret 2022 */

#include <stdio.h>

int main (){
	/* Kamus */
	int d;
	int a;
	int g;
	int t;

	/* Algoritma */
	printf("Program Tarif PLN \n");
	printf("Jumlah daya listrik yang digunakan : ");
	scanf("%d", &d);
	printf("Golongan tarif listrik : ");
	scanf("%d", &g);

	switch (g){
        case 1 : a = 1000;
        break;
        case 2 : a = 2000;
        break;
        default:
        printf("\nMaaf, golongan tarif listrik tidak tersedia\n");
        break;
    }


	if (0 < d && d <= 100) {
		t = a * 100;
     } else if (100 < d && d < 1000){
        t = a * d;
     } else {
         t = a * d * 1.1;
        }
    printf("Besar tarif listrik yang harus Anda bayar : Rp. %d", t);

	return 0;
}

