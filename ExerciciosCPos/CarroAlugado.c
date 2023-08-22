#include <stdio.h>

int main(){
    int dias = 0;
    float km = 0;
    float valor = 0;
    printf("Insira a quilometragem percorrida:");
    scanf("%f",&km);
    printf("Dias em posse do carro:");
    scanf("%i",&dias);
    valor = (dias*70)+(km*0.15);
    printf("O valor total do carro alugado e %.2f reais.",valor);
}
