/*6) El usuario ingresa el DNI (entero) de 10 estudiantes y su calificacion (float). Muestre en pantalla el DNI de los estudiantes que aprobaron.*/

#include <stdio.h>

int main()
{
    int DNI [10];
    float calificacion [10];
    int i = 0;


    for(i=0; i<10; i++)
    {
        printf("Ingrese el DNI del estuadiante: ");
        scanf("%d", & DNI[i]);
        
        printf("Ingrese la calificacion del estudiante: ");
        scanf("%f", & calificacion[i]);
    }
        
    for(i=0; i<10; i++)
    {
        if(calificacion[i] >= 6)
        {
            printf("%d\n", DNI[i]);
        }
    }
    return 0;
}
