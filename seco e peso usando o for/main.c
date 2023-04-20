#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0, genero=0, qte_mulheres = 0, homens_mais_cem_kilos = 0;
    float peso = 0, media_peso_mulheres = 0, maior_peso_homens=0;

    printf("--genero e peso--");

    for(contador = 1; contador <= 8; contador++){

        printf("\n--Pessoa %i", contador);
        printf("\n--Digite 1 - mulher || 2 - homem:");
        scanf("%i", &genero);
        printf("--Digite o peso:");
        scanf("%f", &peso);

        if(genero == 1){
            qte_mulheres += 1;
            media_peso_mulheres += peso;
        }
        if((genero == 2) && (peso > 100)){
            homens_mais_cem_kilos += 1;
        }
        if((genero == 2)&&(peso > maior_peso_homens)){
            maior_peso_homens = peso;
        }
    }



    media_peso_mulheres = (media_peso_mulheres/qte_mulheres);

    printf("\n--Foram cadastradas %i mulheres", qte_mulheres);
    printf("\n--Nesse grupo tem %i homens que pesam mais que 100kg", homens_mais_cem_kilos);
    printf("\n--A media de peso entre as mulheres eh %.2f", media_peso_mulheres);
    printf("\n--O maior peso dentre os homens eh %.2f kg", maior_peso_homens);

    return 0;
}
