#include <stdio.h>
int main(){
    int x, y, z, temp;

    printf("Masukkan nilai x: \n");
    scanf("%d", &x);
    printf("Masukkan nilai y: \n");
    scanf("%d", &y);
    printf("Masukkan nilai z: \n");
    scanf("%d", &z);

    printf("Nilai sebelum ditukar: %d, %d, %d\n", x, y, z);
    temp = x;
    x = y;
    y = z;
    z = temp;
    printf("Nilai setelah ditukar: %d, %d, %d",x, y, z);
    
    return 0;
}