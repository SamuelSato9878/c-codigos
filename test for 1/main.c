#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador =0;

    for (contador=0 ; contador < 41; contador+=5){
        printf("%i ", contador);
    }
    printf("Acabou!");

    return 0;
}
