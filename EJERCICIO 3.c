/******************************************************************************
<<<<<<< HEAD

3. Leer un número entero y mostrar todos los divisores exactos del número comprendidos entre 1 y el número leído.

*******************************************************************************/

=======
Leer un número entero y mostrar todos los divisores exactos del número comprendidos entre 1 y el número leído.
*******************************************************************************/
>>>>>>> bbb560ec68223c1a43ef6e93888bebb442a19d50
#include <stdio.h>

int main()
{
    int num;
<<<<<<< HEAD
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
=======
    printf("Escriba un numero: ");
    scanf("%d", &num);
/******************************************************************************
Se le solicita al usuario que ingrese los valores a la variable num.
*******************************************************************************/
    int i = 0;
    while(i <= num)
    {
        i = i + 1;
        if ( num % i == 0)
        {
          printf("\n %d", i);  
        }  
        
    }
/******************************************************************************
Se ocupa una sentencia repetitiva para aumentar en 1 en 1 hasta el numero ingresado por
el usuario donde si se cumple la condicion se le imprime el numero al ususario.
*******************************************************************************/
>>>>>>> bbb560ec68223c1a43ef6e93888bebb442a19d50

    return 0;
}
