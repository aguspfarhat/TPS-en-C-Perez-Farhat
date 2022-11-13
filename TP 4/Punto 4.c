#include <stdio.h>

int main(void)
{

    float medidaMetros;
    float medidaDecimetros;
    float medidaCentimetros;

    printf("Ingresar una medida en metro aca: ");
    scanf("%f", &medidaMetros);
    medidaDecimetros = medidaMetros * 10;
    medidaCentimetros = medidaMetros * 100;
    printf("La medida en decimetros es = %f", medidaDecimetros);
    printf("\n La medida en centimetros es = %f", medidaCentimetros);

    return 0;
}