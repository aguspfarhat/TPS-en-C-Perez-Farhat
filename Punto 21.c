/* Si se ingresa un número natural presentar por pantalla el desarrollo del factorial de
dicho número, como así también el valor del factorial.
Ejemplo: 8! = 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1 */

#include <stdio.h>
#include <stdlib.h>

// Punto 21//

int main()
{
    int x;
    printf("Ingrese un numero natural: ");
    scanf("%i", &x);
    printf("%i! = ", x);
    printf("%i *", x);
    do
    {
        x--;
        printf(" %i *", x);

    } while (x > 2);
    x--;
    if (x == 1)
    {
        printf(" %i", x);
    }

    system("pause");
    return 0;
}