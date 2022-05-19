
/*4) Permita el ingreso de 10 enteros positivos. Recorra el vector y todo número par que encuentre reemplaceló por cero.
 Muestre en pantalla el resultado.*/

#include <stdio.h>

int main()
{
    int vector [10];
    int i = 0;
    
    for(i=0; i<10; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%d", & vector[i]);
    }
    
    for(i=0; i<10; i++)
    {
        if(vector[i] % 2 == 0)
        {
            vector[i] = 0;
        }
    }
    
    for(i=0; i<10; i++)
    {
        printf("%d  ", vector[i]);
    }
    
    return 0;
}
