#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=0;

    do{
        printf("%i\n", contador);
        contador +=3;
    }while(contador <= 30);
    return 0;
}
