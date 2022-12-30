#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Digite um valor entre 0 e 9\n");
    scanf("%i", &i);

    switch(i){
    case 0:
        printf("numero digitado: 0");
        break;

    case 1:
        printf("numero digitado: 1");
        break;

    case 2:
        printf("numero digitado: 2");
        break;

    case 3:
        printf("numero digitado: 3");
        break;

    case 4:
        printf("numero digitado: 4");
        break;

    case 5:
        printf("numero digitado: 5");
        break;

    case 6:
        printf("numero digitado: 6");
        break;

    case 7:
        printf("numero digitado: 7");
        break;

    case 8:
        printf("numero digitado: 8");
        break;

    case 9:
        printf("numero digitado: 9");
        break;

    default:
        printf("opcao errada");
    }
    return 0;
}