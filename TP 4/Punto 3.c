#include <stdio.h>

// Punto 3//

int main(void)
{
    int number1, number2, mediaGeo;
    printf("Ingresa aqui un numero entero: ");
    scanf("%d", &number1);
    printf("Ingresar aqui otro numero entero: ");
    scanf("%d", &number2);
    mediaGeo = sqrt(number1 * number2);
    printf("El resultado de la media geometrica es %d", mediaGeo);

    return 0;
}