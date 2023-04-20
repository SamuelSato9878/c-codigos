#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor = 0, contagem = 0;
    printf("DIGITE UM NUMERO:");
    scanf("%i", &valor);

    while(contagem <= valor){

        printf("%i\n", contagem);
        contagem++;
    }

    return 0;
}
