#include <stdio.h>
#include <stdlib.h>
void escrever(char f[])
{
    FILE *file = fopen(f,"w");
    char letra;

    if(file)
    {
        printf("\nDigite um texto e pressione ENTER ao finalizar:\n");
        scanf("%c",&letra);
        while(letra!= '\n')
        {
            fputc(letra,file);
            scanf("%c",&letra);
        }
        fclose(file);
    }
        else
            printf("\nERRO ao abrir arquivo!\n");
}


void ler(char f[]){
    FILE *file= fopen(f,"r");
    char letra;

    printf("\t****TEXTO LIDO DO ARQUIVO****\n");
    if(file){
      while(!feof(file))
            {
                letra=fgetc(file);
                printf("%c",letra);
            }

            fclose(file);
    }
    else
        printf("\nErro ao abrir arquivo\n");
}

int main()
    {
       char nome[] = {"conto.txt"};

       escrever(nome);
       ler(nome);


        return 0;
    }
