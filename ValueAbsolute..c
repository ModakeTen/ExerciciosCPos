#include <stdio.h>

int main(){
    int value = 0;
    int hundred = 0;
    int ten = 0;
    int one = 0;
    printf("Enter the value:");
    scanf("%i",&value);
    if (value > 1000)
    {
        printf("The value is greater than the capacity.\n");
        return 0;
    }
    hundred = 100*(value/100);
    value -= hundred;
    ten = 10*(value/10);
    value -= ten;
    one = value/1;
    printf("%i\n",hundred);
    printf("%i\n",ten);
    printf("%i\n",one);
}
