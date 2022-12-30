#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma, sub, mult, div;

    printf("primeiro valor\n");
    scanf("%i", &num1);

    printf("segundo valor\n");
    scanf("%i", &num2);

    soma = num1 + num2;

    printf("Soma: %i\n", soma);

    sub = num1 - num2;

    printf("Subtracao: %i\n", sub);

    mult = num1 * num2;

    printf("Multiplicao: %i\n", mult);

    div = num1/num2;

    printf("Divisao: %i\n", div);

    return 0;
}