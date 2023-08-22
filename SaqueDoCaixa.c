#include <stdio.h>
#include <math.h>

int main(){
    float saque = 0;
    printf("Digite o valor que deseja sacar:");
    scanf("%f",&saque);
    int nota100 = saque/100;
    saque -= nota100 * 100;
    int nota50 = saque/50;
    saque -= nota50*50;
    int nota20 = saque/20;
    saque -= nota20*20;
    int nota10 = saque/10;
    saque = nota10*10;
    int nota5 = saque/5;
    saque -= nota5*5;
    int nota2 = saque/2;
    saque -= nota2/2;
    int nota1 = saque;
    printf("Quantidade de notas de 100:%i",nota100);
    printf("\nQuantidade de notas de 50:%i",nota50);
    printf("\nQuantidade de notas de 20:%i",nota20);
    printf("\nQuantidade de notas de 10:%i",nota10);
    printf("\nQuantidade de notas de 5:%i",nota5);
    printf("\nQuantidade de notas de 2:%i",nota2);
    printf("\nQuantidade de notas de 1:%i",nota1);
    return 0;
}
