#include <stdio.h>
#include <stdbool.h>

char apakah_a(int huruf)
{
    if (huruf == 'a'){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    char huruf;

    printf("Masukkan satu huruf : ");
    scanf("%c", &huruf);
    bool hasil = apakah_a(huruf);

    if (hasil == true){
        printf("Huruf yang dimasukkan adalah a");
    }else{
        printf("Huruf yang dimasukkan bukanlah a");
    }
    return 0;
}