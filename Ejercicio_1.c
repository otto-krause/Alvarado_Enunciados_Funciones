#include<stdlib.h>
#include<stdio.h>

void NumerosEnPantalla(int Num1, int Num2);

void main()
{
    int Num1=0, Num2=0;
    printf("Ingrese dos numeros\n");
    scanf("%d", &Num1);
    scanf("%d", &Num2);
    
    system("cls");
    
    NumerosEnPantalla(Num1, Num2);

    system("pause");
}

void NumerosEnPantalla (int Num1, int Num2)
{
    printf("%d\n\n", Num1);
    printf("%d", Num2);
}
