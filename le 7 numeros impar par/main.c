#include <stdio.h>
#include <stdlib.h>

//programa que le 7 numeros o mostra na tela quantos sao pares e quantos sao impares

int main()
{
    int number=0, impar=0, par=0, contador=0;
    printf("Digite sete numeros, e iremos informar quantos são pares e quantos impares:\n");

    while(contador < 7){
        scanf("%i",&number);
        if(number % 2 == 0){
            par = par +1;
        }else{
            impar = impar +1;
        }
        contador = contador+1;
    }

    printf("Voce digitou %i numeros pares \ne %i numeros impares.",par, impar);
    return 0;
}
