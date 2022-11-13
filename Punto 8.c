#include <stdio.h>
#include <math.h>

// Punto 8//

int main(void)
{
    int a, b, cantPun, contador = 0;

    printf("Ingresar la cantidad de puntos que hay en el plano: ");
    scanf("%d", &cantPun);
    do
    {
        printf("\n Ingresar el punto de X: ");
        scanf("%d", &a);
        printf("Y: ");
        scanf("%d", &b);
        if (a == 0 && b == 0)
        {
            printf("Este punto es un origen de coordinadas ");
        }
        else
        {
            if (a != 0 && b == 0)
            {
                printf("Este punto esta en el eje x");
            }
            else
            {
                if (a == 0 && b != 0)
                {
                    printf("Este punto esta en el eje y");
                }
                else
                {
                    if (a > 0 && b > 0)
                    {
                        printf("El punto esta en el primer cuadrante");
                    }
                    else
                    {
                        if (a < 0 && b > 0)
                        {
                            printf("El punto esta en el segundo cuadrante");
                        }
                        else
                        {
                            if (a < 0 && b < 0)
                            {
                                printf("El punto esta en el tercer cuadrante");
                            }
                            else
                            {
                                if (a > 0 && b < 0)
                                {
                                    printf("El numero esta en el cuarto cuadrante");
                                }
                            }
                        }
                    }
                }
            }
        }
        contador = contador + 1;
    } while (contador <= cantPun);

    system("pause");
    return 0;
}