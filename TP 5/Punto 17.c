/* Ingresar un número natural N. Sin dividir ni multiplicar determinar si ese valor es o no
par. Presentar por pantalla el resultado. */

#include <stdio.h>
#include <stdlib.h>

// Punto 17 //

int main()
{
    int x;
    printf("Ingresar un numero natural: ");
    scanf("%i", &x);

    do
    {
        x = x - 2;

    } while (x > 0);
    if (x == 0)
    {
        printf("El numero es par");
        system("pause");
        return 0;
    }
    else
    {
        printf("El numero no es par");
        system("pause");
        return 0;
    }

    system("pause");
    return 0;
}