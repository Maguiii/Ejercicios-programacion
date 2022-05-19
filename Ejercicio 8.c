
/*8) Declare un vector de 10 enteros y carguelo con 1 y 0 alternativamente. 
Muestrelo en pantalla para verificar que quedó bien cargado.*/

#include <stdio.h>
  
int main()
{
    int vector [10] = {1,0,1,0,1,0,1,0,1,0};
    int i = 0;
    
    for(i=0; i<10; i++)
    {
        printf("%d  ", vector[i]);
    }
    
    return 0;
}
