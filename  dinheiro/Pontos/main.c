#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas;
    float cash;

    printf("Quantas horas de atividade fisica voce fez no mes:\n");
    scanf("%i" , &horas);

    if (horas <= 10){

        cash = (horas * 2 * 0.05);
        printf("\nVoce vai receber %.2f R$", cash);

    }else if((horas > 10)&&(horas <= 20)){

        cash = (horas * 5 * 0.05);
        printf("\nVoce vai receber %.2f R$", cash);

    }else if(horas > 20){

        cash = (horas * 10 * 0.05);
        printf("\nVoce vai receber %.2f R$", cash);
    }


    return 0;
}
