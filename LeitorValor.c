#include <stdio.h>

int main(){
    int valor_user = 0;
    printf("Insira o valor:");
    scanf("%i",&valor_user);
    switch (valor_user)
    {
    case 0:
        printf("%i-Zero",valor_user);
        break;
    case 1:
        printf("%i-Um",valor_user);
        break;
    case 2:
        	printf("%i-Dois",valor_user);
            break;
    case 3:
        printf("%i-Tres",valor_user);
        break;
    case 4:
        printf("%i-Quatro",valor_user);
        break;
    case 5:
        printf("%i-Cinco",valor_user);
        break;
    case 6:
         printf("%i-Seis",valor_user);
         break;
    case 7:
        printf("%i-Sete",valor_user);
        break;
    case 8:
        printf("%i-Oito",valor_user);
        break;
    case 9:
        printf("%i-Nove",valor_user);
        break;
    default:
        printf("Valor invalido.");
        break;
    }
    return 0;
}