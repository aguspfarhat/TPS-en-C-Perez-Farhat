#include <stdio.h>

// Punto 4//

int main(void)
{

    int contcero = 0, contpos = 0, contneg = 0, contador = 1, cantnum;
    float num;
    printf("Ingresar la cantidad de numeros: ");
    scanf("%d", &cantnum);
    do
    {
        contador = contador + 1;
        printf("Ingresar el numero: ");
        scanf("%f", &num);

        if (num > 0)
        {
            contpos = contpos + 1;
        }
        else
        {
            if (num < 0)
            {
                contneg = contneg + 1;
            }
            else
            {
                if (num == 0)
                {
                    contcero = contcero + 1;
                }
            }
        }
    } while (contador <= cantnum);
    printf("\n La cantidad de positivos es:%d", contpos);
    printf("\n La cantidad de negativos es:%d", contneg);
    printf("\n La cantidad de ceros es:%d", contcero);

    system("pause");
    return 0;
}