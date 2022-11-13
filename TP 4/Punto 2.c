#include <stdio.h>

// Punto 2//

int main(void)
{
    int number1, number2, promedio;
    printf("Introduce tu entero aca: ");
    scanf("%d", &number1);
    printf("Introduce tu otro numero entero aca: ");
    scanf("%d", &number2);
    promedio = (number1 + number2) / 2;
    printf("El promedio es %d", promedio);

    return 0;
}