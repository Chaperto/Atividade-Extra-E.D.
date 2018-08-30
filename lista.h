#ifndef __LISTA_H__
#define __LISTA_H__



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Descrição do trabalho:






*/

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



void remove_lista(t_lista* lista);

void inserir(int posicao, int codigo, char* nome, float preco, int quantidade, t_lista* lista);

#endif