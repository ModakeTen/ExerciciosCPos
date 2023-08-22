#include <stdio.h>

int main(){
    int valor_usuario = 0;
    printf("Digite o valor do usuario:");
    scanf("%i",&valor_usuario);
    if(valor_usuario > 20 && valor_usuario <= 90){
        printf("%i e compreendido entre 20 e 90.",valor_usuario);
        return 0;
    }
    else{
        printf("%i nao e compreendido entre 20 e 90.",valor_usuario);
        return 0;
    }
}