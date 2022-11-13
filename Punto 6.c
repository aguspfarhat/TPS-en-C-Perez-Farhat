#include <stdio.h>

// Punto 6//

int main()
{
    int N, a, b, contador = 1;
    printf("Ingresar la cantidad de puntos que va a ubicar en el plano: ");
    scanf("%d", &N);
    do
    {
        printf("\nIngresar el punto X: ");
        scanf("%d", &a);
        printf("\nY: ");
        scanf("%d", &b);
        if (b == 2 / 3 * a - 2)
        {
            printf("\nEl punto esta por debajo de la recta");
        }
        if (b > 2 / 3 * a - 2)
        {
            printf("\nEl punto esta por arriba de la recta");
        }
        if (b < 2 / 3 * a - 2)
        {
            printf("\nEl punto forma parte de la recta");
        }

        contador = contador + 1;

    } while (contador <= N);

    return 0;
}