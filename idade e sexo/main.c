#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade=0, sexo=0, contador=0,qte_mulheres=0, qte_homens=0, soma_idade_grupo=0, soma_idade_homens=0, mulher_mais_vinte=0, sexo_nao_declarado=0;
    float media_idade_grupo=0, media_idade_homens=0;

    printf("Digite as idades, das cinco pessoas\ne o sexo dessas cinco pessoas:\n");

    while(contador < 5){
        contador = contador + 1;

        printf("\nDigite 1 para masculino ou 2 para feminino:");
        scanf("%i", &sexo);
        printf("Agora me informe a idade:");
        scanf("%i", &idade);

        if(sexo == 1){
            qte_homens = qte_homens + 1;
            soma_idade_homens += idade;
        }if(sexo == 2){
            qte_mulheres = qte_mulheres + 1;
        }if((sexo == 2) && (idade > 20)){
            mulher_mais_vinte = mulher_mais_vinte + 1;
        }if((sexo < 1)||(sexo > 2)){
            sexo_nao_declarado= sexo_nao_declarado + 1;
        }

        soma_idade_grupo = soma_idade_grupo + idade;
    }
    media_idade_grupo = (soma_idade_grupo/5);
    media_idade_homens = (soma_idade_homens/qte_homens);

    printf("\n----Tem %i homens e %i mulheres----", qte_homens, qte_mulheres);
    printf("\n----A media de idade do grupo eh %.2f anos----", media_idade_grupo);
    printf("\n----A media de idade de homens eh %.2f anos----", media_idade_homens);
    printf("\n----Nesse grupo tem %i mulhere/s mais de vinte----\n----Nesse grupo tem %i pessoas sem o sexo declarado----\n", mulher_mais_vinte, sexo_nao_declarado);
    system("pause");
    return 0;
}
