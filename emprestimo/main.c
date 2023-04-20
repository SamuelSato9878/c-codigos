#include <stdio.h>
#include <stdlib.h>

int main(void){
    float valor_casa, salario, prestacao, i;
    int anos, meses ;

    printf("Nos informe o valor da casa:");
    scanf("%f", &valor_casa);
    printf("agora nos informe o seu salario:");
    scanf("%f", &salario);
    printf("Em quantos anos voce deseja pagar:");
    scanf("%d",&anos);

    meses = (anos*12);
    prestacao = (valor_casa / meses);
    i = ((salario*30)/100);

    printf("O valor da prestacao eh de %.2f\n", prestacao);
    printf("esse eh o valor de 30 porcento do seu salario %.2f\nse o valor da prestacao ultrapassar esse valor o emprestimo sera negado\n",i);

    if(prestacao>((salario*30)/100)){
        printf("\nO emprestimo foi negado\n");
    }
    else{
        printf("\nO emprestimo foi aprovado\n");
    }

    return 0 ;
}
