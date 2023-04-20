#include <stdio.h>
#include <stdlib.h>// necess�rio p/ as fun��es rand() e srand()
#include <time.h>//necess�rio p/ fun��o time()

int main(void)
{
  int i, usuario;

  printf("0 - pedra\n1 - papel\n2 - tesoura\n");
  scanf("%d", &usuario);

  /* srand(time(NULL)) objetiva inicializar o gerador de n�meros aleat�rios
  com o valor da fun��o time(NULL). Este por sua vez, � calculado
  como sendo o total de segundos passados desde 1 de janeiro de 1970
  at� a data atual.
  Desta forma, a cada execu��o o valor da "semente" ser� diferente.
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
    // gerando valores aleat�rios na faixa de 0 a 100
    printf("%d ", rand() % 3);
  }

  getch();*/
  return 0;
}
