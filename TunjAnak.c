/* Nama File    : TunjAnak.c */
/* Deskripsi    : Menghitung besar tunjangan anak yang diberikan sesuai aturan */
/* Nama         : Divia Shinta Sukarsaatmadja */
/* NIM          : 24060121140104 */
/* Tanggal      : Senin, 14 Maret 2022 */

#include <stdio.h>

int main (){
	/* Kamus */
	int c;
	int g;
	int total;

	/* Algoritma */
	printf("Program Tunjangan Anak \n");
	printf("Jumlah anak : ");
	scanf("%d", &c);
	printf("Gaji pokok : ");
	scanf("%d", &g);

	if (0 <= c && c < 3) {
		total = c * (g * 0.1);
		printf("Tunjangan anak yang Anda dapat sebesar : Rp. %d", total);
    }
	else {
		total = 3 * (g * 0.1);
		printf("Tunjangan anak yang Anda dapat sebesar : Rp. %d", total);
	}
	return 0;
}

