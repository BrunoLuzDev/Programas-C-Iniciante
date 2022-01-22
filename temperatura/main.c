#include <stdio.h>
#include <stdlib.h>

int main()
{
    float gC;
    float gF;

    printf("Digite a temperatura em graus Celsius:");
    scanf("%f",&gC);

    gF = (9*gC+160)/5;
    printf("%2.f graus celsius correspondem a %2.f graus Fahrenheit!",gC,  gF);
    return 0;
}
