#include <stdio.h>

int main(){
    float vendas_totais = 0;
    float sapatos_vendidos = 0;
    float salario = 0;
    printf("Insira o valor total de vendas:");
    scanf("%f",&vendas_totais);
    printf("\nInsira quantidade de pares de sapatos vendidos:",&sapatos_vendidos);
    scanf("%f",&sapatos_vendidos);
    salario = vendas_totais * 0.2 + sapatos_vendidos * 5;
    printf("O salario será de %.2f reais.",salario);
}