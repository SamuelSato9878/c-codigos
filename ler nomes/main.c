#include <stdio.h>
#include <stdlib.h>
#include <strstream>

int main()
{
    int i=0;
    char nome[10], nome2[10];

    printf("Digite alguns nomes:");
    scanf("%s", &nome);

    nome2[10] = nome[10];

    printf("Seu nome eh %s", nome2[10]);

    return 0;

}
