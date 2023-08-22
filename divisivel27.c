#include <stdio.h>

int main(){
    int valor_usuario = 0;
    printf("Insira o valor:");
    scanf("%i",&valor_usuario);
    if(valor_usuario%2 == 0 && valor_usuario%7 == 0){
        printf("%i é divisivel por 2 e 7.",valor_usuario);
    }else if(valor_usuario%2 == 0 && valor_usuario%7 > 0){
        printf("%i e divisivel por 2 e nao por 7.",valor_usuario);
    }else if(valor_usuario%2 > 0 && valor_usuario%7 == 0){
        printf("%i e divisivel por 7 e nao por 2.",valor_usuario);
    }else{
        printf("%i nao e divisivel por 2 e por 7.",valor_usuario);
    }
    return 0;
}