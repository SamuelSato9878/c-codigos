#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0, primeiro_termo = 0, razao = 0, soma_valores = 0, termos = 0;

    printf("--Digite o primeiro termo da progressao:");
    scanf("%i", &primeiro_termo);
    printf("--Agora digite a razao:");
    scanf("%i", &razao);

    termos = primeiro_termo;

    for(contador = 0; contador <= 10; contador++){

        printf("%i, ", termos);
        soma_valores += termos;
        termos = termos + razao;
    }

    printf("Acabou!\n\n--A soma dos valores de todos os valores eh %i.", soma_valores);



    return 0;
}
