#include <stdio.h>
int main (){
    int i, j, m, n, flag = 0;

    printf("Masukkan ukuran baris: ");
    scanf("%d", &m);
    printf("Masukkan ukuran kolom: ");
    scanf("%d", &n);

    int matriks[m][n];
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &matriks[i][j]);
        }
    }
    printf("\n");

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d\t", matriks[i][j]);
        }
        printf("\n");
    }

    for (i = 1; i <= m; i++)
    {
        int elemen1 = 1;
        for (j = 1; j <= n; j++)
        {
            if (matriks[i][j] != 0)
            {
                elemen1 = 0;
                break;
            }
        }
        if (elemen1 == 1)
        {
            flag = 1;
            printf("Ada baris yang semua elemennya 0 yaitu baris ke-%d\n",i);
        }
    }
    if (flag == 0)
    {
        printf("Tidak ada baris yang semua elemennya 0 pada matriks ini.");
    }
    return 0;          
}