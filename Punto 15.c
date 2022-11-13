#include <stdio.h>
#include <stdlib.h>
/*Ingresar dos números enteros positivos N1 y N2, con N1 < N2 y un número x cualquiera,
presentar por pantalla los múltiplos de x comprendidos entre N1 y N2*/
int main()
{
    int n1, n2, x, c, multiplo;
    printf("Ingrese dos numeros N: \n");
    scanf("%i %i", &n1, &n2);
    printf("Ingrese x: \n");
    scanf("%i", &x);
    c = 1;
    multiplo = x * c;
    if (n1 < n2)
    {
        while (multiplo + x <= n2)
        {
            multiplo = x * c;
            if (multiplo >= n1)
            {
                printf("%i es múltiplo de %i y está entre %i y %i\n", multiplo, x, n1, n2);
            }
            c++;
        }
    }
    else
    {
        printf("Por favor ingrese un numero con N1 mayor que N2");
    }
    system("pause");
    return 0;
}