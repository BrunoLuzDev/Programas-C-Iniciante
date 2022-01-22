#include <stdio.h>
#include <stdlib.h>

 float R,A,B;
    int rotadicao(void);
    int rotsubtracao(void);
    int rotmultiplicacao(void);
    int rotdivisao(void);

int main()
{
   char tecla;
   int opcao = 0;
   while (opcao!= 5){
    printf("\n\nMenu Principal\n");
    printf("--------------------\n\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Fim do programa\n\n");
    printf("Escolha uma opcao: ");
    fflush(stdin);
    scanf("%d",&opcao);

    if (opcao!=5)
    {
        switch(opcao)
        {

        case 1:
            rotadicao();
            break;
        case 2:
            rotsubtracao();
            break;
        case 3:
            rotmultiplicacao();
            break;
        case 4:
            rotdivisao();
            break;
        default:
            printf("Opcao invalida");
            fflush(stdin);
            while((tecla = getchar()) != 'r')
            break;
        }

    }
   }
    return(0);
}
int rotadicao(void)
{
    char tecla;
    printf("\n\nRotina de Soma\n");
    printf("-------------------\n\n");
    printf("Digite o primeiro numero: ");
    fflush(stdin);
    scanf("%f", &A);
    printf("Digite o segundo numero: ");
    fflush(stdin);
    scanf("%f", &B);
    R=A+B;
    printf("\nO resultado entre A e B = %6.2f\n", R);
    printf("\nTecle <Enter> para acessar o menu: ");
    fflush(stdin);
    while((tecla = getchar())!='\r')
        return(0);
}

int rotsubtracao(void)
{
   char tecla;
    printf("\n\nRotina de Subtracao\n");
    printf("-------------------\n\n");
    printf("Digite o primeiro numero: ");
    fflush(stdin);
    scanf("%f", &A);
    printf("Digite o segundo numero: ");
    fflush(stdin);
    scanf("%f", &B);
    R=A-B;
    printf("\nO resultado entre A e B = %6.2f\n", R);
    printf("\nTecle <Enter> para acessar o menu: ");
    fflush(stdin);
    while((tecla = getchar())!='\r')
        return(0);
}
int rotmultiplicacao(void)
{
    char tecla;
    printf("\n\nRotina de Multiplicacao\n");
    printf("-------------------\n\n");
    printf("Digite o primeiro numero: ");
    fflush(stdin);
    scanf("%f", &A);
    printf("Digite o segundo numero: ");
    fflush(stdin);
    scanf("%f", &B);
    R=A*B;
    printf("\nO resultado entre A e B = %6.2f\n", R);
    printf("\nTecle <Enter> para acessar o menu: ");
    fflush(stdin);
    while((tecla = getchar())!='\r')
        return(0);
}
int rotdivisao(void)
{

    char tecla;
    printf("\n\nRotina de Soma\n");
    printf("-------------------\n\n");
    printf("digite o primeiro numero: ");
    fflush(stdin);
    scanf("%f", &A);
    printf("digite o segundo numero: ");
    fflush(stdin);
    scanf("%f", &B);
    if (B==0)
        printf("\nErro na divisao");
    else{
        R=A/B;
        printf("\nO resultado entre A e B = %6.2f\n", R);
    }
    printf("\nTecle <Enter> para acessar o menu: ");
    fflush(stdin);
    while((tecla = getchar())!='\r')
        return(0);
}



