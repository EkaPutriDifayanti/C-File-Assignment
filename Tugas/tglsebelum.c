#include <stdio.h>
// prosedur
void tanggalSebelumnya(int hari, int bulan, int tahun)
{
    int hariSebelumnya, bulanSebelumnya, tahunSebelumnya;
    if (hari == 1)
    {
        if (bulan == 1)
        {
            hariSebelumnya = 31;
            bulanSebelumnya = 12;
            tahunSebelumnya = tahun - 1;
        }
        else if (bulan == 3) 
        {
            bulanSebelumnya = 2;
            tahunSebelumnya = tahun;
            // algoritma untuk lihat apakah tahun kabisat atau tidak
            if (tahun % 4 == 0 && (tahun % 100 != 0 || tahun % 400 == 0))
            {
                hariSebelumnya = 29;
            }
            else
            {
                hariSebelumnya = 28;
            }
        }
        else
        {
            bulanSebelumnya = bulan - 1;
            tahunSebelumnya = tahun;
            switch (bulan)
            {
            case 2:
            case 4:
            case 6:
            case 8:
            case 9:
            case 11:
                hariSebelumnya = 31;
                break;

            default:
                hariSebelumnya = 30;
            }
        }
    }
    else
    {
        hariSebelumnya = hari - 1;
        bulanSebelumnya = bulan;
        tahunSebelumnya = tahun;
    }
    printf("Tanggal sebelumnya: %02d/%02d/%04d\n", hariSebelumnya, bulanSebelumnya, tahunSebelumnya);
}
int main()
{
    int hari, bulan, tahun;
    printf("Masukkan tanggal dengan bentuk dd/mm/yyyy:");
    scanf("%d/%d/%d", &hari, &bulan, &tahun);

    printf("Tanggal sekarang: %02d/%02d/%04d\n", hari, bulan, tahun);
    tanggalSebelumnya(hari, bulan, tahun); // pemanggilan prosedur
    return 0;
}