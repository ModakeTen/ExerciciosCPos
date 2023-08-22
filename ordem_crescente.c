#include <stdio.h>

int main(){
    int first_number = 0;
    int second_number = 0;
    printf("Enter the value:");
    scanf("%i",&first_number);
    printf("Enter the value:");
    scanf("%i",&second_number);

    if (second_number < first_number)
    {
        printf("%i and %i.",second_number, first_number);
        return 0;
    }
    else{
        printf("%i and %i.",first_number, second_number);
        return 0;
    }
    
}