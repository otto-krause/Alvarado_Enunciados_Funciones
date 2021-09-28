#include <stdio.h>
#include <stdlib.h>

void SueldoFamilia(int Categoria, int NDH, int APH, int SF, int SB);

void main()
{
    int SB=0, Categoria=0, NDH=0, APH=0, SF=0;
    printf("Ingrese la categoria del empleado, luego su sueldo basico y finalmente su numero de hijos\n");
    scanf("%d", &Categoria);
    scanf("%d", &SB);
    scanf("%d", &NDH);

    system("cls");

    SueldoFamilia(Categoria, NDH, APH, SF, SB);
    
    system("pause");
}

void SueldoFamilia(int Categoria, int NDH, int APH, int SF, int SB)
{


    switch (Categoria)
    {
    case 1:
        if (NDH>4)
        {
            APH=NDH*300+200;
            SF=SB*1.10;
        }
        else
        {
            APH=NDH*300;
		    SF=SB*1.10+APH;
        } 
        break;

    case 2:
        if (NDH>4)
        {
            APH=NDH*300+200;
			SF=SB*1.20+APH;
        }
        else
        {
            APH=NDH*300;
			SF=SB*1.20+APH;
        }
        break;
        
    default:
        if (NDH>4)
        {
            APH=NDH*300+200;
		    SF=SB+APH;
        }
        else
        {
        APH=NDH*300;
		SF=SB+APH;
        }
        break;
    }
    printf("Su sueldo final es de %d", SF);
}
