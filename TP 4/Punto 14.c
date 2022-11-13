#include <stdio.h>

// Punto 14//

int main(void)
{

    float a, b, c;
    float igualador;
    printf("Ingresar tres numeros, A: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);
    printf("C: ");
    scanf("%f", &c);

    if (a > b)
    {
        igualador = a;
        a = b;
        b = igualador;
        if (b > c)
        {
            igualador = b;
            b = c;
            c = igualador;
        }
    }
    else
    {

        if (b > c)
        {
            igualador = b;
            b = c;
            c = igualador;
        }
    }
    if (a == b)
    {
        if (b == c)
        {
            printf("Los numeros ingresados son iguales");
        }
    }
    printf("\n %f", a);
    printf("\n %f", b);
    printf("\n %f", c);

    return 0;
}