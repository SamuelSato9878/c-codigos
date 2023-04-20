#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=1, para_loop=0 , qte_idades=0, qte_pessoas_maior_vinte = 0;
    float media_idades=0, idade=0, soma_idades=0;

    printf("digite algumas idades:");
    do{
        printf("\nIdade %i:", contador);
        scanf("%f", &idade);

        soma_idades += idade;
        qte_idades += 1;

        if(idade > 20){
            qte_pessoas_maior_vinte += 1;
        }

        printf("\nSe voce quer parar de contar digite 999:");
        scanf("%i", &para_loop);

        if(para_loop == 999){
            contador = 0;
        }else{
            contador += 1;
        }

    }while(contador > 0);

    media_idades = (soma_idades/qte_idades);

    printf("\nNesse grupo tem %i idades cadastradas", qte_idades);
    printf("\nA media de idades eh %.2f", media_idades);
    printf("\nTem %i pessoas maior de vinte", qte_pessoas_maior_vinte);

    return 0;
}
