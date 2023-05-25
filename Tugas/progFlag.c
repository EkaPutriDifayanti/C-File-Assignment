#include <stdio.h>
int main (){

    int cari,alamat;
    int flag = 0;
    int i = 0;
    int data[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};

    printf("Masukkan angka yang dicari: ");
    scanf("%i", &cari);

    for(i; i<=25; i++)
    {
        if (data[i] == cari)
        {
            flag = 1;
            alamat = i;
        }
    }
    printf("\n\n------------------------------------\n\n");
    if(flag == 1)
    {
        printf("::data %d ditemukan dengan alamat : %d::  \n\n", cari, alamat);
    }
    else
    {
        printf("::data %d tidak ditemukan:: \n\n", cari);
    }
    return 0;
}