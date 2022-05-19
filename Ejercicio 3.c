
/*3) Permita el ingreso de 5 flotantes. Muestre el vector en pantalla. Luego multiplique todos los valores por 1.65 y vuelva a mostrarlos.*/

#include <stdio.h>

int main()
{
    float vector [5];
    int i = 0;
    
    for(i=0; i<5; i++)
    {
        printf("Ingrese un valor:");
        scanf("%f", & vector[i]);
    }
    
    printf("\n %.2lf  %.2lf  %.2lf  %.2lf  %.2lf \n", vector[0], vector[1], vector[2], vector[3], vector[4]);
    
    for(i=0; i<5; i++)
    {
        vector[i] = vector[i] * 1.65;
    }
    
    printf("\n %.2lf  %.2lf  %.2lf  %.2lf  %.2lf \n", vector[0], vector[1], vector[2], vector[3], vector[4]);
    
    return 0;
}
