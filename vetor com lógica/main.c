#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int vetor[10] = {0}, auxiliar = 5;
    vetor[0] = 4;
    for(int i = 0; i < 10; i++){
        vetor[i] = auxiliar;
        printf("%i\n", vetor[i]);
        auxiliar = auxiliar + 5;
    }*/

    /*int vetor[10] = {0}, i = 0;

    for (i = 0; i < 10; i++){
        vetor[i] = (i + 1) *  5;
    }

    printf("Vetor:\n");

    for (i = 0; i < 10; i++){
        printf("%d\n", vetor[i]);
    }*/

    int vetor[10] = {0}, i = 0;

    do{
        i += 1;
        if (i % 5 == 0){
            vetor[i] = i;
            printf("%d\n", vetor[i]);
        }


    }while(i <= 50);

    return 0;
}
