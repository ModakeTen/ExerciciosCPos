#include <stdio.h>

int main(){
    int numero_User = 0;
    int sucessor = 0;
    int antecessor = 0;
    printf("Digite o valor:");
    scanf("%i",&numero_User);
    sucessor = numero_User + 1;
    antecessor = numero_User - 1;
    printf("O numero %i tem como respectivo sucessor o numero %i e como antecessor o numero %i.",numero_User, sucessor, antecessor);
}
