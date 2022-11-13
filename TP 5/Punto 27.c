/* Un juego consiste en tirar un dado y sumar sus puntos hasta que el valor obtenido en un tiro sea par.
Diseñar un algoritmo que pida el valor del tiro y presente por pantalla la cantidad d tiros y el puntaje total,
sin contar el ultimo tiro */

#include <stdio.h>
#include <stdlib.h>

// Punto 27//

int main(void)
{
    int dado = 0, que_es = 0, cantidad_tiros = 0, puntaje_total = 0;

    do
    {

        cantidad_tiros++;
        puntaje_total = puntaje_total + dado;
        printf("Ingrese el valor que salió del tiro del dado: ");
        scanf("%i", &dado);
        que_es = dado % 2;

    } while (que_es != 0);
    if (que_es == 0)
    {
        cantidad_tiros--;
    }
    printf("La cantidad de tiros fue de %i tiro/s\n", cantidad_tiros);
    printf("El puntaje total fue de %i\n", puntaje_total);
    system("pause");
    return 0;
}