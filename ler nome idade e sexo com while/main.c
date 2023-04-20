#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qte_homens_mais_trinta = 0, qte_mulheres_menos_dezoito = 0;
    int idade=0, sexo=0, contador=1, idade_pessoa_mais_velha=0, idade_mulher_mais_jovem=1000, soma_idades=0, qte_pessoas=0, parar_loop=0;
    char nome_geral[20], nome_pessoa_mais_velha[20], nome_mulher_mais_jovem[20];
    float media_idade=0;

    printf("Digite o nome, a idade e o sexo, em sequencia:");

    while(contador > 0){

        printf("\nPessoa %i:\nNome:", contador);
        scanf("%s", &nome_geral);
        printf("idade:");
        scanf("%i", &idade);
        printf("1 - homem ou 2 - mulher:");
        scanf("%i", &sexo);

        qte_pessoas += 1;
        contador+=1;

        if(idade > idade_pessoa_mais_velha){
                idade_pessoa_mais_velha = idade;
                nome_pessoa_mais_velha[20] = nome_geral[20];
        }if(sexo==2){
            if(idade < idade_mulher_mais_jovem){
                idade_mulher_mais_jovem = idade;
                nome_mulher_mais_jovem[20] = nome_geral[20];
            }
        }if((sexo==1)&&(idade>30)){
            qte_homens_mais_trinta += 1;
        }if((sexo==2)&&(idade<18)){
            qte_mulheres_menos_dezoito +=1;
        }


        soma_idades +=idade;

        printf("\nSe voce deseja parar digite 999:");
        scanf("%i", &parar_loop);

        if(parar_loop == 999){
            contador = 0;
        }
    }
    media_idade = (soma_idades/qte_pessoas);

    printf("\nO nome da pessoas mais velha eh %s e ela tem %i anos", nome_pessoa_mais_velha[20], idade_pessoa_mais_velha);
    printf("\nO nome da mulher mais jovem eh %s, ela tem %i anos", nome_mulher_mais_jovem[20], idade_mulher_mais_jovem);
    printf("\nA media de idade do grupo eh %f", media_idade);
    printf("\nA quantidade de homens mais de 30 anos eh %i homem/s", qte_homens_mais_trinta);
    printf("\nA quantidade de mulheres menos de 18 eh %i", qte_mulheres_menos_dezoito);

    return 0;
}
