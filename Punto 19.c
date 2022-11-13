/* Ingresar dos numeros enteros positivos N1 y N2, con N1 < N2, sumar los
 * numeros enteros comprendidos entre N1 y N2. Presentar por pantalla dicha suma
 * y un mensaje que indique de donde provine la suma.  */

#include <stdio.h>
#include <stdlib.h>

// Punto 19//

int main()
{
    int N1, N2, X, suma = 0, print_suma[100], i = 0;
    printf("Ingrese dos numeros enteros (1ero < 2ndo)");
    printf(" Primer numero: ");
    scanf("%i", &N1);
    printf("Segundo numero: ");
    scanf("%i", &N2);

    if (N1 >= N2)
    {
        printf("El primer numero tiene que ser menor al primero. Volver a "
               "intentar...");
    }
    printf("Escribe una serie de numeros (que esten entre %i y %i) para despues "
           "sumarlos: ",
           N1, N2);
    do
    {
        printf(": ");
        scanf("%i", &X);

        suma = suma + X;
    } while (X >= N1 && X < N2);
    if (print_suma[i] == 0)
    {
        printf("%i", X);
    }
    if (print_suma[i] > 0 && print_suma[i] <= 100)
    {
        printf(" + %i", X);
    }
    i++;
    printf("\nSe termino la serie de numeros\n");
    printf("La suma dio: %i", suma);
    if (i == 0)
    {
        printf("%i", X);
    }
    if (i > 0 && i <= 100)
    {
        printf(" + %i", X);
    }
    i++;

    system("pause");
    return 0;
}