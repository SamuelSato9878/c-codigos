#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total_salario_feminino=0, total_salario_masculino=0, salario=0;
    int contador = 1, sexo=0, parar=0;

    printf("----Digite o sexo do funcionario e o salario dele.----\n");

    while (contador > 0){

        printf("\n--Digite 1 para homem ou 2 para mulher:");
        scanf("%i", &sexo);
        printf("--Digite o salario agora:");
        scanf("%f", &salario);

        if(sexo == 1){
            total_salario_masculino += salario;
        }else if(sexo == 2){
            total_salario_feminino += salario;
        }

        printf("--voce deseja parar a execucao? Digite 1 para parar ou qualquer outro numero para continuar:");
        scanf("%i", &parar);

        if(parar == 1){
            contador = 0;
        }
    }

    printf("\n--O total de salario dos homens eh %f R$\n", total_salario_masculino);
    printf("--O total de salario das mulheres eh %f R$\n", total_salario_feminino);

    system("pause");


    return 0;
}
