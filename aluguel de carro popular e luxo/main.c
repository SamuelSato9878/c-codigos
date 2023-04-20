#include <stdio.h>
#include <stdlib.h>

int main(){

    float preco;
    int dia, tipo_carro, km;

    printf("1scolha o tipo de carro:\n1 - popular\n2 - luxo\n ");
    scanf("%i", &tipo_carro);

    printf("Agora digite a quantidade de dias:");
    scanf("%i", &dia);
    printf("Por fim, a quantidade de kilometros percorridos:");
    scanf("%i", &km);

    if (tipo_carro == 1){
        if(km <= 100){
            preco = ((dia * 90)+(km * 0.20));
            printf("\nO preco que voce vai pagar eh de %.2f", preco);
        }else if (km > 100){
            preco = ((dia * 90)+(km * 0.10));
            printf("\nO preco a pagar eh de %.2f", preco);

        }
    }
    else if(tipo_carro == 2){
        if(km <= 200){
            preco = ((dia *150)+(km * 0.30));
            printf("\nO preco a pagar eh de %.2f", preco);
        }else if(km > 200){
            preco = ((dia * 150)+(km * 0.25));
            printf("\nO preco que voce vai pagar eh %.2f", preco);
        }
    }
    else{
        printf("\nHmmmm voce soh pode escolher ou carro popular ou de luxo, tente outra vez");
    }



    return 0;
}
