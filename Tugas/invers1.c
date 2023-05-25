#include <stdio.h>

int main()
{
    float a, b, c, d, det, temp;

    // input elemen matriks 
    printf("masukkan elemen matriks 2x2:\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: "); 
    scanf("%f", &c);
    printf("d: ");
    scanf("%f", &d);

    //cara mencari determinan matriks 2×2
    det = (a * d) - (b * c);
    
    printf("\ndeterminan dari matriks 2x2:%0.2f\n", det);
    
   //syarat invers
    if (det == 0)
    {
        printf("Invers tidak ada\n");
        return 0;
    }
    
    //cara mencari invers matriks 2×2
    temp = a;
    a = d / det;
    b = -b / det;
    c = -c / det;
    d = temp / det;
    
    printf("invers dari matriks 2x2 adalah:\n");
    printf("%0.2f\t%0.2f\n", a, b);
    printf("%0.2f\t%0.2f\n", c, d);

    return 0;
}