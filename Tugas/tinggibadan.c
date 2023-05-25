#include <stdio.h>
int main(){
    int tinggiBadan;
    float beratIdeal;

    printf("Masukkan tinggi anda dalam cm: ");
    scanf("%d", &tinggiBadan);
    beratIdeal= (tinggiBadan-100) - (0.1 * (tinggiBadan-100));
    printf("Berat badan ideal anda adalah %.2f", beratIdeal);
    return 0;
}