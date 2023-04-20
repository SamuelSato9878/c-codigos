#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], nomeMaisVelho[50], nomeMulherMaisJovem[50];
    char sexo;
    int idade, maiorIdade = -1, qtdHomensMais30Anos = 0, qtdMulheresMenos18Anos = 0, idadeMulherMaisJovem = -1;
    float mediaIdade = 0;
    int continuar = 1, qtdPessoas = 0;

    while (continuar) {
        printf("Digite o nome: ");
        scanf("%s", nome);
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite o sexo (M ou F): ");
        scanf(" %c", &sexo);

        if (idade > maiorIdade) {
            maiorIdade = idade;
            strcpy(nomeMaisVelho, nome);
        }

        if (sexo == 'F' && (qtdPessoas == 0 || idade < idadeMulherMaisJovem)) {
            idadeMulherMaisJovem = idade;
            strcpy(nomeMulherMaisJovem, nome);
        }

        if (idade > 30 && sexo == 'M') {
            qtdHomensMais30Anos++;
        }

        if (idade < 18 && sexo == 'F') {
            qtdMulheresMenos18Anos++;
        }

        mediaIdade += idade;
        qtdPessoas++;

        printf("Deseja continuar? (1 - Sim / 0 - Não) ");
        scanf("%d", &continuar);
    }

    mediaIdade /= qtdPessoas;

    printf("O nome da pessoa mais velha eh %s\n", nomeMaisVelho);
    printf("O nome da mulher mais jovem eh %s\n", nomeMulherMaisJovem);
    printf("A media de idade do grupo eh %.2f\n", mediaIdade);
    printf("Ha %d homens com mais de 30 anos\n", qtdHomensMais30Anos);
    printf("Ha %d mulheres com menos de 18 anos\n", qtdMulheresMenos18Anos);

    return 0;
}

