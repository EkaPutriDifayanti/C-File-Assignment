#include <stdio.h>

int mundur(int jumlah)
{   
    char tulisan[100];
    printf("Masukkan tulisan : ");
    gets(tulisan);
        if (jumlah == 0)
    {
        return 0;
    }
    else
    {
        printf("%s", tulisan);
        return mundur(jumlah - 1);
    }
}
int main()
{
    int jumlah;

    printf("Masukkan angka hitung mundur: ");
    scanf("%d", &jumlah);

    mundur(jumlah);
}