#include <stdio.h>

int main (void) {


    int numero;
    int factorial;
    int ayudante;
    factorial=1;
    int contador_fac;

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
    
    for (int primer_numero=1; primer_numero <= numero; primer_numero++)
    {
       ayudante=primer_numero;
       printf ("Los numero comprendidos son: %d \n", ayudante);  
       factorial=1;      
        
        for (contador_fac=1; contador_fac <=ayudante; contador_fac++)
        {
            factorial=contador_fac*factorial;
            ayudante=primer_numero;
        }
            printf ("El factorial de los numeros comprendidos son: %d \n", factorial);
    }

    return 0;
}