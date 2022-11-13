/* Dados 4 círculos concéntricos simulando un blanco para tiro, con centro en (0,0) y
cuyos radios y puntajes son los siguientes:
a) círculo 1 radio = 1 para r<=1 : 4 puntos
b) círculo 2 radio = 2 para r>1 y r<=2 : 3 puntos
c) círculo 3 radio = 3 para r>2 y r<=3: 2 puntos
d) círculo 4 radio=4 para r>3 y r<=4: 1 punto
Si se ingresan las coordenadas de N puntos en el plano, presentar por pantalla el puntaje
total obtenido por la posición de los puntos y su promedio. */

#include <stdio.h>
#include <stdlib.h>

// Punto 24//

int main()
{
    int N, i = 1, contador_de_puntos = 0, promedio = 0;
    float x;
    printf("Ingresar la cantidad de tiros que se van a hacer: ");
    scanf("%i", &N);

    do
    {
        printf("Ingresar las coordenadas, X: ");
        scanf("%f", &x);
        if ((x >= 0) && (x <= 1))
        {
            printf("4 Puntos!\n");
            contador_de_puntos = contador_de_puntos + 4;
        }
        else
        {
            if (x > 1 && x <= 2)
            {
                printf("3 Puntos!\n");
                contador_de_puntos = contador_de_puntos + 3;
            }
            else
            {
                if (x > 2 && x <= 3)
                {
                    printf("2 Puntos!\n");
                    contador_de_puntos = contador_de_puntos + 2;
                }
                else
                {
                    if (x > 3 && x <= 4)
                    {
                        printf("1 Puntos!\n");
                        contador_de_puntos = contador_de_puntos + 1;
                    }
                    else
                    {
                        printf("0 puntos!\n");
                        contador_de_puntos = contador_de_puntos + 0;
                    }
                }
            }
        }

        i++;
    } while (i <= N);

    promedio = contador_de_puntos / N;
    printf("Puntaje total fue de: %i\n", contador_de_puntos);
    printf("Promedio de: %i\n", promedio);

    system("pause");
    return 0;
}