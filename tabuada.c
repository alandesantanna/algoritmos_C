#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabuada;
    printf("Digite a tabuada que voce deseja: \n>>>> ");
    scanf("%i", &tabuada);

    for(int x = 1; x<=10 ; ++x ){
        printf("%ix%i = %i\n", x , tabuada, x * tabuada);
    }

    return 0;
}