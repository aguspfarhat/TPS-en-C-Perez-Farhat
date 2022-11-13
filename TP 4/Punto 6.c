#include <stdio.h>

// Punto 6//

int main(void)
{

    float perimetro, superficie, ladoMay, ladoMen;
    printf("Ingresar los lados de un rectangulo, Lados Mayor: ");
    scanf("%f", &ladoMay);
    printf("Lados menor: ");
    scanf("%f", &ladoMen);
    perimetro = 2 * ladoMay + 2 * ladoMen;
    superficie = ladoMay * ladoMen;
    printf("El perimetro es %f", perimetro);
    printf("\n La superficie es %f", superficie);

    return 0;
}
