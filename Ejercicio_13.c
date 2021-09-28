#include <stdio.h>
#include <stdlib.h>

void IgualdadDeValores(int Num1, int Num2, int Num3);

void main()
{
    int Num1=0, Num2=0, Num3=0;
    printf("Ingrese tres numeros\n");
    scanf("%d",&Num1);
    scanf("%d",&Num2);
    scanf("%d",&Num3);

    system("cls");

    IgualdadDeValores(Num1, Num2, Num3);

    system("pause");
}

void IgualdadDeValores(int Num1, int Num2, int Num3)
{

    if (Num1=Num2 && Num1=Num3)  
    {
        printf("Los tres valores son iguales");
    }
    else
    {
        if (Num2=Num3 && Num1!=Num2)
        {
            printf("El primer valor es distinto a los otros dos");
        }
        else
        {
            if (Num1=Num2 && Num1!=Num3)
            {
                printf("El tercer valor es distinto a los otros dos");
            }
            else
            {
                if (Num1=Num3 && Num2!=Num1)
                {
                    printf("El segundo valor es distinto a los otros dos");
                }
                else
                {
                    printf("Los tres valores son distintos");
                }   
            }   
        }   
    }
}
