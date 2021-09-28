#include <stdio.h>
#include <stdlib.h>

void SueldoT(char Categoria, int Sueldo, int HorasTrabajadas);

void main()
{
    int HorasTrabajadas=0, Sueldo=0;
    char Categoria[1];
    printf("Ingrese la categoria del empleado ");
    scanf("%s",&Categoria);
    printf("Ingrese las horas trabajadas por el empleado ");
    scanf("%d",&HorasTrabajadas);

    system ("cls");
    
    SueldoT(Categoria, Sueldo, HorasTrabajadas);
    
    system("pause");
}

void SueldoT(char Categoria, int Sueldo, int HorasTrabajadas)
{
    switch (Categoria)
    {
    case 65:
    case 97:
        Sueldo=HorasTrabajadas*200;
        break;
    
    case 66:
    case 98:
        Sueldo=HorasTrabajadas*180;
        break;

    case 67:
    case 99:
        Sueldo=HorasTrabajadas*150;
        break;

    default:
        Sueldo=HorasTrabajadas*0;
        break;
    }
    printf("El sueldo del empleado es de; \n%d",Sueldo);
}