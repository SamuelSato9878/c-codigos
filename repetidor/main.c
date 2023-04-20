#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1 = 0, valor2 = 0, incremento = 0, contador = 0;

    printf("-- DIGITE O PRIMEIRO VALOR --\n");
    scanf("%i", &valor1);
    printf("-- DIGITE O SEGUNDO VALOR --\n");
    scanf("%i", &valor2);
    printf("-- FINALMENTE, DIGITE O INCREMENTO --\n");
    scanf("%i",&incremento);

    if(valor1 < valor2){
        contador = valor1;

        while(contador <= valor2){
            printf("|| %i ||\n", contador);
            contador = contador + incremento;
            ++contador;
        }

    }else if(valor1 > valor2){
        contador = valor1;

        while(contador >= valor2){
            printf("|| %i ||\n", contador);
            contador = contador - incremento;
            contador--;
        }

    }else{
        printf("\n!!!!OS NUMEROS SAO IGUAIS!!!!");
    }

    return 0;
}
