#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 6, somador = 0;

    while(contador <= 100){

        printf("|| %i ||\n", contador);
        contador = contador + 1;
        contador++;
        somador = somador + contador;

    }
    printf("A SOMA DE TUDO EH -- %i --", somador);



    return 0;
}
