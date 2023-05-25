#include <stdio.h>

int main()
{
    float a, b, c, d, e, f, g, h, i, det, inv_a, inv_b, inv_c, inv_d, inv_e, inv_f, inv_g, inv_h, inv_i;

    // input matrix
    printf("masukkan elemen matriks 3x3:\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);
    printf("d: ");
    scanf("%f", &d);
    printf("e: ");
    scanf("%f", &e);
    printf("f: ");
    scanf("%f", &f);
    printf("g: ");
    scanf("%f", &g);
    printf("h: ");
    scanf("%f", &h);
    printf("i: ");
    scanf("%f", &i);

    // cara mencarj det matriks 3×3
    det = a * ((e * i) - (f * h)) - b * ((d * i) - (f * g)) + c * ((d * h) - (e * g));
    printf("Determinan dari matriks 3x3:%0.3f\n\n", det);

    //syarat mencari invers
    if (det == 0)
    {
        printf("Invers tidak ada.\n");
        return 0;
    }

    // cara mencari invers
    inv_a = (e * i - f * h) / det;
    inv_b = (c * h - b * i) / det;
    inv_c = (b * f - c * e) / det;
    inv_d = (f * g - d * i) / det;
    inv_e = (a * i - c * g) / det;
    inv_f = (c * d - a * f) / det;
    inv_g = (d * h - e * g) / det;
    inv_h = (b * g - a * h) / det;
    inv_i = (a * e - b * d) / det;

    // invers matriks 3×3
    printf("Invers matriks 3x3 adalah:\n");
    printf("%0.3f\t%0.3f\t%0.3f\n", inv_a, inv_b, inv_c);
    printf("%0.3f\t%0.3f\t%0.3f\n", inv_d, inv_e, inv_f);
    printf("%0.3f\t%0.3f\t%0.3f\n", inv_g, inv_h, inv_i);

    return 0;
}