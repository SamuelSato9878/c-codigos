#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome_pessoa_mais_velha[50], nome_mulher_mais_jovem[50];
    char nome_geral[50] ;
    int genero =0, contador=1, qte_pessoas=0, qte_homem_mais_trinta=0, qte_mulheres_menos_dezoito=0, parar_loop=0;
    float idade_geral = 0, media_idade_grupo=0;
    int idade_pessoa_mais_velha = 0, idade_mulher_mais_jovem = -1;

    printf("Digite o genero, nome e idade:\n");

    while(contador > 0){
        qte_pessoas += 1;

        printf("\nPessoa %i", qte_pessoas);
        printf("\n1 - Masculino || 2 - Feminino:");
        scanf("%i", &genero);
        printf("DIgite o Nome:");
        scanf("%s", &nome_geral);
        printf("Agora a idade:");
        scanf("%f", &idade_geral);

        if(idade_geral > idade_pessoa_mais_velha){
            idade_pessoa_mais_velha = idade_geral;
            strcpy(nome_pessoa_mais_velha, nome_geral);
        }
        if(((idade_geral < idade_mulher_mais_jovem)||(idade_mulher_mais_jovem == -1)) && (genero == 2)){
            idade_mulher_mais_jovem = idade_geral;
            strcpy(nome_mulher_mais_jovem, nome_geral);
        }
        if((genero == 1)&&(idade_geral > 30)){
            qte_homem_mais_trinta += 1;
        }
        if((genero == 2)&&(idade_geral < 18)){
            qte_mulheres_menos_dezoito +=1;
        }

        media_idade_grupo += idade_geral;

        printf("\nVoce deseja parar digite 999:");
        scanf("%i", &parar_loop);

        if(parar_loop == 999){
            contador = 0;
        }else{
            contador+=1;
        }

    }

    media_idade_grupo /= qte_pessoas;

    printf("\nO nome da pessoa mais velha eh %s, com %i anos", nome_pessoa_mais_velha, idade_pessoa_mais_velha);
    printf("\nO nome da mulher mais jovem eh %s, com %i anos ", nome_mulher_mais_jovem, idade_mulher_mais_jovem);
    printf("\nA media de idade do grupo eh %.2f", media_idade_grupo);
    printf("\nNesse grupo tem %i homem/s mais de trinta anos", qte_homem_mais_trinta);
    printf("\nNesse grupo tem %i mulher/s menos de dezoito anos", qte_mulheres_menos_dezoito);

    return 0;
}
