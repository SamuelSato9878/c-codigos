#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contagem=0, numero = 0;
    printf("Digite um numero e iremos fazer um sequencia de 1 a 1 ate ele:");
    scanf("%i",&numero);
    printf("\n");

    for(contagem = 0; contagem <= numero; contagem++){

        printf("%i, ", contagem);
    }

    printf("Acabou!\n");
    return 0;
}
