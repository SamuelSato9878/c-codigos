#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stop=0,contagem=1,soma_idade_masculino=0, feminino_jovem=1000, idade=0, genero=0, maior_idade=0, qte_homens=0;
    float media_idade_masculino=0;

    printf("--Digite o sexo e a idade das pessoas--");
    while(contagem > 0){
        printf("\n--Digite 1 - masculino ou 2 - para feminino:");
        scanf("%i", &genero);
        printf("--Digite a idade do individuo:");
        scanf("%i", &idade);
        contagem += 1;

        if(idade > maior_idade){
            maior_idade = idade;
        }
        if(genero == 1){
            qte_homens += 1;
            soma_idade_masculino += idade;
        }
        if(genero == 2){
           if(idade < feminino_jovem){
                feminino_jovem = idade;
           }
        }
        printf("\n--Voce deseja parar a contagem? se sim digite 999 ou qualquer outro numero para continuar:");
        scanf("%i", &stop);

        if(stop == 999){
            contagem = 0;
        }
    }
    media_idade_masculino = (soma_idade_masculino/qte_homens);

    printf("\n--A maior idade desse grupo eh %i--", maior_idade);
    printf("\n--Foram cadastrados %i homens--", qte_homens);
    printf("\n--A idade da mulher mais jovem eh de %i anos", feminino_jovem);
    printf("\n--A idade media dos homens eh %.2f:", media_idade_masculino);

    system("pause");

    return 0;
}
