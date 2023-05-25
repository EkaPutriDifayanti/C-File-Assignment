#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct mobil
{
    char model [20];
    char merek [15];
    int cc;
};

int main(){
    const int MAKS_ELEMEN = 20;
    struct mobil data_mobil [MAKS_ELEMEN];

    char model [20];
    char merek [15];
    int cc;
    int jum_data = 0;
    char tombol;

    printf ("DATA MOBIL\n");
    do
    {
        printf("\nModel: ");
        gets(model);

        printf("Merek: ");
        gets(merek);

        printf("CC: ");
        scanf("%d", &cc);

        fflush (stdin);

        strcpy(data_mobil[jum_data].model, model);
        strcpy(data_mobil[jum_data].merek, merek);
        data_mobil[jum_data].cc = cc;

        jum_data++;
        if (jum_data == 20)
            break;
        printf("\nMau masukkan lagi (Y/T)?");
        tombol = toupper(getchar());
        fflush(stdin);
        while (!(tombol == 'Y'|| tombol == 'T'))
        {
            printf("Mau masukkan lagi (Y/T)?");
            tombol= toupper(getchar());
            fflush(stdin);
        }
        
    } while (tombol == 'Y');
    
    int indeks;
    for (indeks = 0; indeks < jum_data; indeks++)
        printf("%-20s %-15s %4d\n",
                data_mobil[indeks].model,
                data_mobil[indeks].merek,
                data_mobil[indeks].cc);
    
    return 0;
}
