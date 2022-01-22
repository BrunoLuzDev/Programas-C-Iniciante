#include <stdio.h> //  para entrada e saida
#include <stdlib.h> //
#include <string.h> // para que possamos  usar os structs e manipulação de strings


typedef struct{
    char login[30]; // vetor login da struct pessoa
    char senha[30]; // vetor senha da struct pessoa
} usuario; usuario u[1];  // diminuindo o nome da struct para "u" e o "[1]" é o máximo de usuários com logins e senhas


int main(){

    printf("\n\t\t\t\t***BEM VINDO***\n\n");
    printf("\n\tPARA ACESSAR AO SISTEMA, FAVOR PREENCHER OS DADOS ABAIXO:\n\n");


    char loginmain[30]; // responsável por armazenar a senha inserida pelo usuário
    char senhamain[30]; // responsável por armazenar a senha inserida pelo usuário

    strcpy(u[0].login, "SaudePim"); // Definindo o login "SaudePim" na struct
    strcpy(u[0].senha, "Unip123"); // Definindo a senha "Unip123"  na struct

    printf("\n Login:");
    scanf("%s", loginmain); // armazenando os dados inseridos pelo usuário para o vetor login que está dentro da função main

    printf("\n Digite a senha:");
    scanf("%s", senhamain); // armazenando os dados inseridos pelo usuário para o vetor senha que está dentro da função main

    if ((strcmp(loginmain,u[0].login)==0) && (strcmp(senhamain,u[0].senha)==0)){ // A função strcmp é responsável por comparar string com string
        printf("Usuário logado"); // se os vetores de dentro da struct tiver os mesmos dados do vetor interno da função main, usuário será logado.
    }else{
        printf("Login e/ou senha incorretos"); // senão, login ou senha incorreta.
    }
    return 0;
}
