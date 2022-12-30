#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float pi = 3.14;
    int num;
    float res;

    printf("==CALCULADORA DE PI==\n");
    printf("==Qualquer numero que vc digitar sera multiplicado por pi==\n");
    printf("\nDigite um numero: \n");
    scanf("%i", &num);

    res = num * pi;

    printf("RESULTADO: %0.4f\n", res);

    return 0;
}