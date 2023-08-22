#include <stdio.h>

int main(){
    int idade = 0;
    printf("Insira sua idade:");
    scanf("%i",&idade);
    if (idade < 18)
    {
        printf("Voce e menor de idade.");
        return 0;
    }else if(idade >= 65){
        printf("Voce ta na terceira idade.");
        return 0;
    }else{
        printf("Voce e maior de idade.");
        return 0;
    }
    
}