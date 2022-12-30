#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1 , n2, n3, n4, media;

    printf("Digite sua primeira nota: \n");
    scanf("%f", &n1);

    printf("Digite sua segunda nota: \n");
    scanf("%f", &n2);

    printf("Digite sua terceira nota: \n");
    scanf("%f", &n3);

    printf("Digite sua quarta nota: \n");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4) / 4;

    printf("Sua media: %0.2f\n", media );

    if(media >= 7){
        printf("APROVADO");
    }
    else{
        printf("REPROVADO");
    }
    return 0;
}