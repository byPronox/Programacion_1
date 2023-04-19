/******************************************************************************

13. Leer un entero y mostrar todos los múltiplos de 5 comprendidos entre 1 y el número leído.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    printf("Escriba un numero entero: \n");
    scanf("%d", &num);

    printf("Los multiplos del 5 son : \n", num);

    for(int i = 1; i <= num; i ++)
    {
    
        if(i % 5 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}