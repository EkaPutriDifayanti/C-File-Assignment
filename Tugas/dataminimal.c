#include <stdio.h>
int main(){
    int x, min;

    printf("Masukkan data pertama: ");
    scanf("%d", &x);

    if (x != 9999){
        min = x;
    }
    while (x != 9999)
    {
        if (x < min)
        {
            min = x;
        }
        printf("Masukkan data selanjutnya: ");
        scanf("%d",&x);    
    }
    printf("Nilai Minimum: %d",min);
    return 0;
}