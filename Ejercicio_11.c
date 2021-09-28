#include<stdlib.h>
#include<stdio.h>

void CalculoIMC(int IMC, int Peso, int Altura);

void main()
{
    int Peso=0, Altura=0, IMC=0;
    printf("Ingrese su peso en kg y luego su altura en metros");
    scanf("%d", &Peso);
    scanf("%d", &Altura);

    system("cls");

    CalculoIMC(IMC, Peso, Altura);

    system("pause");
}

void CalculoIMC(int IMC, int Peso, int Altura)
{
    IMC=Peso/(Altura*Altura);

    if (IMC>25)
    {
        printf("La persona se encuentra excedida de peso");
    }
    else
    {
        if (IMC>=20)
        {
            printf("La persona se encuentra en su peso ideal");
        }
        else
        {
            printf("La persona se encuentra por debajo de su peso ideal");
        }        
    }
}
