/* Nama File    : UTSno3.c */
/* Deskripsi    : Menghitung besarnya penjumlahan sub array/tabel T yang berisi bilangan integer sembarang*/
/* Nama         : Divia Shinta Sukarsaatmadja */
/* NIM          : 24060121140104 */
/* Tanggal      : Senin, 28 Maret 2022 */

#include <stdio.h>
#include <math.h>

int main(){
    /*Kamus*/
    int N, i, j, jum;

    /*Algoritma*/

    printf("Menghitung Besarnya Penjumlahan Sub Array T\n");
    printf("\nJumlah data pada array T : ");
    scanf("%d", &N);

    int T[N];
    for(i = 0; i < N; i++){
        printf("\nNilai data pada indeks ke - %d : ", i);
        scanf("%d", &T[i]);
    }

    jum = 0;

    for(i = 0; i < N; i++){
        jum += T[i];
        for (j = i + 1; j < N; j++){
            jum += T[j];
        }
    }

    printf("\nMaka penjumlahan sub array/tabel T : %d\n", jum);
    return 0;
}


