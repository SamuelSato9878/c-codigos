#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vetor[10] = {0};
    srand(time(NULL));


    for(int i = 0; i < 10; ++i){
        vetor[i] = rand()%2;
        printf("%i\n", vetor[i]);
    }
    return 0;
}
