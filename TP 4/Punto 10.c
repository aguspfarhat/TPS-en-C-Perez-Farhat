#include <stdio.h>

// Punto 10//

int main(void)
{

    float y1, a, b, y2, c, d, x;
    printf("Primera ecuacion: ");
    printf("Ingresar valor ordenada al origen: ");
    scanf("%f", &b);
    printf("Ingresar valor de la pendiente: ");
    scanf("%f", &a);
    printf("Segunda ecuacion: ");
    printf("Ingresar valor de su ordenada al origen: ");
    scanf("%f", &d);
    printf("Ingresar valor de la pendiente: ");
    scanf("%f", &c);
    x = (d - b) / (a - c);
    printf(" El valor de tu x es: %f", x);
    y1 = (a * x) + b;
    y2 = (c * x) + d;
    printf("\n El resultado de la ecuacion es y1 = %f", y1);
    printf("\n El resultado de la ecuacion es y1 = %f", y2);

    return 0;
}
