#include <stdio.h>

int main(){
    int jumlahAyam = 10;

while (jumlahAyam>0)
{
    printf("Anak ayam turun %d\n",jumlahAyam);
    jumlahAyam = jumlahAyam - 1;
    if (jumlahAyam > 0)
    {
        printf("Mati satu tinggal %d\n",jumlahAyam);
    }else{
        printf("Mati satu tinggal induknya");
    }   
}
return 0;
}