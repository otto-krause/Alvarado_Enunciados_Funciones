#include <stdio.h>
#include <stdlib.h>

void Promocion(int Edad, int Horas, int ValorNeto, int ImporteTotal);

void main ()
{
    int Edad=0, Horas=0, ValorNeto=0, ImporteTotal=0;
    printf ("Ingrese su edad ");
    scanf ("%d",&Edad);
    printf ("Ingrese las horas de servicio adquiridas ");
    scanf ("%d",&Horas);

    system ("cls");

    Promocion(Edad, Horas, ValorNeto, ImporteTotal);

    system("pause");
}

void Promocion(int Edad, int Horas, int ValorNeto, int ImporteTotal)
{
    if (Edad>=70)
        {
        ValorNeto=Horas*50*1.50;
        ImporteTotal=ValorNeto*1.33;
        }
    else {
        if (Edad>=60)
            {
            ValorNeto=Horas*50*1.30;
            ImporteTotal=ValorNeto*1.33;
            }
        else {
            if (Edad>=50)
                {
                ValorNeto=Horas*50*1.20;
                ImporteTotal=ValorNeto*1.33;
                }
            else {
                ValorNeto=Horas*50;
                ImporteTotal=ValorNeto*1.33;
                }
            }
        }
    printf("Su importe total es de: \n%d\ny su importe total sin impuestos es de: \n%d", ImporteTotal, ValorNeto);
}
