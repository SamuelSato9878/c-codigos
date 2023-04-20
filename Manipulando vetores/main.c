#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5] = {0}, soma=0, contador=1;;

    for(int i = 0; i < 5; ++i){
        printf("Digite o numero %i:", contador);
        scanf("%i", &vetor[i]);
        soma += vetor[i];
        printf("\n");
        contador += 1;
    }
    for(int i = 0; i < 5; ++i){
        printf("\n%i", vetor[i]);
    }

    printf("\n\n%i", vetor[4]);
    //printf("%i", soma);
    return 0;
}
