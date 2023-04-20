#include <stdio.h>
#include <stdlib.h>

int main()
{
    float media = 0, soma = 0;
    int anos = 0, contador = 0, maior_idade=0, maior_dezoito=0, menor_cinco;

    printf("Digite todos os anos das pessoas:\n");

    while(contador < 10){
        contador = contador + 1;
        scanf("%i", &anos);
        soma = soma + anos;

        if(anos > maior_idade){
            maior_idade = anos;
        }
        if(anos > 18){
            maior_dezoito = maior_dezoito +1;
        }
        if(anos < 5){
            menor_cinco=menor_cinco + 1;
        }
    }
    media = (soma/10);
    printf("\n----A media das idades eh %.2f----\n", media);
    printf("---- A maior idade foi %i----", maior_idade);
    printf("\n---- tem %i pessoas maior de 18 anos ----\n---- e %i pessoas menor de 5 anos", maior_dezoito, menor_cinco);

    return 0;
}
