#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero =0, contador=0, result = 0;

    printf("--Nos iremos fazer a tabuada de multiplicacao\n--Porfavor digite um numero:");
    scanf("%i", &numero);
    printf("\n\n");

    for(contador = 0; contador <=10; contador++){

        result = numero * contador;
        printf("--  %i x %i = %i  --\n", numero, contador, result);
    }


    return 0;
}
