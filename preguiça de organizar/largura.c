#include <stdio.h>

int main ()
{

    float comprimento, largura, area;

    printf("Digite o comprimento do terreno em metros:");
    scanf("%f",&comprimento);
    printf("Agora digite a largura:");
    scanf("%f", &largura);

    area = comprimento*largura;

    printf("A area do terreno eh de %.2f m quadrados\n", area);

    if(area < 100)
    {
        printf("A area de seu terreno eh abaixo de 100m, isso significa que ele eh um terreno popular \n \n");
    }
    if((area >= 100) && (area <= 500 ))
    {
        printf("o seu terreno esta entre 100 e 500 metros, ou seja ele eh um terreno master \n \n ");
    }
    if(area > 500)
    {
        printf("o seu terreno esta acima de 500 metros, ou seja voce eh muito pro \n \n");
    }


    return 0;
}
