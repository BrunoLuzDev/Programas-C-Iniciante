#include <stdio.h>
#include <stdlib.h>

#define TAMFILA 10
//FILA
int fila[TAMFILA]={0,0,0,0,0,0,0,0,0,0};
int head = 0; // proximo a ser atendido
int tail = 0; // ultimo da fila

void lista_elementos(){
    printf("\n -------------Fila Atual----------\n");
    for (int i = 0; i < TAMFILA ; i++){
        printf("-");
        printf("|%d|",fila[i]);
        printf("-");

    }
    printf("\nHead: %d\n",head);
    printf("tail: %d\n", tail);
    printf("\n\n");
}

void enqueue(){ // adicionar a fila
   int val; // variavel para receber o numero da pessoa
   if( tail< TAMFILA){ // verificar se a fila esta cheia para que possa ser inserido ou nao outro numero
       printf("Informe o elemento para adicionar na fila: ");
       scanf("%d",&val);
       fila[tail]=val; //o tail indica o ultimo lugar da fila onde será inserido o valor informado
        tail = tail +1;
        lista_elementos();
   }else{
    printf("A fila esta cheia!!!\n");
   }
}

void dequeue(){ //remover pessoa da fila
   if (head < tail){
    fila[head] = 0;
    head= head + 1;
    lista_elementos();

   }else{
    printf("A fila já esta vazia!\n");
   }
}
 void clear(){ //limpa a fila
    for( int i = 0; i < TAMFILA;  i++){
        fila[i] = 0;
    }
    head = 0;
    tail = 0;

 }
int main()
{
    int opcao =0;

    do{
        printf("Selecione a opção:\n\n[1] - Inserir\n[2] - Remover\n[3] - Listar Elementos\n[4] - Limpar a Fila\n[-1] - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

    switch(opcao){
    case 1:
        enqueue();
        break;
    case 2 :
        dequeue();
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
        printf("Opção invalida!");


    }
    }while(opcao != -1);

    return 0;
}
