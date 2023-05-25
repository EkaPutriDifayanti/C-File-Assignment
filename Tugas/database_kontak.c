#include <stdio.h>
#include <string.h>
struct database_kontak
{
    char nama [50];
    char alamat [50];
    char email [50];
    char telepon [13];
   
};

int main (){
    const int MAKS_KONTAK = 30;
    struct database_kontak data_teman [MAKS_KONTAK]; //array struktur

    char nama [50]; // untuk input nama
    char alamat [50]; // untuk input alamat rumah
    char email [50]; // untuk input alamat email
    char telepon [13];// untuk input nomor telepon

    printf("----DAFTAR KONTAK KELAS A----\n"); 
    for (int i = 0; i < 30; i++)
    {
        printf("Masukkan data kontak ke-%d\n", i + 1);
        printf("\nNama : ");
        gets (data_teman[i].nama);
        printf("\nAlamat: ");
        gets (data_teman[i].alamat);
        printf("\nNo.Telepon: ");
        gets (data_teman[i].telepon);
        printf("\nEmail: ");
        gets(data_teman[i].email);
        printf("\n");
    }

    printf("-----OUTPUT DAFTAR KONTAK KELAS A-----");
    for (int i = 0; i < 30; i++)
    {
        printf("\nKontak Teman ke-%d\n", i +1);
        printf("Nama: %s\n", data_teman[i].nama);
        printf("No.Telepon: %s\n",data_teman[i].telepon);
        printf("Alamat Rumah: %s\n",data_teman[i].alamat);
        printf("Email: %s\n\n", data_teman[i].email);
    }
    return 0;
}


