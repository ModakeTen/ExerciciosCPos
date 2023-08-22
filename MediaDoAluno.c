#include <stdio.h>

int main(){
    float primeira_prova = 0;
    float segunda_prova = 0;
    float terceira_prova = 0;
    float media = 0;
    printf("\nNota da primeira prova:");
    scanf("%f",&primeira_prova);
    printf("\nNota da segunda prova:");
    scanf("%f",&segunda_prova);
    printf("\nNota da terceira prova:");
    scanf("%f",&terceira_prova);
    media = (primeira_prova*2 + segunda_prova*3 + terceira_prova*5)/(5+3+2);
    printf("A media do aluno e %.1f.",media);
}

