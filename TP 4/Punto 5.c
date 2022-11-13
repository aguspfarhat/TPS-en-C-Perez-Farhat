#include <stdio.h>
int main(void)
{

    float Centigrados = 0.0;
    float Fahrenheit = 0.0;
    printf("Ingresar temperatura en Fahrenheit: ");
    scanf("%f", &Fahrenheit);
    Centigrados = (5.0 / 9.0) * (Fahrenheit - 32);
    printf("La temperatura en grados centigrados es: %f", Centigrados);

    return 0;
}