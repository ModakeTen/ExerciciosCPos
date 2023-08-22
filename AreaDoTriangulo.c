#include <stdio.h>

int main(){
    int base = 0;
    int altura = 0;
    int area = 0;
    printf("Qual e a base do Triangulo?");
    scanf("%i",&base);
    printf("Qual e a altura do Triangulo?");
    scanf("%i",&altura);
    area = base * altura / 2;
    printf("A area do triangulo e %i.",area);
}

