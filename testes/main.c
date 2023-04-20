#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float peso, altura, imc;

    printf("Digite o seu peso:\n");
    scanf("%f", &peso);
    printf("Digite agora a sua altura:\n");
    scanf("%f", &altura);

     //Calculo de indicie de massa corporea
    imc = (peso/(pow(altura, 2)));

    printf("o seu imc eh de %.2f:", imc);

    if(imc < 18.5){
        printf("Voce esta a baixo do peso");
    }else if ((imc >= 18.5)&&(imc <= 25)){
        printf("Seu peso eh ideal");
    }else if((imc > 25)&&(imc <= 30)){
        printf("Sobre Peso");
    }else if((imc > 30)&&(imc <= 40)){
        printf("Obesidade");
    }else{
        printf("Obesidade Morbida");
    }


    return 0;
}

