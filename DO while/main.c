#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, cont = 0;

    while (cont < 5){
        printf("Digite o numero:");
        scanf("%d", &num);
        cont++;
        while(cont < 5){
            printf("%d", num);
            cont++;
        }
    }

    return 0;
}
