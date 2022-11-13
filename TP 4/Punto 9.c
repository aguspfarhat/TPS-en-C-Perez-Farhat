#include <stdio.h>

// Punto 9//

int main(void)
{

    int lado1;
    int lado2;
    int perimetro, superficie, x1, y1, x2, y2;
    printf("Ingresar datos del punto P1 del plano, x: ");
    scanf("%d", &x1);
    printf("Ahora y: ");
    scanf("%d", &y1);
    printf("Ahora los datos del punto P2 del plano, x: ");
    scanf("%d", &x2);
    printf("Ahora y: ");
    scanf("%d", &y2);
    lado1 = x2 - x1;
    lado2 = y2 - y1;
    perimetro = (2 * lado1) + (2 * lado2);
    superficie = lado1 * lado2;
    printf("El perimetro es %d", perimetro);
    printf("\n La superficie es %d", superficie);

    return 0;
}