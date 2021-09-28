#include<stdlib.h>
#include<stdio.h>

int OctavaParte(int Num);

void main()
{
    int Num=0, Num8=0;
    printf("Ingrese un numero: ");
    scanf("%d",&Num);

    system("cls");

    OctavaParte(Num);
    
    system("pause");
}

int OctavaParte(int Num)
{
    printf("La octava parte de %d es %d", Num, Num/8);
    return (Num/8);
}