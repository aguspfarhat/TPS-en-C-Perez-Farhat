#include <stdio.h>
#include <math.h>

// Punto 2//

int main(void)
{
    int contador = 1;
    int N;
    float x = 0;
    float suma = 0;
    float promedio = 0;

    printf("Ingresar la cantidad de numeros: ");
    scanf("%d", &N);

    while (contador <= N)
    {
        printf("Ingresar valor del numero: ");
        scanf("%f", &x);
        contador = contador + 1;
        suma = suma + x;
    }
    promedio = suma / N;
    printf("El promedio de los numeros es: %f", promedio);
    system("pause");
    return 0;
}