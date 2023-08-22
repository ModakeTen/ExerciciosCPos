#include <stdio.h>
#include <math.h>

int main(){
    int horas = 0;
    int minutos = 0;
    int segundos = 0;
    printf("\nHoras:");
    scanf("%i",&horas);
    printf("\nMinutos:");
    scanf("%i",&minutos);
    printf("\nSegundos:");
    scanf("%i",&segundos);
    minutos += horas*60;
    segundos += minutos*60;
    printf("O total de segundos e %i.",segundos);
}