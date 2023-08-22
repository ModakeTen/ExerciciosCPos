#include <stdio.h>

int main(){
    int votos_brancos = 0;
    int votos_nulos = 0;
    int votos_validos = 0;
    int populacao = 0;
    int perc_brancos = 0; 
    int perc_nulos = 0; 
    int perc_validos = 0;
    printf("Insira quantidade de votos Brancos:");
    scanf("%i",&votos_brancos);
    printf("insira quantidade de votos Nulos:");
    scanf("%i",&votos_nulos);
    printf("Insira quantida de votos Validos:");
    scanf("%i",&votos_validos);
    populacao = votos_brancos + votos_nulos + votos_validos;
    perc_brancos = populacao*0.01*votos_brancos;
    perc_nulos = populacao*0.01*votos_nulos;
    perc_validos = populacao*0.01*votos_validos;
    printf("Tivemos %i porcento de votos brancos, %i porcento de votos nulos e %i porcento de votos validos.",perc_brancos,perc_nulos,perc_validos);
}