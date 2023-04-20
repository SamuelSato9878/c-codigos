#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int sorteio, num;
    printf("Tente adivinhar o numero que iremos sortear, de 0 a 5:");
    scanf("%d", &num);

    srand(time(NULL));

    sorteio = rand() %6;

    printf("o numero sorteado foi %d \n ", sorteio);

    if(sorteio == num){
        printf("voce foi sorteado");
    }
    if(num > 5 || num < 0){
        printf("so pode numero de 0 a 5");
    }
    else{
        printf("tente na proxima");
    }


    return 0;
}
