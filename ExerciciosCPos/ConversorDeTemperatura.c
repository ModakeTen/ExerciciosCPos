#include <stdio.h>

int main(){
    float Celsius = 0;
    float Fahrenhelt = 0;
    printf("Temperatura em celsius:");
    scanf("%f",&Celsius);
    Fahrenhelt = 1.8 * Celsius + 32;
    printf("\n%.1f Celsius e %.1f Fahrenhelt.",Celsius, Fahrenhelt);
}