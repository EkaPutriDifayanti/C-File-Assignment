#include <stdio.h>

int main(){
  int n, num = 1, sum = 0;

    printf("Menghitung Jumlah Deret Bilangan");
    printf("\nMasukkan banyaknya suku deret: ");
    scanf("%d", &n);

    // Penggunaan While
    while (num <= n)
    {
        sum += num;
        num++;
    }
    printf("\nJumlah deret bilangannya:%d", sum);

    // Penggunaan While-do
    num = 1, sum = 0;
    do
    {
        sum += num;
        num++;
    } while (num <= n);
    printf("\nJumlah deret bilangannya:%d", sum);

    return 0;   
}