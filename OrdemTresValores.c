#include <stdio.h>

int main(){
    int valor_user_p = 0;
    int valor_user_s = 0;
    int valor_user = 0;
    printf("Insira o valor:");
    scanf("%i",&valor_user_p);
    printf("Insira o valor:");
    scanf("%i",&valor_user_s);
    printf("Insira o valor:");
    scanf("%i",&valor_user);
    if(valor_user_p<=valor_user_s && valor_user>=valor_user_p){
        if(valor_user_s<=valor_user){
            printf("%i, %i, %i",valor_user_p, valor_user_s, valor_user);
        }else{
            printf("%i, %i, %i",valor_user_p, valor_user, valor_user_s);
        }
    }else if(valor_user_s<=valor_user_p && valor_user_s <= valor_user){
        if(valor_user_p<=valor_user){
            printf("%i, %i, %i",valor_user_s,valor_user_p,valor_user);
        }else{
            printf("%i, %i, %i",valor_user_s,valor_user,valor_user_p);
        }
    }else if(valor_user<=valor_user_p){
        if(valor_user_p<=valor_user_s){
            printf("%i, %i, %i",valor_user,valor_user_p,valor_user_s);
        }else{
            printf("%i, %i, %i",valor_user,valor_user_s,valor_user_p);
        }
    }
    return 0;
}