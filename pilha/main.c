#include <stdio.h>
#include <stdlib.h>

//Pilha/ Stack
/*
FILO -fist in-last out
LIFO -Last in- fist out
-Os dados são inseridos sempre no topo, ou seja, sempre que um novo elemento é inserido , ele ocupa o topo da pilha.
-Apenas temos acesso no elemento que esta no topo.
-O processo de inserir um elemento é chamado de PUSH.
-O processo de remover um elemento é chamado de POP.
*/
#define TAMPILHA 10

int pilha[TAMPILHA] = {0,0,0,0,0,0,0,0,0,0};
int topo = 0;

void lista_elementos(){
    printf("---------Pilha Atual--------");
    for(int i=0; i<TAMPILHA; i++){
       printf("-");
       printf("|%d|",pilha[i]);
       printf("-");
    }
    printf("\nTopo: %d",topo );
    printf("\n\n");

}

void push(){
    int val;
    printf("Informe o valor: ");
    scanf("%d", &val);
    if(topo < TAMPILHA){
            pilha[topo] = val;
            topo = topo +1;
            lista_elementos();


    }else{
     printf("Pilha cheia!\n");
    }

}
void pop(){ //tirar elemento da pilha
    if(topo >= 0){
        pilha[topo-1] = 0;
        topo=topo-1;
        lista_elementos();
    } else{
        printf("Pilha já vazia!\n");

    }
}
void clear(){
    for(int i=0; i<TAMPILHA; i++){
        pilha[i]=0;
    }
    topo=0;
}

int main()
{
    int opcao = 0;

    do{
        printf("Selecione a opção:\n\n[1] - Inserir\n[2] - Remover\n[3] - Listar Elementos\n[4] - Limpar a Pilha\n[-1] - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            lista_elementos();
            break;
        case 4:
            clear();
            break;
        case -1:
            break;
        default:
            printf("Opcao invalida!");

        }


    }while(opcao != -1);
    return 0;
}
