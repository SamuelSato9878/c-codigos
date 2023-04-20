#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=0, somatorio=0, contador=1;

    printf("----Digite alguns numeros e no final iremos fazer a soma, digite 1111 para terminar----\n");

    while(contador > 0){
        contador += 1;
        printf("\n----Digite um numero:");
        scanf("%i", &numero);
        somatorio += numero;

        if(numero == 1111){
            printf("----Programa fechou----");
            contador = 0;
        }
    }

    printf("\n----A soma de todos os numeros eh %i----", somatorio-1111);
    return 0;
}
