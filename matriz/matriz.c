#include<stdio.h>

int main(void){

    int mat[5][5];
    int i,j;

    printf("\nDigite valor para os elementos da matriz\n\n");

    for(i=0; i<5; i++){
    for(j=0;j<5;j++){
    printf("\nElemento [%d][%d] =", i,j);
    scanf("%d", &mat[i][j]);

    }
    }
     printf("\n\n******************* Saida de Dados ********************* \n\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("\nElemento [%d][%d] = %d",i,j,mat[i][j]);
        }
    }

  getch();
  return(0);

}
