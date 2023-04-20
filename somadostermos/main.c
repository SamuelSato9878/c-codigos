#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0, cont=0;

    for(cont = 500; cont >= 0; cont -= 50){
        number = number + cont;
        printf("%i ", cont);

    }
    printf("\nA soma de todos esses numeros eh igual a %i", number);
    return 0;
}
