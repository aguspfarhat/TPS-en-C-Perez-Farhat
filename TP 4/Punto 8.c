#include <stdio.h>

// Punto 8//

int main(void)
{

    float precioPro, IVA, IB, IM, IT;
    printf("Introducir precio del producto aca: ");
    scanf("%f", &precioPro);
    IVA = precioPro * 0.21;
    IB = precioPro * 0.025;
    IM = precioPro * 0.015;
    IT = IVA + IB + IM;
    printf("Los impuestos que debe pagar son %f", IT);

    return 0;
}