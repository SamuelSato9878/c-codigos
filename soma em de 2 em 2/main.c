#include <stdio.h>

  int main(){

    int number=6, cont=6,cont2=0;

    while(cont <= 100){
        cont = cont + 2;
        number = number + cont;
        cont2++;
        printf("%i+", cont);
    }

        printf("= %i\n\n", number);


        printf("sao %i termos", cont2);
    return 0;
}
    /*int main(){
        int Nterm=0, ultimo_termo=0, primeiro_termo=0, razao=0, soma_termos=0;

        printf("Me informe o primeiro termo:");
        scanf("%i", &primeiro_termo);
        printf("Agora o ultimo termo:");
        scanf("%i", &ultimo_termo);
        printf("E por fim o me informe a razao da PA:");
        scanf("%i",&razao);

        Nterm = (ultimo_termo + primeiro_termo - razao)/razao;

        printf("O numero de termos eh %i:", Nterm);

        soma_termos = (Nterm*(primeiro_termo+ultimo_termo))/2;

        printf("\nA soma dos termos eh %i", soma_termos);


        return 0;
    }*/

