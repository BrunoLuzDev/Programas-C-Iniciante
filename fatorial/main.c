#include <stdio.h>
#include <stdlib.h>

int fatorial(int N);

int main(void)
{
    int limite;
    char tecla;
    printf("\n\nCalculo de fatorial\n");
    printf("\nQual fatorial: ");
    fflush(stdin);
    scanf("%d",&limite);
    printf("\nFatorial de %d = a: %d\n",limite,fatorial(limite));
    printf("\nTecle <enter> para finalizar: ");
    fflush(stdin);
    while((tecla = getchar())!= 'r')

    return 0;
}
int fatorial(int N)
{
    int I, FAT;
    FAT=1;
    for (I=1;I<=N;I++)
        FAT *= I;

    return(FAT);
}
