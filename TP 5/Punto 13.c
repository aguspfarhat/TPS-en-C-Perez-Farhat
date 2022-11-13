/* Ingresar un número, entero positivo, expresado en el sistema decimal, convertirlo al
sistema binario. Presentar por pantalla el número en decimal y en binario. */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Punto 13//

int main()
{

    int n, bin[999], guardado;
    int i = 0;

    printf("Ingresa un numero entero positivo: ");
    scanf("%i", &n);
    guardado = n;
    while (n < 0)
    {
        printf("Tiene que ser un numero positivo. Volver a intentar\n");
        system("pause");
        return 0;
    }

    while (n != 0)
    {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }

    i--;
    printf("Numero ingresado: %i\n", guardado);
    printf("Binario: ");

    while (i >= 0)
    {
        printf("%i", bin[i]);
        i--;
    }
    system("pause");
    return 0;
}
