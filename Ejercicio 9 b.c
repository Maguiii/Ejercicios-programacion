/*9b) Al ejercicio anterior agregue que se muestre cuál equipo es el ganador (A ó B). El ganador final es el que más partidos ha ganado. 
   		    Considere que pueden tener igual cantidad de partidos ganados, en cuyo caso se dictamina un empate.*/

#include <stdio.h>
  
int main()
{
    int equipoA[5];
    int equipoB[5];
    int i = 0;
    int empates = 0;
    int ganadosA = 0;
    int ganadosB = 0;
    
    for(i=0; i<5; i++)
    {
        printf("Ingrese los goles del equipo A del partido %d: ", i+1);
        scanf("%d", & equipoA[i]);
        
        printf("Ingrese los goles del equipo B del partido %d: ", i+1);
        scanf("%d", & equipoB[i]);
    
        if(equipoA[i] == equipoB[i])
        {
            empates++;
        }
		
		if(equipoA[i] > equipoB[i])
		{
            ganadosA ++;
		}
		if(equipoA[i] < equipoB[i])
		{
  		 	ganadosB ++;
		}
    }
    
    if (ganadosA == ganadosB)
    {
        printf("Los equipos A y B empataron");
    }
    else
    {
        if( ganadosA > ganadosB)
		{
			printf("El equipo ganador es el A");
        }
        
        if( ganadosA < ganadosB)
		{
            printf("El equipo ganador es el B");
        }
    }
    
    
    printf("\nLos equipos A y B empataron %d vez/veces", empates);
    
    return 0;
}
