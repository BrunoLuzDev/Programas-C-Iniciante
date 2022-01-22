#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char login [20];
    char senha [20];
}usuario;usuario u[1];



int main()
{
    char login_main[20];
    char senha_main[20];
    int opcao;


    printf("---------------------------------------\n");
    printf("\t CADASTRO DE PACIENTES\n");
    printf("---------------------------------------\n\n");

    strcpy(u[0].login,"login123");
    strcpy(u[0].senha,"senha123");

    printf("\nDigite  Login: ");
    scanf("%s",login_main);
    printf("\nDigite a senha: ");
    scanf("%s",senha_main);



    if (strcmp(login_main,u[0].login)==0 && strcmp(senha_main,u[0].senha)==0)
        {
        printf("\n\tUSUARIO LOGADO\n");

        printf("\nDigite A Opcao Desejada:\n0 - Cadastrar Paciente positivo\n1 - Salvar\n3 - Consultar Pacientes positivos\n4 - Relacao pacientes Positivos/Grupo de Risco\n5 - Sair\n ");
        scanf("%d",opcao);

        switch(opcao){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            default:
                printf("OPCAO INCORRETA, DIGITE UM NUMERO VÁLIDO!");

        }
    }
    else
        printf("LOGIN E/OU SENHA INCORRETOS");
    return 0;
}
