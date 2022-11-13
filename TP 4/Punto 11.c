#include <stdio.h>
#include <math.h>

// Punto 11//

int main(void)
{
    int a, b, c;
    printf("Ingresar tres valores positivos: a = ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("b = ");
    }
    else
    {
        printf("No es positivo");
    }
    scanf("%d", &b);
    if (b > 0)
    {
        printf("c: ");
    }
    else
    {
        printf("No es positivo");
    }
    scanf("%d", &c);

    double numero = (a * a + b * b);
    double hipotenusa = sqrt(numero);

    if (hipotenusa == c)
    {

        printf("\n Lado C si es lado de un triangulo rectangulo", numero,
               hipotenusa);
    }
    else
    {
        printf("\n Lado C no es lado de un triangulo rectangulo");
    }
    hipotenusa = sqrt(a * a + c * c);
    if (hipotenusa == b)
    {
        printf("\n Lado B si es lado de un triangulo rectangulo");
    }
    else
    {
        printf("\nLado B no es lado de un triangulo rectangulo");
    }
    hipotenusa = sqrt(b * b + c * c);
    if (hipotenusa == a)
    {
        printf("\n Lado A si es lado de un triangulo rectangulo");
    }
    else
    {
        printf("\n Lado A no es lado de un triangulo rectangulo");
    }

    return 0;
}