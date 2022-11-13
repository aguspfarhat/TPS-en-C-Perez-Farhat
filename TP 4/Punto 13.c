#include <stdio.h>

// Punto 13//

int main(void)
{

    int x, y, z;
    int contador;
    printf("Ingresar tres numeros enteros, A: ");
    scanf("%d", &x);
    printf("B: ");
    scanf("%d", &y);
    printf("C: ");
    scanf("%d", &z);

    if (x < y)
    {
        if (y < z)
        {
            printf("Los numeros estan de forma ascendente");
            contador = x + 1;
            if (y == contador)
            {
                contador = y + 1;
                if (z == contador)
                {
                    printf(" consecutiva");
                }
            }
        }
    }
    else
    {
        if (x > y)
        {
            if (y > z)
            {
                printf("Los numeros estan de forma descendente");
            }
        }
    }

    return 0;
}