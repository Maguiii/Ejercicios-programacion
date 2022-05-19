/*13) Dado un vector con 5 enteros, imprima en pantalla si es monótono o no, es decir si todos los números son crecientes, decrecientes o ninguno de los anteriores.*/

#include <stdio.h>

int main(){
	
	int vector[5];
	int i=0;
	int creciente=0;
	int decreciente=0;
	
	for(i=0; i<5; i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d", &vector[i]);
	}
	
	for(i=0; i<4; i++)
	{	
		if(vector[i] < vector[i+1])
		{
			creciente++;
			printf("creciente %d\n", creciente);
		}
		
		if(vector[i] > vector[i+1])
		{
			decreciente++;
			printf("decreciente %d\n", decreciente);
		}
		
	}
	
	if(creciente != 4 && decreciente != 4)
	{
		printf("El vector no es monotono");
		
	}
	else
	{
		if(creciente == 4)
		{
	      printf("El vector es monotono");
        }
		if(decreciente == 4)
		{
          printf("El vector es monotono");
		}	
	}
	return 0;
}
