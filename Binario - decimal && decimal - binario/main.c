/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0, resto = 0, binario[], i = 0, contador  = 0;

    printf("Digite um numero e iremos transformar em binario:");
    scanf("%i", &numero);

    while(numero > 1){

        printf("%i\n", numero);

        resto = numero % 2;

        numero = numero / 2;

        if(resto == 1){
            binario[i] = 1;
        }if(resto == 0){
            binario[i] = 0;
        }

        i += 1;

    }

    printf("\n\n");

    while(contador < i){
        contador++;
        printf("%i", binario[i]);
    }

    return 0;
}*/


#include <stdio.h>

int main() {
   int decimal, binario = 0, posicao = 1, resto;

   printf("Digite um numero decimal: ");
   scanf("%d", &decimal);

   while(decimal != 0) {
      resto = decimal % 2;
      binario += resto * posicao;
      posicao *= 10;
      decimal /= 2;
   }

   printf("O numero em binario e: %d", binario);

   return 0;
}
