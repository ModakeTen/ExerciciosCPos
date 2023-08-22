#include <stdio.h>

int main(){
    float peso_ideal = 0;
    float altura = 0;
    char sexo = 0;

    printf("Digite sua Altura:");
    scanf("%f",&altura);
    printf("Seu genero: \n1-Masculino(M)\n2-Feminino(F)\nInsira:");
    scanf("%s",&sexo);
    if(sexo == 'M'){
        peso_ideal = 72.7*altura-58;
        printf("Seu peso ideal %.1f kg.",peso_ideal);
    }else if (sexo == 'F'){
        peso_ideal = 62.1*altura-44.7;
        printf("Seu peso ideal %.1f kg.",peso_ideal);
    }else{
        printf("Opcao invalida.");
    }
    return 0;

}