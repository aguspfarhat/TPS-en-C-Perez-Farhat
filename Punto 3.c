#include <stdio.h>

// Punto 3//

int main(void)
{
    int contador = 1;
    int N;
    int a, par, impar;
    int PP = 0, PI = 0, CP = 0, CI = 0, SP = 0, SI = 0;
    printf("Ingresar la cantidad de numeros: ");
    scanf("%d", &N);
    do
    {
        printf("Ingresar el numero: ");
        scanf("%d", &a);
        while (a == 0)
        {
            printf("No se pueden ingresar ceros. Vuelve a intentar...");
        }
        int comprobador = a % 2;
        if (comprobador == 0)
        {

            SP = SP + a;
            CP = CP + 1;
        }
        else
        {
            SI = SI + a;
            CI = CI + 1;
        }
        contador = contador + 1;

    } while (contador <= N);

    PP = SP / CP;
    PI = SI / CI;
    printf(" El promedio de los pares es %d", PP);
    printf("\n El promedio de los impares es %d", PI);

    system("pause");

    return 0;
}