#include <stdio.h>
#include <stdlib.h>

int Presion(int F, int A);

void main()
{
    int F=0, A=0;
    printf("Ingrese la fuerza ejercida en una superficie y luego dicha superficie\n");
    scanf("%d",&F);
    scanf("%d",&A);

    system("cls");

    Presion(F, A);

    system("pause");
}

int Presion(int F, int A)
{
    printf("La presion que se ejerce en la superficie es de %d pascales", F/A);
    return (F/A);
}