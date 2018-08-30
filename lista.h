#ifndef __LISTA_H__
#define __LISTA_H__



#include <stdio.h>
#include <stdlib.h>

typedef struct elemento t_elemento;

typedef struct {
    int codigo;
    char* nome;
    float preco;
    int quantidade;


}t_produto;

typedef struct elemento {

    t_produto* produto;
    t_elemento* proximo;

}t_elemento;

typedef struct lista{
    t_elemento* primeiro;
    t_elemento* fim;
    int quantidade;

}t_lista;


t_lista* aloca_lista();

t_elemento* aloca_elemento(int codigo, char* nome, float preco, int quantidade);

t_produto* aloca_produto(int codigo, char* nome, float preco, int quantidade);

void remove_lista(t_lista* lista);

void inserir(int posicao, int codigo, char* nome, float preco, int quantidade, t_lista* lista);

#endif