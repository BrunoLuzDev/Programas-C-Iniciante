#include <stdio.h>
void main()
{
    int num, resto;
    printf("Digite um numero: ");
    scanf("%d", &num);
    resto = num % 2;
    if(resto == 1){
        printf("O n�mero %d � impar \n", num);
    }else{
        printf("O n�mero %d � par \n", num);
    }
}
