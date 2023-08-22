#include <stdio.h>

int main(){
    int valor_p = 0;
    int valor_s = 0;
    char operator = 0;
    printf("Insira o valor:");
    scanf("%i",&valor_p);
    printf("Operador:");
    scanf("%s",&operator);
    printf("Insira o valor:");
    scanf("%i",&valor_s);
    if(operator == '+'){
        valor_p = valor_p+valor_s;
        printf("O resultado da soma e %i.",valor_p);
    } else if(operator == '-'){
        valor_p = valor_p-valor_s;
        printf("O resultado da subtracao e %i.",valor_p);
    } else if(operator == '*'){
        valor_p = valor_p*valor_s;
        printf("O resultado da multiplicacao e %i.",valor_p);
    }else if(operator == '/'){
        valor_p = valor_p / valor_s;
        printf("O resultado da divisao e %i.",valor_p);
    }
    return 0;
}