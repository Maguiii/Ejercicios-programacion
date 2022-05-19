/*1) Permita el ingreso de 5 números enteros y guárdelos en un vector. Muestre el vector en pantalla, al derecho y al revés.*/

#include <stdio.h>

int main()
{
    int vector [5];
    int i = 0;
   
    for(i=0; i < 5; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%d", & vector[i] );
    }
    
    printf("\n   %d %d %d %d %d \n", vector[0], vector[1], vector[2], vector[3], vector[4]);
    
    printf("   %d %d %d %d %d \n", vector[4], vector[3], vector[2], vector[1], vector[0]);
    
    return 0;
}
