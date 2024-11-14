/*Elaborar um programa que apresente como resultado o valor de uma potência de uma base qualquer elevada a um expoente qualquer, ou seja, de BE , em que B é o valor da base e E o valor do expoente. Observe que neste exercício não pode ser utilizado o operador de exponenciação do portuguol (^).(MANZANO, p. 66)*/

#include <stdio.h>

int main(){
    /*pow(b,e) -> ESTUDAR* (da biblioteca math.h) *Fibonacci*
    base que roda, e é acumulativa ex: cont= cont + 1 (iniciar com 0 se for soma e 1 se for multiplicação)*/

    int base, mult, exp;
    printf("Digite o valor da base:");
    scanf("%d", &base);
    printf("Digite o valor do expoente:");
    scanf("%d", &exp);
    mult=1;

    while (exp>0){
        mult= mult*base;
        exp--;
    }
    printf("O valor da potência é:%d\n", mult);
}