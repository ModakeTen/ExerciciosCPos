#include <stdio.h>

int main(){
    int valor_user = 0;
    printf("Insira o valor:");
    scanf("%i",&valor_user);
    if(valor_user%2 == 0 || valor_user%3 == 0){
        if (valor_user%2 == 0)
        {
            printf("%i e divisivel por 2.\n",valor_user);
        }else {
            printf("%i nao e divisivel por 2.\n",valor_user);
        }
        if (valor_user%3 == 0){
            printf("%i e divisivel por 3.\n",valor_user);
        }else{
            printf("%i nao e divisivel por 3.\n",valor_user);
        }
        return 0;
 
    }
    printf("%i nao e divisivel por 2 ou 3.\n",valor_user);

}