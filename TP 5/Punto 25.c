/* Se ingresan N pares de valores, donde el primer valor indica la edad de la persona y el
segundo valor su altura. Presentar por pantalla :
a) la mayor edad ingresada y el orden en que ingresó,
b) la menor altura ingresada y el orden en que ingresó,
c) el promedio de las edades,
d) el promedio de las alturas. */

#include <stdio.h>
#include <stdlib.h>

// Punto 25//

int main()
{
    int edad, altura, N, i = 1, max_edad = 0, max_altura = 0, men_edad = 0, men_altura = 0, suma_edades = 0, suma_alturas = 0, cantidad_pares = 0, contador_orden = 0, promedio_edades = 0, promedio_altura = 0;
    printf("Ingresar la cantidad de pares de edad y altura se ingresaran: ");
    scanf("%i", &N);
    do
    {
        contador_orden++;
        printf("%i - Ingresar la edad: \n", contador_orden);
        scanf("%i", &edad);
        printf("%i - Ingresar la altura: \n", contador_orden);
        scanf("%i", &altura);
        suma_edades = suma_edades + edad;
        suma_alturas = suma_alturas + altura;
        cantidad_pares++;
        if (i == 0)
        {
            max_edad = edad;
            max_altura = altura;
            men_edad = edad;
            men_altura = altura;
        }
        if (i > 0 && edad > max_edad)
        {
            printf("%i es la mayor edad ahora\n", edad);
        }
        if (i > 0 && altura > max_altura)
        {
            printf("%i es la mayor altura ahora\n", altura);
        }
        if (i > 0 && edad < men_edad)
        {
            printf("%i es la menor edad ahora\n", edad);
        }
        if (i > 0 && altura < men_altura)
        {
            printf("%i es la menor altura ahora\n", altura);
        }
        i++;
    } while (i <= N);
    promedio_edades = suma_edades / cantidad_pares;
    promedio_altura = suma_alturas / cantidad_pares;

    system("pause");
    return 0;
}