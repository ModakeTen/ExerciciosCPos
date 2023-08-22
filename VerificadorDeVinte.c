#include <stdio.h>

int main(){
    int somador_primeiro = 0;
    int somador_segundo = 0;
    int somatoria = 0;

    printf("Digite o valor:");
    scanf("%i",&somador_primeiro);
    printf("Digite o valor:");  
    scanf("%i",&somador_segundo);
    somatoria = somador_primeiro+somador_segundo;
    if(somatoria >= 20){
        somatoria -= 5;
        printf("O valor fica %i.",somatoria);
        return 0;
    }else{
        somatoria += 8;
        printf("O valor fica %i.",somatoria);
        return 0;
    }

}