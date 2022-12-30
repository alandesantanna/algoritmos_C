#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int qtd;
    float a, b, c, delta, xi, xii;

    printf("\n===CALCULADORA DE BHASKARA===\n");

    printf("\nDigite a quantidade de vezes que deseja efetuar a formula: \n");
    scanf("%i", &qtd);

    for(int cont = 1; cont<=qtd ; cont++ ){

        printf("\nEscreva o valor da variavel A da formula que deseja efetuar: \n");
        scanf("%f", &a);
        printf("Escreva o valor da variavel B da formula que deseja efetuar: \n");
        scanf("%f", &b);
        printf("Escreva o valor da variavel C da formula que deseja efetuar: \n");
        scanf("%f", &c);

        delta = (pow(b,2)) -4*a*c;

         printf("\nDELTA: %0.2f\n", delta);

         if(delta>0){

            xi = (-b + sqrt(delta)) / (2*a);

            xii = (-b - sqrt(delta)) / (2*a);

            printf("\nX1: %0.2f\n", xi);

            printf("X2: %0.2f\n", xii);

         }else if(delta==0){

            xi = (-b + sqrt(delta)) / (2*a);

            printf("\nDelta igual a zero. Suas raizes tem valores iguais\n");
            printf("valor do X1 e X2: %0.2f\n", xi);

         }else{

            printf("Seu Delta e negativo\n");
            printf("Delta negativo nao tem raizes iguais\n");

         }
    }
    printf("\nTODOS OS CALCULOS FORAM EFETUADOS COM SUCESSO\n");

    return 0;
}