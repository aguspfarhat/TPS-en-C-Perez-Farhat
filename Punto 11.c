/* Se ingresan las coordenadas de N puntos en el plano. Estos forman con el origen un
radio vector que representa una fuerza. Debe Ud. presentar por pantalla la magnitud y
ángulo con OX de la resultante, de este sistema de fuerzas concurrentes. */

#include <stdio.h>
#include <math.h>

// Punto 11//

int main()
{
    int N, I = 1;
    double x, y, magnitud, raiz, angulo;

    printf("Ingresar la cantidad de coordenas que utilizaras: ");
    scanf("%d", &N);
    do
    {
        printf("Ingresar las coordenadas, X: ");
        scanf("%lf", &x);
        printf("Y: ");
        scanf("%lf", &y);
        magnitud = (pow(x, 2) + pow(y, 2));
        raiz = sqrt(magnitud);
        printf("La magnitud de esta coordenada es %lf \n", raiz);
        double atan2(double x, double y);
        printf("El angulo es %lf \n", atan2);

        I++;
    } while (I <= N);
    system("pause");
    return 0;
}