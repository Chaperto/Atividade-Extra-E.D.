#include "lista.h"
t_elemento* aloca_elemento(int codigo, char* nome, float preco, int quantidade);

t_produto* aloca_produto(int codigo, char* nome, float preco, int quantidade);


t_lista* aloca_lista(){

    
    t_lista* lista = (t_lista*) malloc(sizeof(lista));

    lista->primeiro = NULL;
    lista->fim = NULL;
    lista->quantidade = 0;

return lista;

}

// end aloca lista


t_elemento* aloca_elemento(int codigo, char* nome, float preco, int quantidade){

t_elemento* elemento = (t_elemento*) malloc(sizeof(elemento));
t_produto* produto =     aloca_produto(codigo, nome, preco, quantidade);
elemento->produto = produto;

return elemento;

}

//end aloca elemento


t_produto* aloca_produto(int codigo, char* nome, float preco, int quantidade){

    t_produto* produto = (t_produto*) malloc(sizeof(produto));
    produto->nome = (char*) malloc(sizeof(char)*strlen(nome));
    produto->codigo = codigo;
    strcpy(produto->nome, nome);
    produto->preco = preco;
    produto->quantidade = quantidade;

    return produto;
    

}

//end aloca_produto


void remove_lista(t_lista* lista){

while(lista->primeiro != NULL && lista->fim != NULL){

    t_elemento* tmp;
    tmp = lista->primeiro;
    lista->primeiro = lista->primeiro->proximo;
    free(tmp->produto->nome);
    free(tmp->produto);
    free(tmp); 

}


free(lista);

}

//end remove lista


void inserir(int posicao, int codigo, char* nome, float preco, int quantidade, t_lista* lista){
   t_elemento* ptr = aloca_elemento(codigo, nome, preco, quantidade);

   if(lista->primeiro == NULL && lista->fim == NULL){
       lista->primeiro = ptr;
       lista->fim = lista->primeiro;

   }

    lista->quantidade++;

}

//end inserir