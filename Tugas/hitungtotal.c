#include <stdio.h>

int hitungTotal(int nilai){
    int jumlah = 0;
    for (int angka = 1; angka <= nilai; angka++)
    {
        jumlah += angka;
    }
    return jumlah;
}
int main (){
    int nilai, total;
    printf("Masukkan nilainya: ");
    scanf("%d", &nilai);

    total = hitungTotal(nilai);
    printf("Total bilangannya: %d", total);
    return 0;
}