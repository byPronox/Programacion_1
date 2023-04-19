/******************************************************************************

23. Leer un número entero y determinar si la suma de sus dígitos es también un número primo.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    int residuo = 0;
    int cociente = 0;
    int resultado = 0;
    printf("Escriba un numero entero: \n");
    scanf("%d", &num);

    cociente = num;

    do
    {
        residuo = cociente % 10;
        cociente = cociente / 10;

        resultado = residuo + resultado;

    }
    while(cociente > 0);

    printf("El resultado es: %d", resultado);

    return 0;
}
