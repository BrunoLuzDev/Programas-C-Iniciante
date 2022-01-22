#include <stdio.h>
#include <stdlib.h>

int main()
{
    char login;
    char senha;
    char cadlogin;
    char cadsenha;

    printf("-----------Cadastrar Usuário------------\n\n");

    printf("Digite o Login desejado:");
    scanf("%s",&cadlogin);
    printf("Digite a Senha a ser cadastrada:");
    scanf("%s",&cadsenha);

    printf("\n\tUsuario Cadastrado");


    system("cls");

    printf("\t\t------LOGIN-------\n\n");

    printf("Login:");
    scanf("%s",&login);
    printf("\nSenha:");
    scanf("%s",&login);

    if((login==cadlogin)&&(senha==cadsenha)){
        printf("Usuario Logado!");
    }else{
        printf("Senha e/ou Login Incorreto!Verifique as informações e digite novamente.");

    }


    return 0;
}
