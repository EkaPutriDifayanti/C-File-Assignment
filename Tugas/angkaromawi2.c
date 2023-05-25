#include <stdio.h>
int main (){
    int angka, i;
    char romawi [13][3]= {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int nilai [13]= {1000,900,500,400,100,90,50,40,10,9,5,4,1};

    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &angka);

    if (angka < 1 || angka > 3999)
    {
        printf("Bilangan yang dimasukkan tidak valid\n");
        return 0;
    }
    for (i = 0; i < 13; i++)
    {
        while (angka >= nilai [i])
        {
            printf("%s",romawi[i]);
            angka -= nilai[i];
        }
    }
    printf("\n");
    return 0;
}