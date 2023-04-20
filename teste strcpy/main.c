#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome1[50], nome2[50];

    printf("--Digite um nome:");
    scanf("%s", &nome1);

    strcpy(nome2, nome1);

    printf("\nnome: %s", nome2);

    return 0;
}
