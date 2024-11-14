/*Ler dois inteiros (variáveis A e B) e imprimir o resultado do quadrado da diferença do primeiro valor pelo segundo. (MANZANO, p. 26)*/

#include <stdio.h>

int main(){
    int a, b, x;

    printf("Insira o valor de a:");
    scanf("%d", &a);
    printf("Insira o valor de b:");
    scanf("%d", &b);

    x= (a-b)*(a-b)
        /* caso a=5 e b=3
        5*5-10-10+4
        5²-2*5*2+2²
        25-20+4
        5+4
        9
        */
    printf("O valor do quadrado da diferença é:%d", x)
}
