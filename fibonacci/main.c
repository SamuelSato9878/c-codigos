#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0, primeiro_elemento = 0, pos_elemento = 1, auxiliar = 0;

    for(contador = 0; contador <= 10; contador++){

        auxiliar = primeiro_elemento + pos_elemento;
        primeiro_elemento = pos_elemento;
        pos_elemento = auxiliar;

        printf("%i, ", auxiliar);
    }
        printf("Acabou!\n");

        system("pause");


    return 0;
}

