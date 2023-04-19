/******************************************************************************

43. Determinar cuántos elementos de la serie de Fibonacci se encuentran entre 1000 y 2000.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int ant2 = 0;
    int ant3 = 0;
    int numini = 987;
    int numsec = 610;

    do{
        ant2 = numini + numsec;
        ant3 = ant2;
        ant3 = numini + ant3;
        if (ant2 <= ant3)
        {
            printf("\nLos numeros de la serie entre 1000 y 2000 es: %d", ant2);
        }
        else
        {
            printf("\nLos numeros de la serie entre 1000 y 2000 es: %d", ant2);
        }
    }
    while(ant3 <= 2000);

    return 0;
}