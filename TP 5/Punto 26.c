/* Un pobre le dijo a un rico: " cada día le pagaré $100. A cambio, Ud. me dará el primer día
$1, el segundo $2, el tercero $4, el cuarto $8, es decir cada día el doble del anterior, y así
hasta terminar el mes de 30 días". Calcular:
a) las cantidades entregadas por el rico y por el pobre,
b) a partir de qué día el rico le dio más dinero al pobre, si es que esto ocurrió. */

#include <stdio.h>
#include <stdlib.h>

// Punto 26//

int main()
{
    int pobre = 0, rico = 1, dias = 1;
    do
    {
        pobre = pobre + 100;
        rico = rico * 2;
        dias++;
        printf("Dia: %i\n pobre: $%i\n rico: $%i\n", dias, pobre, rico);
        if (dias == 10)
        {
            printf("EL RICO EMPIEZA A PAGAR MAS --> ");
        }
    } while (dias < 30);

    system("pause");
    return 0;
}