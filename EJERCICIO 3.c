/******************************************************************************

3. Leer un número entero y mostrar todos los divisores exactos del número comprendidos entre 1 y el número leído.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    printf("Escriba un numero entero: \n");
    scanf("%d", &num);

    printf("Los divisores del numero %d son : \n", num);

    for(int i = 1; i <= num; i ++)
    {
        if(num % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}