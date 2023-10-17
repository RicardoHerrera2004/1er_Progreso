#include <stdio.h>

int main (void) {

    int numero1;
    int numero2;
    int digito_numero1;
    int digito_numero2;
    int resultado;

    printf ("Calculador del producto mutuo del primer digito de dos numeros enteros. \n");
    printf ("Ingrese el primer numero: ");
    scanf ("%d", &numero1); 
    printf ("Ingrese el segundo numero: ");
    scanf ("%d", &numero2);

    
    do
    {
        digito_numero1=numero1%10;
        numero1=numero1/10;

    } while (numero1>0);
    
    do
    {
        digito_numero2=numero2%10;
        numero2=numero2/10;

    } while (numero2>0);

    resultado=digito_numero1*digito_numero2;

    printf ("El producto de los primeros digitos de los numeros ingresados es: %d ", resultado);

    return 0;
}