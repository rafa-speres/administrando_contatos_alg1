//Administrando contatinhos
//Rafael Scalon Peres Conti, nUSP: 11871181
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void criar(t_lista *lista){
    lista->primeiro = NULL;
}

t_elemento pesquisar(t_lista *lista, t_chave chave);
int inserir(t_lista *lista, t_elemento elemento);
int remover(t_lista *lista, t_chave chave);
int alterar(t_lista *lista, t_telefone novo_telefone);
