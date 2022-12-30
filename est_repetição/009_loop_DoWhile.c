#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){

    int cont = 0;
    char c;
    do{

        cont++;
        printf("Digite 0 para sair do loop: \n ");
        printf("%i quantidade de vezes \n", cont);
        c = getchar();

    }while( c != '0' );


    return 0;
}