#include <stdio.h>

int main (){

    int a,b,c ;
    float d ;

    printf("--MENGHITUNG NILAI RATA-RATA 3 BILANGAN--\n");

    printf("Masukkan angka pertama : \n");
    scanf("%d",&a);

    printf("Masukkan angka kedua : \n");
    scanf("%d",&b);

    printf("Masukkan angka ketiga : \n");
    scanf("%d",&c);

    d =(float) (a + b + c) / 3;

    printf("Rata-rata bilangan adalah : %.2f",d);
}