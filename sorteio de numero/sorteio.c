#include <stdio.h>
#include <stdlib.h>

int main(void){
    float valor_casa, salario, prestacao,
    int anos, meses ;

    printf("Nos informe o valor da casa:");
    scanf("%f", &valor_casa);
    printf("agora nos informe o seu salario:");
    scanf("%f", &salario);
    printf("Em quantos anos voce deseja pagar:");
    scanf("%d",&anos);

    meses = (anos*12);
    prestacao = (valor_casa / meses);

    if(prestacao>((salario*30)/100){
        printf("O emprestimo foi negado"):
    }
    else{
        printf("O emprestimo foi aprovado");
    }

    retun 0 ;
}



