#include <stdio.h>

int main(){
    float nota1, nota2, media;

    printf("Digite a nota do primeiro bimenstre, por favor:");
    scanf("%f", &nota1);
    printf("Agora digite outro numero:");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A sua nota final eh %.2f \n", media);

    if(media >= 7){
        printf("Portando foi uma nota aprovativa, parabens voce passou \n");
    }
    else{
        printf("Sua nota no foi aprovativa \n");
    }

    return 0 ;
}
