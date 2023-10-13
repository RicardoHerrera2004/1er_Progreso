#include <stdio.h>

int main (void) {

    int numero;
    int i;
    int resultado =0;

    do
    {
    printf ("Ingrese un numero: ");
    scanf ("%d", &numero);
    if (numero<0)
    {
        printf ("Numero invalido, ingrese de nuevo \n");
    }
    
    } while (numero<0);

    
    for (i = 0; i <= numero ; i++)
    {
        resultado=resultado+i;
    }

    printf ("La suma de Gauss del nùmero %d es de: %d \n", numero, resultado);
    

    return 0;
}