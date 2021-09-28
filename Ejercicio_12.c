#include <stdio.h>
#include <stdlib.h>

void DensidadDePoblacion(int DP1, int DP2, int DP3);

void main()
{
    int SP1=0, SP2=0, SP3=0, PP1=0, PP2=0, PP3=0, DP1=0, DP2=0, DP3=0;
    printf("Ingrese la superficie de cada pais y luego su poblacion\n");
    scanf("%d",SP1);
    scanf("%d",SP2);
    scanf("%d",SP3);
    scanf("%d",PP1);
    scanf("%d",PP2);
    scanf("%d",PP3);

    DP1=PP1/SP1;
    DP2=PP2/SP2;
    DP3=PP3/SP3;

    system("cls");

    DensidadDePoblacion(DP1, DP2, DP3);

    system("pause");
}

void DensidadDePoblacion(int DP1, int DP2, int DP3)
{
    if (DP1>DP2 && DP1>DP3)
    {
        printf("El pais mas densamente poblado es el primero");
    }
    else
    {
        if (DP2>DP1 && DP2>DP3)
        {
            printf("El pais mas densamente poblado es el segundo");
        }
        else
        {
            printf("El pais mas densamente poblado es el tercero");
        }   
    }
}
