//estrutura de decisao if, else, else if
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int idade;
    printf("Qual a sua idade? ");
    scanf("%d" , &idade);

    if(idade <18){
        printf("Voce � menor de idade");

    } else if(idade>18 && idade <60){
        printf("Voc� e adulto.");
    } else {
        printf("Voce e idoso");
    }

    return 0;
}
