//Administrando contatinhos
//Rafael Scalon Peres Conti, nUSP: 11871181
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

void criar(t_lista *lista){
    lista->primeiro = NULL;
}

t_apontador pesquisa_ponteiro(t_lista *lista, t_chave *chave){

	t_apontador P = lista->primeiro;
	if(P == NULL){
		return NULL;
	}
	
	while(P != NULL) {
		if (!strcmp(P->elemento.nome, chave)){
			return P;
		}
		P = P->proximo;
	}
	return NULL;

}

t_elemento pesquisar(t_lista *lista, t_chave *chave){
    t_apontador P = pesquisa_ponteiro(lista, chave);
	return P->elemento;
}

int inserir(t_lista *lista, t_elemento elemento){
	t_apontador novo = (t_apontador) malloc(sizeof(t_no));
	if (novo == NULL)
		return 0; //se memoria cheia

	novo->elemento = elemento;
	novo->proximo = lista->primeiro;
	lista->primeiro = novo;

	return 1;
}
int remover(t_lista *lista, t_chave *chave);
int alterar(t_lista *lista, t_telefone novo_telefone);
