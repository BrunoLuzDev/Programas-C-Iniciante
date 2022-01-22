#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lA,lB,lC;

    printf("Digite o primeiro valor:");
    scanf("%d",&lA);
    printf("Digite o segundo valor:");
    scanf("%d",&lB);
    printf("Digite o terceiro valor:");
    scanf("%d",&lC);

    if (lA<lB+lC && lB<lA+lB && lC<lA+lB
        ){
        if (lA==lB ||lA==lC ||lB==lC)
            printf("Triangulo Isoceles!");
        else
        if (lA!=lB && lB!=lC)
            printf("Triangulo escaleno");
        else
        if(lA==lB && lB==lC)
            printf("Triangulo equilátero");
    }else{
        printf("Não caracteriza um Triangulo!");
    }

    return 0;
}
