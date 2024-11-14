/*Elaborar um programa que efetue a apresentação do valor da conversão em real de um valor lido em dólar. O programa deve solicitar o valor da cotação do dólar e também a quantidade de dólares disponível com o usuário, para que seja apresentado o valor em moeda brasileira. (MANZANO, p. 26)*/
/*vetor bidimensional, multidimensional (matriz), count, short or sort, ordenação de vetores, modelagem de dados*/
#include <stdio.h>

int main(){
    float dolar, quant, real, cotacao;

    printf("Informe o valor da cotação do dólar do dia:");
    scanf("%f", &dolar);
    printf("Informe o valor de dólares para realizar a cotação:");
    scanf("%f", &quant);

    real=dolar*quant;
    printf("O valor da cotação é:%.2f", real);
}