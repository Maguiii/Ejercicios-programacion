/*5b) Agregue al punto anterior un mensaje que diga si la persona más grande es también la que más gana, o no.*/

#include <stdio.h>
  
int main()
{
    int edad [5];
    float sueldo [5];
    int i = 0;
    int mayor_edad = 0;
    int mayor_sueldo = 0;
    int posedad, possueldo;
    int edades_iguales = 0;
    int sueldos_iguales = 0;
    
    for(i=0; i<5; i++)
	{
        printf("Ingrese la edad de la persona %d: ", i+1);
        scanf("%d", & edad[i]);
        
        printf("Ingrese el sueldo de la persona %d: ", i+1);
        scanf("%f", & sueldo[i]);
    }
        
    for(i=0; i<5; i++)
    {
        
        if(edad[i] > mayor_edad)
        {
            mayor_edad = edad[i];
            posedad = i;
        }
        
        if(sueldo[i] > mayor_sueldo)
        {
            mayor_sueldo = sueldo[i];
            possueldo = i;
        }
        if(edad[i] == edad[i+1]){
        	edades_iguales++;
		}
		if(sueldo[i] == sueldo[i+1]){
        	sueldos_iguales++;
		}
    }
    
    if(edades_iguales == 4){
    	printf("Todas las personas tienen la misma edad\n");
	}
	else{
    	 printf("La persona de mas edad se encuentra en la posicion: %d \n", posedad);
	}
    
    
    if(sueldos_iguales == 4){
    	printf("Todas las personas tienen el mismo sueldo\n");
	}
    else{
    	printf("La persona con mayor sueldo se encuentra en la posicion: %d \n", possueldo);
	}
	
	 if(posedad == possueldo)
    {
        printf("La persona de mas edad tambien tiene el mayor sueldo.\n");
    }
    return 0;
}

