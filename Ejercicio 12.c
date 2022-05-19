/*12) Dados los vectores del ejercicio anterior, imprima todas las combinaciones. 
Por ejemplo: 1ro de A con 1ro de B, 1ro de A con 2do de B, 1ro de A con 3ro de B.... 2do de A con 1ro de B, 2do de A con 2do de B... etc.*/

#include <stdio.h>

int main()
{
    int A[3];
    int B[10];
    int i=0;
    int j=0;
    
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
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("%d, %d\t", A[i], B[j]);
        }
    }
    return 0;
}
