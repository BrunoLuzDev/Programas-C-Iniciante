#include <stdio.h>
#include <stdlib.h>


//for , while, do..while, para, enquanto, faça..enquanto
int main()
{
    int numero, soma=0;


    for(int i=0; i<5; i++){
    printf("Digite um numero:");
    scanf("%d", &numero);

    soma= soma + numero;

    }
    printf("A soma dos numeros e: %d", soma);
    return 0;

}
