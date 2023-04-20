#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int contador=0, numero_jogador=0, numero_sorteado=0, voltar=0;

    srand(time(NULL));

    printf("----Voce terah 4 tentativas----\n");

    while (contador < 4){
        contador += 1;
        printf("\nDigite um numero:");
        scanf("%i", &numero_jogador);

        numero_sorteado = rand()%10;

        printf("Maquina -> %i\n", numero_sorteado);

        if (numero_jogador == numero_sorteado){
            printf("\n---- VOCE ACERTOU ----\n");
        }
        if(contador == 4){
            printf("DIGITE 1 PARA TENTAR DE NOVO");
            scanf("%i", &voltar);
            if(voltar == 1){
                contador = 0;
            }
        }
    }
    system("pause");
    return 0;
}
