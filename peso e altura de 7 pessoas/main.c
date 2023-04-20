#include <stdio.h>
#include <stdlib.h>

int main()

{   float altura=0, peso=0, contador=0, soma_altura=0, media_altura=0;
    int acima_noventa_kilos=0, menos_sessentakg_menos_160cm=0, mais_190cm_mais_cemkg=0;

    printf("Digite o peso e a altura de seven pessoas!\n");

    while(contador < 7){
        contador += 1;

        printf("\nDigite a altura:");
        scanf("%f", &altura);
        printf("Agora o peso:");
        scanf("%f", &peso);

        if(peso > 90){
            acima_noventa_kilos += 1;
        }if((altura < 1.60)&&(peso<60)){
            menos_sessentakg_menos_160cm += 1;
        }if((altura>1.90)&&(peso>100)){
            mais_190cm_mais_cemkg += 1;
        }


        soma_altura += altura;

    }

    media_altura = (soma_altura/7);

    printf("\n----A media de altura eh %.2f m", media_altura);
    printf("\n----Nesse grupo tem %i pessoas acima de 90 kg", acima_noventa_kilos);
    printf("\n----Nesse grupo tem %i pessoas que pesam menos de 60 kg e medem menos de 1.60m", menos_sessentakg_menos_160cm);
    printf("\n----Nesse grupo tem %i pessoas medem mais de 1.90m e pesam mais de 100kg", mais_190cm_mais_cemkg);

    system("pause");
    return 0;
}
