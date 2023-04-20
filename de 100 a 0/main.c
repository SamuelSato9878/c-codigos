#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;

    for(i = 100; i >= 0; i-=10){
        printf("%i ", i);
    }
    printf("Acabou!");

    return 0;
}
