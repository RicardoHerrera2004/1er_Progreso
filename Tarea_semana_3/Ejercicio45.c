#include <stdio.h>

int main (void) {


    int numero;
    printf ("Calculador del factorial de todos los enteros comprendidos entre 1 y el numero que va a ingresar.  \n");
    do
    {
        printf ("Ingrese un numero: ");
        scanf ("%d", &numero);

        if (numero<=1)
        {
            printf ("Ingrese un numero mayor a 1. \n");
        }
        
    } while (numero<=1);
    
    printf ("%d", numero);

    return 0;
}