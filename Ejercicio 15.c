/*15) Dado un vector de 10 enteros, imprima sus valores en pantalla sin repetirlos. 
Es decir que si un valor aparece más de una vez solo hay que imprimirlo una.*/


#include <stdio.h>

int main(){

    int lista[10];
    int i = 0;
    int j = 0;
	int temp;
    
    for(i=0; i<10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &lista[i]);
    }
    
	for (i=1; i<10; i++)
	{
	 	for (j=0;j<10;j++)
		{
		 	if (lista[j] > lista[j+1])	
			{
			   temp = lista[j];	 
			   lista[j]=lista[j+1];  
			   lista[j+1]=temp;	
			}
		}
 	}

    for (i=0;i<10;i++)
    {
        if(lista[i]!=lista[i+1])
        {
            printf("%d  ", lista[i]);
        }
    }
}
