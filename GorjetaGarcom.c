#include <stdio.h>

int main(){
    float gasto_cliente = 0;
    float gorjeta = 0.1;
    float valor_total = 0;
    printf("Valor gasto pelo cliente:");
    scanf("%f",&gasto_cliente);
    valor_total = gasto_cliente + gasto_cliente*gorjeta;
    printf("Valor total e de %.2f reais.",valor_total);
}