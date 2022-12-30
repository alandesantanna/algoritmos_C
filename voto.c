#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, anoAt, anoNasc;

    printf("Digite o ano atual: \n");
    scanf("%i", &anoAt);

    printf("Digite seu ano de nascimento: \n");
    scanf("%i", &anoNasc);

    idade = anoAt-anoNasc;

    printf("Sua idade: %i\n", idade);

    if(idade < 16){
        
        printf("Nao vota");
        
    }else if( (idade>=16 && idade<18) || (idade>=70) ){
        
        printf("Voto opcional");
        
    }else if(idade >=18 && idade<70){
        
        printf("voto obrigatorio");
        
    }

    return 0;
}
