#include <stdio.h>
#include <stdlib.h>

//programa que le 7 numeros e mostra a soma entre eles;

int main()
{
    int number = 0, cont = 0, somador=0;

    while (cont < 7){
        printf("Digite um numero: ");
        scanf("%i", &number);
        somador = somador + number;
        cont++;
    }
    printf("\nA soma desses numeros eh %i", somador);

    return 0;
}
