#include <stdio.h>
#include <stdlib.h>

int main(){

    int contagem=1, idade_alunos=0, soma_idade=0, qte_alunos=0;
    float media_idade=0;

    printf("--Digite a idade de vários alunos, se voce digitar o numero 999 o programa encerra--");

    while (contagem > 0){
        printf("\nDigite a idade do aluno %i:", contagem);
        scanf("%i", &idade_alunos);
        contagem += 1;

        if(idade_alunos != 999){
            soma_idade += idade_alunos;
            qte_alunos += 1;
        }
        else{
            contagem = 0;
        }
    }

    media_idade = (soma_idade/qte_alunos);

    printf("----A media de idade dos alunos eh %.2f----\n----E nesse grupo tem %i aluno/s----\n", media_idade, qte_alunos);

    system("pause");
    return 0;
}
