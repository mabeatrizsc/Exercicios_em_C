/*	Elaborar um programa que calcule e apresente o volume de uma caixa retangular, por meio da fórmula VOLUME ← COMPRIMENTO * LARGURA * ALTURA. (MANZANO, p. 26)*/

#include <stdio.h>

int main(){
   
    int alt, larg, comp, vol; 
    printf("Insira o valor da altura:");
    scanf("%d", &alt);
    printf("Insira o valor da largura:");
    scanf("%d", &larg);
    printf("Insira o valor do comprimento:");
    scanf("%d", &comp);

    vol=alt*larg*comp;
    printf("O volume da caixa é:%d", vol);

}