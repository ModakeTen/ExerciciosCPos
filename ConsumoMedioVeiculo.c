#include<stdio.h>

int main(){
    float capacidade_tanque = 0;
    float gasolina = 0;
    float quilometragem = 0;
    float capacidade_autonomia = 0;
    float consumo = 0;
    printf("Capacidade maxima do Tanque:");
    scanf("%f",&capacidade_tanque);
    printf("\nQuilometros Percorridos:");
    scanf("%f",&quilometragem);
    printf("Quantos litros tem no tanque:");
    scanf("%f",&gasolina);
    consumo = (capacidade_tanque - gasolina) / quilometragem;
    capacidade_autonomia = gasolina / consumo;
    printf("Consumo medio e de %.1f litros e ele consegui percorrer %.2f km. ",consumo, capacidade_autonomia);
}
