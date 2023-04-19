/******************************************************************************

33. Si 32768 es el tope superior para los números entero cortos, determinar cuál es el número primo más cercano por debajo de él.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n = 0;
    int c = 0;
    int x = 0;
    for(int i = 32767; i >= 0; i--)
    {
        while (x <= i)
        {
            if (x % i == 0)
            {
            c++;
            }
            x++;
        }
        
        if (c == 2)
        {
            printf("%d", i);
    }

    return 0;
}