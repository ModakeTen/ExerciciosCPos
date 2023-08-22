#include <stdio.h>

int main(){
    float Dolar = 0;
    float Real = 0;
    printf("Digite o valor em Dolar que deseja converter:");
    scanf("%f",&Dolar);
    Real = Dolar*4.90;
    printf("O valor fica %.2f.",Real);
}
