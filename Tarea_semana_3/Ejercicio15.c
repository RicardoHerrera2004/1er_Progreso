#include <stdio.h>

int main (void) {

    int resultado=0;
    int contador;

 for (contador = 1; contador <= 20; contador++)
    {
        resultado=resultado+3*contador;
    }
    
printf ("El resultado de la suma de los primeros 20 multiplos de 3 es: %d", resultado);
    
    return 0;
}