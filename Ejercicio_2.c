#include <stdio.h>
#include <stdlib.h>

int Perimetro(int L1, int L2);
int Area(int L1, int L2);

void main()
{
    int L1=0, L2=0, P=0, A=0;
    printf ("Ingrese los dos lados del rectangulo\n");
    scanf ("%d", &L1);
    scanf ("%d", &L2);

    system("cls");

    Perimetro(L1, L2);
    Area(L1, L2);

    system("pause");
}

int Perimetro(int L1, int L2)
{
    printf("El perimetro del rectangilo es %d\n", 2*L1+2*L2);
    return (2*L1+2*L2);
}

int Area(int L1, int L2)
{
    printf ("El area del rectangulo es %d\n", L1*L2);
    return (L1*L2);
}