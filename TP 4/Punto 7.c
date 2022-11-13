#include <stdio.h>

// Punto 7//

int main(void)
{
    float radio, diametro, perimetro, area;
    printf("Introducir el radio de un circulo aca: ");
    scanf("%f", &radio);
    diametro = radio / 2;
    perimetro = 2 * 3.14 * radio;
    area = 3.14 * radio * radio;
    printf("Diametro = %f", diametro);
    printf("\n Perimetro = %f", perimetro);
    printf("\n Area = %f", area);

    return 0;
}
