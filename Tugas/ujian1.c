#include <stdio.h>
int main (){

float jarak, kecepatan;
int waktu;

printf("Masukkan waktu(detik): ");
scanf("%d", &waktu);

kecepatan= 1+((waktu - 1)* 0.1);
jarak = kecepatan * waktu;
printf("Jarak yang ditempuh (meter): %.1f meter", jarak);

return 0;
} 