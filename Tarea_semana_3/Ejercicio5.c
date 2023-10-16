#include <stdio.h>

int main (void) {

    int numero1;
    int numero2;
    int resultados;

    printf ("Bienvenido al programa en donde se mostrara los numeros terminados en 4 de dos numeros comprendidos \n");
    do
    {
        printf ("Ingrese el primer numero (El numero el cual iniciara el intervalo): ");
        scanf ("%d", &numero1);
        printf ("Ingrese el segundo numero (El numero que finalizara el intervalo): ");
        scanf ("%d", &numero2);
        if (numero1==numero2) {
            printf ("Ingrese un numero diferente para realizar la comprension de los numeros. \n");
        }
    } while (numero1 == numero2);

    printf ("Los numeros que terminan en 4 y se encuentran en este intervalo son: \n");
      
    for (numero1 = numero1; numero1 <= numero2; numero1++)
    {
        resultados=numero1;
        if (resultados%10==4 || resultados%10==-4)
        {
            printf ("%d\n", resultados);
        }         
        resultados++;
    }
    
    return 0;
}