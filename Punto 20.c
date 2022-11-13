/* Ingresar un valor L, encuentre el valor de N de manera tal que se cumpla que:
 * 1 + 2 + 3 + 4 + ... + N <== L */

#include <stdio.h>
#include <stdlib.h>

// Punto 20//

int main(void)
{
    int L, suma = 0, acumulador = 0;
    printf("Ingrese un numero: ");
    scanf("%i", &L);
    do
    {
        suma++;
        acumulador = acumulador + suma;

    } while (acumulador < L);

    if (acumulador >= L)
    {
        printf("El valor de N es: %i", suma);
    }
    system("pause");
    return 0;
}