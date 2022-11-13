#include <stdio.h>

int main(void)
{
    // AN = Año nacimiento
    // ME = Mes nacimiento
    // DN = Dia nacimiento
    // AA = Año actual
    // AE = Año edad

    int AN, MN, DN;
    int AA, MA, DA;
    int AE, ME, DE;
    printf("Ingresar año actual aca: ");
    scanf("%d", &AA);
    printf("Mes actual: ");
    scanf("%d", &MA);
    printf("Dia actual: ");
    scanf("%d", &DA);
    printf("Ingresar año de nacimiento aca: ");
    scanf("%d", &AN);
    printf("Mes de nacimiento: ");
    scanf("%d", &MN);
    printf("Dia de nacimiento: ");
    scanf("%d", &DN);
    if (DA >= DN)
    {
        DE = DA - DN;
    }
    else
    {
        DA = DA + 30;
        MA = MA - 1;
        DE = DA - DN;
    }
    if (MA >= MN)
    {
        ME = MA - MN;
    }
    else
    {
        AA = AA - 1;
        MA = MA + 12;
    }
    AE = AA - AN;
    printf(" Año de edad es %d", AE);
    printf("\n Mes de edad es %d", ME);
    printf("\n Dia de edad es %d", DE);

    return 0;
}