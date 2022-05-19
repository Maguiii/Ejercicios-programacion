/*7) El usuario ingresa datos de 5 microprocesadores. Se cuenta con su precio (float) y su velocidad en gigahertz (float).
 		   Mostrar en pantalla si el microprocesador más caro es también el más rápido, o no.*/

#include <stdio.h>
  
int main()
{
    float precio [5];
    float velocidad [5];
    int i = 0;
    int mas_caro = 0;
    int mas_rapido = 0;
    int posmascaro, posmasrapido;
    
    for(i=0; i<5; i++)
    {
        printf("Ingrese el precio del microprocedador %d: ", i+1);
        scanf("%f", & precio[i]);
        
        printf("Ingrese la velocidad del microprocesador %d: ", i+1);
        scanf("%f", & velocidad[i]);
       
        if(precio[i] > mas_caro)
        {
            mas_caro = precio[i];
            posmascaro = i;
        }
        
        if(velocidad[i] > mas_rapido)
        {
            mas_rapido = velocidad[i];
            posmasrapido = i;
        }
    }
    
    if(posmasrapido == posmascaro)
    {
        printf("\nEl procesador mas rapido tambien es el mas caro.");
    }
    else
    {
        printf("\nEl procesador mas caro no es el mas rapido.");
    }
    
    return 0;
}
