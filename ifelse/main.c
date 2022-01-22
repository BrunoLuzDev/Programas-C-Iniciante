#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float num1,num2,num3,num4,media;

    printf("Digite a primeira nota:");
    scanf("%f",&num1);
    printf("Digite a segunda nota:");
    scanf("%f",&num2);
    printf("Digite a terceira nota:");
    scanf("%f",&num3);
    printf("Digite a quarta nota:");
    scanf("%f",&num4);
    media=(num1+num2+num3+num4)/4;

    if(media>=5)
        printf("Aprovado!");
    else
        printf("Reprovado!");

    printf("A média foi: %.2f",media);

    return 0;
}
