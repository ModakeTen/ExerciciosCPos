#include <stdio.h>

int main(){
    int Quilowatts = 0;
    int quilowatts_simplificado = 0;
    float salario = 0;
    float setimo_salario = 0;
    float valor_total = 0;
    printf("Insira seu Salario:");
    scanf("%f",&salario);
    printf("Insira quantidade de quilowatts:");
    scanf("%i",&Quilowatts);
    quilowatts_simplificado = Quilowatts / 100;
    setimo_salario = salario / 7;
    valor_total = setimo_salario * quilowatts_simplificado;
    printf("R$%.2f por cada Quilowatts, e o total a ser pago e R$%.2f. ",setimo_salario, valor_total);

}