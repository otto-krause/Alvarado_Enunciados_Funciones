#include<stdlib.h>
#include<stdio.h>

int SumaResistencias(int R, int I, int SumaR);

void main()
{
    int R=0, I=0, SumaR=0;
    printf("Ingrese las cinco resistencias en serie\n");

    SumaResistencias(R, I, SumaR);
}

int SumaResistencias(int R, int I, int SumaR)
{    
    for(I= 1; I<=5; I++)
    {
        scanf("%d", &R);
        SumaR=SumaR+R;
    }
    system("cls");

    printf("La resistencia total es %d", SumaR);
    return SumaR;
}