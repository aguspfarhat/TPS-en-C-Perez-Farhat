#include <stdio.h>
#include <math.h>

// Punto 12 //

int main(void)
{
    int numero, digito, posicion = 0, resultado = 0;
    int vector[] = {1,
                    2,
                    4,
                    8,
                    16,
                    32,
                    64,
                    128,
                    256};
    printf("Ingrese el numero binario: ");
    scanf("%d", &numero);
    while (numero > 0)
    {
        digito = numero % 10;
        if (digito == 1)
        {
            resultado = resultado + vector[posicion];
        }
        posicion = posicion + 1;

        numero = numero / 10;
    }
    printf("El numero en decimal es: %d", resultado);
    system("pause");
    return 0;
}