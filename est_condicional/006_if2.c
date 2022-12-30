#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;

    printf("Digite  um numero != de 5: \n");
    scanf("%i", &i);

    if(i!=5){
        printf("verdade");
    }
    else{
        printf("falsa");
    }

    return 0;
}