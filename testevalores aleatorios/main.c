#include <stdio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>//necessário p/ função time()

int main(void)
{
  int i, usuario;

  printf("0 - pedra\n1 - papel\n2 - tesoura\n");
  scanf("%d", &usuario);

  /* srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
  com o valor da função time(NULL). Este por sua vez, é calculado
  como sendo o total de segundos passados desde 1 de janeiro de 1970
  até a data atual.
  Desta forma, a cada execução o valor da "semente" será diferente.
  */
  srand(time(NULL));
  i = rand() %3;

  if(i==0){
    printf("maquina - pedra\n");
  }
  if(i==1){
    printf("maquina - papel\n");
  }
  if(i==2){
    printf("maquina - tesoura\n");
  }

  if((i==0)&&(usuario ==0)){
        printf("usuario - pedra \n empate");
  }
  if((i==0)&&(usuario==1)){
    printf("usuario - papel\n voce venceu");
  }
  if((i==0)&&(usuario==2)){
    printf("usuario - tesoura \n voce perdeu");
  }
  if((i==1)&&(usuario==0)){
    printf("usuario - pedra \n voce perdeu");
  }
  if((i==1)&&(usuario==1)){
    printf("usuario - papel\nempate");
  }
  if((i==1)&&(usuario==2)){
    printf("usuario - tesoura\nvoce venceu");
  }
  if((i==2)&&(usuario==0)){
    printf("usuario - pedra \nvoce ganhou");
  }
  if((i==2)&&(usuario==1)){
    printf("usuario - papel\nvoceu perdeu");
  }
  if((i==2)&&(usuario==2)){
    printf("usuario - tesoura\nempate");
  }



  /*for (i=0; i < 10; i++)
  {
    // gerando valores aleatórios na faixa de 0 a 100
    printf("%d ", rand() % 3);
  }

  getch();*/
  return 0;
}
