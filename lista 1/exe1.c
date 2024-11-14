/*Ler quatro números inteiros e apresentar o resultado da adição e multiplicação, baseando-se na utilização do conceito da propriedade distributiva. Ou seja, se forem lidas as variáveis A, B, C, e D, devem ser somadas e multiplicadas A com B, A com C e A com D. Depois B com C, B com D e por fim C com D. Perceba que será necessário efetuar seis operações de adição e seis operações de multiplicação e apresentar doze resultados de saída. (MANZANO, p. 26)*/

#include <stdio.h>

int main(){
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;

    printf("Digite o valor de a:");
    scanf("%d", &a);
    printf("Digite o valor de b:");
    scanf("%d", &b);
    printf("Digite o valor de c:");
    scanf("%d", &c);
    printf("Digite o valor de d:");
    scanf("%d", &d);

    e=a+b;
    f=a+c;
    g=a+d;
    k=b+c;
    l=b+d;
    o=c+d;
    h=a*b;
    i=a*c;
    j=a*d;
    m=b*d;
    n=b*c;
    p=c*d;

    printf("O resultado das operações de adicão são:%d, %d, %d, %d, %d, %d\ne os de multiplicação são: %d, %d, %d, %d, %d, %d\n", e, f, g, k, l, o, h, i, j,  m, n, p);
    printf("A+B=%d\n", e);
    printf("A+C=%d\n", f);
    printf("A+D=%d\n", g);
    printf("A*B=%d\n", h);
    printf("A*C=%d\n", i);
    printf("A*D=%d\n", j);
    printf("B+C=%d\n", k);
    printf("B+D=%d\n", l);
    printf("B*C=%d\n", m);
    printf("B*D=%d\n", n);
    printf("C+D=%d\n", o);
    printf("C*D=%d\n", p);
}

