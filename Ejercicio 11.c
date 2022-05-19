/*11) Dado un vector de enteros A con 3 posiciones y otro B de 10 posiciones, indique si todos los elementos de A se encuentran al menos una vez en B, o no.*/
#include <stdio.h>

int main()
{
    int A[3];
    int B[10];
    int i=0;
    int j=0;
    int repeticiones = 0;
    
    for(i=0; i<3; i++)
    {
        printf("Ingrese la lista A: ");
        scanf("%d", &A[i]);
    }
     
    printf("\n");
    
    for(i=0; i<10; i++)
    {
        printf("Ingrese la lista B: ");
        scanf("%d", &B[i]);
    }
    
    for(i=0; i<10; i++)
    {
        for(j=0; j<3; j++)
        {
            if(A[j] == B[i])
            {
                repeticiones++;
            }
        }
    }
    
    printf("\nLos elementos de A se encuentran %d vez/ces en el la lista B", repeticiones);

    return 0;
}
