#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    int vDigitado;
    printf("Digite quantas vezes deseja repetir: ");
    scanf("%i", &vDigitado);

    while (x <= vDigitado){
        printf("\n%i", x * 10);
        x++;
    }
    return 0;
}