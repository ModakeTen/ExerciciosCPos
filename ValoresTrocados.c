#include <stdio.h>

int main(){
    int primeiro_valor = 0;
    int segundo_valor = 0;
    int copia_p = 0;
    int copia_S = 0;
    printf("Digite o primeiro valor:");
    scanf("%i",&primeiro_valor);
    printf("Digite o segundo valor:");
    scanf("%i",&segundo_valor);
    copia_p = primeiro_valor;
    copia_S = segundo_valor;
    primeiro_valor = copia_S;
    segundo_valor = copia_p;
    printf(" %i primeiro valor, %i segundo valor.", primeiro_valor, segundo_valor);
}