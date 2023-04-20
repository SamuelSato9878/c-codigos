#include <stdio.h>
#include <stdlib.h>
int contagem;
void func1(void);
void func2(void);
int main()
{

    contagem = 100;
    func1();


    return 0;
}

void func1(void)
{
    int temp;

    temp = contagem;
    func2();
    printf("%d", temp);

}
void func2(void)
{
    int contagem;
    printf("%d ", contagem);

    for(contagem=1; contagem<10;contagem++)
    putchar('.');
}


