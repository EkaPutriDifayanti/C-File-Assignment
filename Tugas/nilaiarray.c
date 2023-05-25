#include <stdio.h>

int main (){
    int A[10] = {92, 84, 90, 96, 100, 88, 72, 100, 92, 90};
    int terbesar = A[0], terkecil = A[0];
    int jumNilaiTerbesar = 0, jumNilaiTerkecil = 0, i;
    int lokasiTerbesar[10], lokasiTerkecil[10];
    int j = 0, k = 0;

    for (i = 0; i < 10; i++)
    {
        if (A[i] > terbesar)
        {
            terbesar = A[i];
            jumNilaiTerbesar = 1;
            lokasiTerbesar[0] = i;
            j = 1;
        }
        else if (A[i] == terbesar)
        {
            jumNilaiTerbesar++;
            lokasiTerbesar[j] = i;
            j++;
        }
        else if (A[i] < terkecil)
        {
            terkecil = A[i];
            jumNilaiTerkecil = 1;
            lokasiTerkecil[0] = i;
            k = 1;
        }
        else if (A[i] == terkecil)
        {
            jumNilaiTerkecil++;
            lokasiTerkecil[k] = i;
            k = 1;
        }
    }
    printf("Nilai terbesar: %d\n", terbesar);
    printf("Jumlah mahasiswa yang mendapatkan nilai terbesar: %d\n", jumNilaiTerbesar);
    printf("Lokasi indeks nilai terbesar dalam array: ");
    for ( i = 0; i < j; i++)
    {
        printf("%d", lokasiTerbesar[i]);
    }
    if (terbesar == 100)
    {
        printf("\nAda yang mendapat nilai 100 sebanyak %d orang", jumNilaiTerbesar);
    }
    else
    {
        printf("\nTidak ada yang mendapat nilai 100");
    }

    printf("\n\nNilai Terkecil: %d", terkecil);
    printf("\nJumlah mahasiswa yang mendapatkan nilai terkecil: %d\n", jumNilaiTerkecil);
    printf("Lokasi indeks nilai terkecil dalam array: ");
    for (i = 0; i < k; i++)
    {
        printf("%d\n", lokasiTerkecil[i]);
    }
    return 0;
}