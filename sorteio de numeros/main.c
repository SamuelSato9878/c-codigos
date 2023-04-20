#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int contador = 0,numeros = 0, acima_five=0, div_per_trhee=0;
    srand(time(NULL));

    while(contador < 20){
        contador = contador+1;
        printf("%i\n", numeros=rand() % 10);

        if(numeros > 5){
            acima_five = acima_five + 1;
        }if(numeros % 3 == 0){
            div_per_trhee = div_per_trhee + 1;
        }

    }
    printf("\n----Nessa lista tem %i numeros acima de 5----\n", acima_five);
    printf("\n----e tambem existem %i numeros divisiveis por 3----\n", div_per_trhee);

    return 0;
}
