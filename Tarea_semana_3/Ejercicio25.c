#include <stdio.h>

int main (void) {

    int numero;
    int digito;
    int contador;
    int resultado;
    int digito_total=0;
    printf ("Ingrese un numero: ");
    scanf ("%d", &numero);
    
    while (numero > 0)
    {
        contador++;
        digito = numero%10;
        printf ("El digito es: %d \n", digito);
        digito_total=digito_total+digito;
        numero =numero/10;
    }
    
printf ("La suma de los digito es igual a: %d \n", digito_total);

    return 0;
}