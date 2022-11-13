/* Ingresar un número de 4 dígitos, presentar por pantalla todos sus divisores */

#include <stdio.h>
#include <stdlib.h>

// Punto 16//

int main()
{
    int x, I = 0;
    printf("Ingrese un numero de 4 digitos para encontrar sus divisores: ");
    scanf("%i", &x);
    while (x <= 999)
    {
        printf("Numero ingresado no es valido...");
        system("pause");
        return 0;
    }
    printf("Sus divisores son: ");
    do
    {
        if (x % (x - I) == 0)
        {

            printf("%i, ", (x - I));
        }
        I++;
    } while (I != x);

    system("pause");
    return 0;
}