#include <stdio.h>

// Punto 5//

int main(void)
{

    int contador = 1, cantnum;
    float a, mayor, menor;
    printf("Ingresar la cantidad de numeros: ");
    scanf("%d", &cantnum);
    do
    {
        printf("Ingresar el numero: ");
        scanf("%f", &a);
        if (contador == 1)
        {
            mayor = a;
            menor = a;
        }
        else
        {
            if (a > mayor)
            {
                mayor = a;
            }
            else
            {
                if (a < menor)
                {
                    menor = a;
                }
            }
        }
        contador = contador + 1;
    } while (contador <= cantnum);
    printf("\n Mayor es = %f", mayor);
    printf("\n Menor es = %f", menor);

    system("pause");

    return 0;
}