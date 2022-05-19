/*10) Se cuenta con dos vectores de 8 enteros cada uno. Estos vectores tienen DNIs de jugadores de tenis. 
Se pide ingresar los datos y mostrar en pantalla las parejas, armadas así: el primero de un vector con el último del otro, el segundo con el anteúltimo, etc.*/

#include <stdio.h>

int main()
{
    int grupoA [8];
    int grupoB [8];
    int i = 0;
    int j = 7;
    
    for(i=0; i<8; i++)
    {
        printf("Ingrese el DNI del jugador: ");
        scanf("%d", &grupoA[i]);
        
        printf("Ingrese el DNI del jugador: ");
        scanf("%d", &grupoB[i]);
        
        /* Como use un solo for para el ingreso de datos, el primer dato a ingresar correspondera 
        a DNIA y el segundo a DNIB, esto se debe tener en cuenta cuando se corrobore el funcionamiento del programa.
        Ej, en vez de probarlo con ingresando 1,2,3,1,2,3; ingrese 1,1,2,2,3,3.*/ 
    }
    
    for(i=0; i<8; i++)
    {
        printf("Pareja %d: %d y %d\n", i+1, grupoA[i], grupoB[j-i]);
    }

    return 0;
}
