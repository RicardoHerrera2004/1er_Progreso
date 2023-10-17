#include <stdio.h>

int main (void) {

    int numero1;
    int numero2;
    int digito_numero1;
    int digito_numero2;

    printf ("Calculador del producto mutuo del digito de dos numeros enteros. \n");
    printf ("Ingrese el primer numero: ");
    scanf ("%d", &numero1);
    printf ("Ingrese el segundo numero: ");
    scanf ("%d", &numero2);

    do
    {
        digito_numero1=numero1%10;
        numero1=numero1/10;

    } while (numero1>0 && numero2>0);
    
    do
    {
        digito_numero2=numero2%10;
        numero2=numero2/10;
        
    } while (numero2>0);
    


    printf ("El primer numero es: %d, y el segundo numero es: %d \n", digito_numero1, digito_numero2);

    return 0;
}