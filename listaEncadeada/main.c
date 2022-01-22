#include <stdio.h>
#include <stdlib.h>

/* lista encadeada-  Linked list

-Possui alem do seu valor, possui um ponteiro apontando para o proximo elemento;
|1| -> |5|-> Null caso nao tenha nenhum valor apontado ele aponta pra null.
cada elemento é chamado de nó.
-Podemos inerir elementos no comeco ou no fim;
*/

struct st_no{
     int valor;
     struct st_no *prox;
};
typedef struct st_no no;

int vazia( no *le){ // verificar se a lista esta vazia
    if(le->prox == NULL){
        return 1;
    }else{
      return 0;
    }
}

void inicia(no *le){  //ela vai iniciar a lista
    le->prox = NULL;

}
void libera(no *le){
    if(!vazia(le)){
        no *proxNo, *atual;
        atual = le->prox;
        while(atual != NULL){
            proxNo= atual->prox;
            free(atual);
            atual = proxNo;
        }
    }
}
void exibe(no *le){
    if(vazia(le)){
       printf("lista esta vazia!\n\n");
       return;
    }
    no *temp;
    temp =le->prox;

    while(temp != NULL){
        printf("%d ",temp->valor);
        temp=temp->prox;
    }
    printf("\n\n");
}

void insereInicio(no *le){
    no *novo = (no*)malloc(sizeof(no));
    if(!novo){
      printf("Sem memória disponível!)\n");
      exit(1);
    }
    printf("Informe o valor: ");
    scanf("%d",&novo->valor);

    no *oldHead = le->prox;

    le ->prox = novo;

    novo->prox = oldHead;

}

void insereFim(no *le){
    no *novo = (no*)malloc(sizeof(no));
    if(!novo){
        printf("Sem memória disponivel!\n");
        exit(1);
    }
    printf("Informe o valor: ");
    scanf("%d",&novo->valor);
    novo->prox = NULL;

    if(vazia(le)){
      le->prox = novo;

    }else{
        no *temp = le->prox;

        while(temp->prox!= NULL){
            temp = temp->prox;
        }
        temp->prox = novo;
    }

}
void opcao( no *le, int op){
    switch (op){
    case 0:
        libera(le);
        break;
    case 1:
        exibe(le);
        break;
    case 2:
        insereInicio(le);
        break;
    case 3:
        insereFim(le);
        break;
    case 4:
        inicia(le);
        break;
    default:
        printf("Opcao invalida!\n");

    }
}

int menu(){
 int opt;

 printf("Escolha a opcao:\n0- Sair\n1 - Exibir\n2 - Adicionar no inicio\n3 - Adicionar no fim\n4 - Zerar Lista\n");
 printf("Opcao: ");
 scanf("%d",&opt);
 return opt;
}
int main()
{
    no *le = (no*)malloc(sizeof(no));
    if (!le){
        printf("Sem memoria disponivel");
        exit(1);
    }
    inicia(le);
    int opt;

    do{
       opt=menu();
       opcao(le, opt);
    }while(opt);
    free(le);

    return 0;
}
