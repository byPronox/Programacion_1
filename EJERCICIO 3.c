/******************************************************************************

Leer un número entero y mostrar todos los divisores exactos del número comprendidos entre 1 y el número leído.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("Escriba un numero: ");
    scanf("%d", &num);
    int i = 0;
    while(i <= num)
    {
        i = i + 1;
        if ( num % i == 0)
        {
          printf("\n %d", i);  
        }  
        
    }

    return 0;
}
