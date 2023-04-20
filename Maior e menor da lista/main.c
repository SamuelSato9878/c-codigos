#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0;
    int numero = 0, maior=1, menor=1;

    printf("Digite o preço dos produtos em sequencia:\n");

    while(contador < 8){
        contador=contador+1;
        scanf("%i", &numero);

        if(numero > maior){
            maior = numero;
        }if(numero < menor){
            menor = numero;
        }
    }

    printf("\n----O maior numero eh %i----\n", maior);
    printf("\n----O menor numero eh %i----\n", menor);


    return 0;
}
