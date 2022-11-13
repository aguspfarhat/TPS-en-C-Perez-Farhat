#include <stdio.h>

// Punto 1//

int main(void)
{
    int number1, number2, number3;
    int suma;
    printf("Introduce tu primer numero entero aca: ");
    scanf("%d", &number1);
    printf("Introduce tu segundo numero entero aca: ");
    scanf("%d", &number2);
    printf("Introduce tu tercer numero entero aca: ");
    scanf("%d", &number3);
    suma = number1 + number2 + number3;
    printf("El resultado de la suma es %d", suma);

    return 0;
}
