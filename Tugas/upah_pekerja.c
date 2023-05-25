#include <stdio.h>
int main(){
    char nama [100];
    char golongan;
    int jam, upah_per_jam , total_upah, upah_lembur, upah;

    printf("--Upah Karyawan--\n");
    printf("Masukkan nama: \n");
    scanf("%s",&nama[100]);

    printf("Masukkan golongan: \n");
    scanf("%s", &golongan);

    printf("Masukkan jam kerja anda selama sebulan: \n");
    scanf("%d", &jam);

    switch (golongan){
        case 'A':
        upah_per_jam = 5000;
        break;
    
        case 'B':
        upah_per_jam = 6000;
        break;

        case 'C':
        upah_per_jam = 7500;
        break;

        case 'D':
        upah_per_jam = 9000;
        break;
    }
    
    if(jam > 150){
        upah = 150 * upah_per_jam;
        upah_lembur = (jam - 150) * upah_per_jam * 0,25;
        total_upah = upah + upah_lembur;
        printf("\nUpah total adalah :%d", total_upah);
    }else {
        total_upah= jam * upah_per_jam;
        printf("\nUpah total adalah :%d", total_upah);
    }
    return 0;
}
