#include <stdio.h> //  para entrada e saida
#include <stdlib.h> //
#include <string.h> // para que possamos  usar os structs e manipula��o de strings


typedef struct{
    char login[30]; // vetor login da struct pessoa
    char senha[30]; // vetor senha da struct pessoa
} usuario; usuario u[1];  // diminuindo o nome da struct para "u" e o "[1]" � o m�ximo de usu�rios com logins e senhas


int main(){

    printf("\n\t\t\t\t***BEM VINDO***\n\n");
    printf("\n\tPARA ACESSAR AO SISTEMA, FAVOR PREENCHER OS DADOS ABAIXO:\n\n");


    char loginmain[30]; // respons�vel por armazenar a senha inserida pelo usu�rio
    char senhamain[30]; // respons�vel por armazenar a senha inserida pelo usu�rio

    strcpy(u[0].login, "SaudePim"); // Definindo o login "SaudePim" na struct
    strcpy(u[0].senha, "Unip123"); // Definindo a senha "Unip123"  na struct

    printf("\n Login:");
    scanf("%s", loginmain); // armazenando os dados inseridos pelo usu�rio para o vetor login que est� dentro da fun��o main

    printf("\n Digite a senha:");
    scanf("%s", senhamain); // armazenando os dados inseridos pelo usu�rio para o vetor senha que est� dentro da fun��o main

    if ((strcmp(loginmain,u[0].login)==0) && (strcmp(senhamain,u[0].senha)==0)){ // A fun��o strcmp � respons�vel por comparar string com string
        printf("Usu�rio logado"); // se os vetores de dentro da struct tiver os mesmos dados do vetor interno da fun��o main, usu�rio ser� logado.
    }else{
        printf("Login e/ou senha incorretos"); // sen�o, login ou senha incorreta.
    }
    return 0;
}
