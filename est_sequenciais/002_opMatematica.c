#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    num1 = 15;
    num2 = 30;

    int soma = num1 + num2;

    printf("adc = %i\n", soma);

    int sub = num2 - num1;

    printf("sub = %i\n", sub);

    int mult = num1 * num2;

    printf("mult = %i\n", mult);

    int div = num2/num1;

    printf("div  = %i\n", div);

    return 0;
}