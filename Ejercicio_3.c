#include <stdio.h>
#include <stdlib.h>

int PorcentajeH(int PH, int P);
int PorcentajeM(int PPH);

void main()
{
    int PH=0, P=0, PPH=0;
    printf ("Ingrese el numero de postulantes hombres: ");
    scanf ("%d",&PH);
    printf ("Ingrese el numero de postulantes totales: ");
    scanf ("%d",&P);

    system("cls");

    PPH=PorcentajeH(PH, P);
    printf("El porcentaje de postulantes hombres es de %d\n", PPH);

    PorcentajeM(PPH);

    system("pause");
}

int PorcentajeH(int PH, int P)
{ 
    return (PH*100/P);
}

int PorcentajeM(int PPH)
{
    printf ("El porcentaje de postulantes mujeres es de %d\n", 100-PPH);
    return (100-PPH);
}