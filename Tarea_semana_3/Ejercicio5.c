#include <stdio.h>

int main (void) {

    int numero1;
    int numero2;

    printf ("Bienvenido al programa en donde se mostrara los numeros terminados en 4 de dos numeros comprendidos \n");
    printf ("Ingrese el primer numero (El numero el cual iniciara el intervalo): ");
    scanf ("%d", &numero1);
    printf ("Ingrese el segundo numero (El numero que finalizara el intervalo): ");
    scanf ("%d", &numero2);
 
   printf ("El primer numero: %d y el segundo numero: %d \n", numero1, numero2);

    return 0;
}