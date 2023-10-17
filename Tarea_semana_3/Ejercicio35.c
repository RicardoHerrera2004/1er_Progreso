#include <stdio.h>

int main (void) {

    int numero1;
    int numero2;
    
    printf ("Calculador del producto mutuo del digito de dos numeros enteros. \n");
    printf ("Ingrese el primer numero: ");
    scanf ("%d", &numero1);
    printf ("Ingrese el segundo numero: ");
    scanf ("%d", &numero2);

    printf ("El primer numero es: %d, y el segundo numero es: %d \n", numero1, numero2);

    return 0;
}