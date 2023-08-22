#include <stdio.h>

int main(){
    int pequeno_refri = 0;
    int medio_refri = 0;
    int grande_refri = 0;
    float total_litros = 0;
    printf("Insira a quantidade de refrigerantes de 350ml comprados:");
    scanf("%i",&pequeno_refri);
    printf("Insira a quantidade de refrigerantes de 600ml comprados:");
    scanf("%i",&medio_refri);
    printf("Insira a quantida de refrigerantes de 2000ml:");
    scanf("%i",&grande_refri);
    total_litros += pequeno_refri*350;
    total_litros += medio_refri*600;
    total_litros += grande_refri*2000;
    total_litros /= 1000;
    printf("Litros totais de refrigerante e %.1f L.",total_litros);
}