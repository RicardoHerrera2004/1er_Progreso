#include <stdio.h>

int main (void) {

    int numero;
    int digito;
    int resultado;
    printf ("Ingrese un numero: ");
    scanf ("%d", &numero);
    
    while (numero > 0)
    {
        digito = numero%10;
        printf ("El numero es: %d \n", digito);
        numero =numero/10;
    }
    


    return 0;
}