#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float num1, num2, res;
    char op = 0;

    do{

        printf("(1) somar\n");
        printf("(2) subtrair\n");
        printf("(3) multiplicar\n");
        printf("(4) dividir\n");
        printf("(0) sair\n");

        printf("informe a operacao: \n");
        printf("\t>>>");
        op = getche();
        printf("\n\n");

         if(op != '0'){
            printf("digite o primeiro valor: \n");
            scanf("%f", &num1);
            printf("digite o segundo valor: \n");
            scanf("%f", &num2);
        }

        if(op == '1'){
            res = num1 + num2;
        }else if(op=='2'){
            res = num1 - num2;
        }else if(op=='3'){
            res = num1 * num2;
        }else if(op=='4'){
            res = num1 / num2;
        }

        printf("\n O resultado eh: %0.2f\n", res);

    }while(op!='0') ;

    return 0;
}