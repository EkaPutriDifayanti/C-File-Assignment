#include <stdio.h>
int main (){
    int angka;
    printf("Bilangan angka romawi dari ");
    scanf("%d", &angka);

    if (angka < 1 || angka > 10)
    {
        printf("Angka yang diinput tidak valid");
        return 0;
    }
    switch (angka)
    {
    case 10:
        printf("X");
        break;
    case 9:
        printf("IX");
        break;
    case 4:
        printf("IV");
        break;
    default:
        if (angka >= 5)
        {
        printf("V");
        angka -= 5;
        }
        while (angka > 0)
        {
        printf("I");
        angka --;
        }
    }
    return 0;
}