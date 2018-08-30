#include "lista.h"



t_lista* aloca_lista(){

    t_lista* lista;

    lista = malloc(sizeof(lista));

    lista->primeiro = NULL;
    lista->fim = NULL;
    lista->quantidade = 0;

return lista;

}

// end aloca lista


t_elemento* aloca_elemento(int codigo, char* nome, float preco, int quantidade){

t_elemento* elemento =  malloc(sizeof(elemento));
t_produto* produto =     aloca_produto(codigo, nome, preco, quantidade);
elemento->produto = produto;

return elemento;

}

//end aloca elemento


t_produto* aloca_produto(int codigo, char* nome, float preco, int quantidade){

    t_produto* produto = malloc(sizeof(produto));
    nome = malloc(sizeof(nome));
    produto->codigo = codigo;
    produto->nome = nome;
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




}

//end remove lista


void inserir(int posicao, int codigo, char* nome, float preco, int quantidade, t_lista* lista){
   



}

//end inserir