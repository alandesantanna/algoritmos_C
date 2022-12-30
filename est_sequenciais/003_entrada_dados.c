#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, res;

    printf("Por favor, digite um valor: \n");
    scanf("%i", &num1);
    printf("Por favor, o segundo valor: \n");
    scanf("%i", &num2);

    res = num1+num2;

    printf("Resultado da soma: %i\n", res);

    return 0;
}