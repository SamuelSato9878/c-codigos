#include <stdio.h>
#include <stdlib.h>

int main()
{
    float media=0;
    int somatorio=0, contador=1,numeros=0, qte_numeros=0, valores_pares=0, parar_loop=0, menor_valor=-1;

    printf("Digite varios numeros:");

    do{
        printf("\nDigite o numero %i:", contador);
        scanf("%i", &numeros);

        qte_numeros++;
        somatorio+=numeros;

        if(numeros%2==0){
            valores_pares++;
        }if((numeros < menor_valor)||(menor_valor == -1)){
            menor_valor = numeros;
        }

        printf("\nVoce deseja parar o loop? digite 0:");
        scanf("%i", &parar_loop);

        if(parar_loop == 0){
            contador=0;
        }else{
            contador++;
        }


    }while(contador > 0);
    media=(somatorio/qte_numeros);

    printf("\nA soma entre todos os valores eh %i\nO menor valor digitado eh %i", somatorio, menor_valor);
    printf("\nA media entre todos os valores eh %.2f\nE nesse grupo tem %i valores pares.", media, valores_pares);

    return 0;
}
