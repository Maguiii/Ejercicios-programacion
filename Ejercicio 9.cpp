/*9) En dos vectores se tienen los goles de dos equipos en diferentes partidos que tuvieron entre si. 
   		   En la posici�n 0 del vector equipoA est�n los goles de un partido por ese equipo y en la misma posici�n del vector equipoB 
                   est�n los goles del otro equipo en ese mismo partido. 
   		   En la posici�n 1 de ambos vectores tendremos los goles para otro partido, etc.
   		   Se pide permitir que el usuario cargue los datos y mostrar cu�ntos empates han ocurrido.*/

#include <stdio.h>
  
int main()
{
    int equipoA[10];
    int equipoB[10];
    int i = 0;
    int empates = 0;
    
    for(i=0; i<10; i++)
    {
        printf("Ingrese los goles del equipo A del partido %d: ", i+1);
        scanf("%d", & equipoA[i]);
        
        printf("Ingrese los goles del equipo B del partido %d: ", i+1);
        scanf("%d", & equipoB[i]);
    
        if(equipoA[i] == equipoB[i])
        {
            empates++;
        }
    }
    
    printf("\nLos equipos A y B empataron %d veces", empates);
    
    return 0;
}
