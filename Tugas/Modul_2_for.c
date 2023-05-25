#include <stdio.h>
int main(){
  int n, num, sum = 0;

    printf("Menghitung Jumlah Deret Bilangan");
    printf("\nMasukkan banyaknya suku deret: ");
    scanf("%d", &n);

    // Penggunaan For
    for (num = 1; num <= n; num ++)
    {
      sum += num;
    }
    printf("Jumlah deret bilangannya: %d", sum);

    return 0;
}