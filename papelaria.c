#include <stdio.h>

int main(){
    int copias_xerox = 0;
    float valor_total = 0;
    printf("Insira quantidade de copias:");
    scanf("%i",&copias_xerox);
    if(copias_xerox > 100){
        valor_total = (copias_xerox-100) * 0.20;
        valor_total += 100 * 0.25;
        printf("A quantidade de copias: %i.\nValor total é %.2f Reais.\n",copias_xerox, valor_total);
        return 0;
    }else
    {
        valor_total = copias_xerox*0.25;
        printf("A quantidade de copias %i.\n Valor total é %.2f Reais.\n", copias_xerox, valor_total);
        return 0;
    }
    
    
}