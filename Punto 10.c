#include <stdio.h>

// Punto 10//

int main()
{
    int canTiros, puntos = 0, contador = 1;
    float a, b;

    printf("Ingresar la cantidad de tiros: ");
    scanf("%d", &canTiros);
    while (contador <= canTiros)
    {
        printf("\nIngresar coordenas del tiro, X: ");
        scanf("%d", &a);
        printf("\nY: ");
        scanf("%d", &b);

        if (a <= 1 && b <= 1 && a >= -1 && b >= -1)
        {
            printf("\n 3 Puntos!");
            puntos = puntos + 3;
        }
        else
        {
            if (a >= 1 && b >= 1 && a <= 2 && b <= 2)
            {
                printf("\n 2 Puntos!");
                puntos = puntos + 2;
            }
            else
            {
                if (a >= 2 && b >= 2 && a <= 3 && b <= 3)
                {
                    printf("\n 1 Punto!");
                    puntos = puntos + 1;
                }
            }
        }
        contador = contador + 1;
    }
    printf("\n Tu puntaje es %d!", puntos);
    system("pause");
    return 0;
}