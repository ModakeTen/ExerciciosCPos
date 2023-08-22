#include <stdio.h>

int main(){
    float altura_predio = 0;
    float sombra_predio = 0;
    float altura =0;
    float sombra = 0;
    printf("Sua altura:");
    scanf("%f",&altura);
    printf("Sua Sombra:");
    scanf("%f",&sombra);
    printf("Tamanho da sombra do predio.");
    scanf("%f",&sombra_predio);
    altura_predio = altura * sombra_predio / sombra;
    printf("Altura do predio %.2f metros.",altura_predio);
}
