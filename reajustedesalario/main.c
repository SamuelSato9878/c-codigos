#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[61];
    float salario, reajuste;
    int time;

    printf("ola, poderia nos dizer seu nome:\n");
    scanf("%s", nome);
    printf("agora no informe seu salario %s: \n", nome);
    scanf("%f", &salario);
    printf("Ha quantos anos voce trabalha na empresa %s: \n", nome);
    scanf("%d", &time);

    if(time <= 3){
        reajuste = (salario * 103)/100;
        printf("De acordo com os dados que voce informou voce passarah a ganhar %.2f R$ \n", reajuste);

    }
    if((time > 3) && (time <= 10)){
        reajuste = (salario * 112.5)/100;
        printf("De acordo com os dados que voce nos informou voce passarah a ganhar %.2f R$ \n", reajuste);
    }
    if(time > 10){
        reajuste = (salario * 120)/100;
        printf("por voce ter trabalhado por mais de 10 anos aqui, voce passarah a ganhar %.2f R$", reajuste);
    }
    return 0;
}
