#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l1, l2, l3;

    printf("Digite um lado do triangulo:");
    scanf("%d", &l1);
    printf("Agora digite outro lado:");
    scanf("%d", &l2);
    printf("por fim o ultimo lado:");
    scanf("%d", &l3);

    if((l1 <= l2 + l3)&&(l2 <= l1 + l3)&&(l3 <= l1 + l2)){
            if((l1 == l2) && (l1 == l3)){
                printf("esse e uma triangulo equilatero");
            }
            else if((l1 != l2)&&(l2 != l3)){
                printf("eh um triangulo escaleno");
            }
            else{
                printf("eh um triangulo isoscele");
            }

    }
    else{
        printf("De acordo com os lados que voce informou, notamos qua nao se encaixa nas propriedades de um triangulo");
    }

    return 0;
}
