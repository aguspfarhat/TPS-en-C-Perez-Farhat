#include <stdio.h>
#include <stdlib.h>

// Punto 18//

int main()
{
    int N, X = 0, I = 1, C = 0, h = 0, suma = 0;
    printf("Ingresar la cantidad de numeros que va a ingresar: ");
    scanf("%i", &N);
    do
    {
        printf("Ingresar un numero de la serie:");
        scanf("%i", &X);

        if (X >= h)
        {
            printf("Forma parte de la serie creciente");
            system("pause");
        }
        else
        {
            C++;
        }
        if (X < h)
        {

            printf("Dejo de formar parte de la serie creciente\n");
        }

        I++;
        h = X;
    } while (I <= N);

    printf("La cantidad de series crecientes son: %i", C);

    system("pause");
    return 0;
}