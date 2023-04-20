#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero=0, fatorial=0;

    printf("Digite um numero:");
    scanf("%i", &numero);

    for (fatorial = 1; numero >= 1; numero--){

        fatorial = fatorial * numero;
    }
    printf(" O fatorial do numero eh:%i", fatorial);




    return 0;
}

