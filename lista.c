//Administrando contatinhos
//Rafael Scalon Peres Conti, nUSP: 11871181
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

void criar(t_lista *lista){
    lista->primeiro = NULL;
}

static t_apontador pesquisa_pos(t_lista *lista, t_chave *chave){

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
    t_apontador P = pesquisa_pos(lista, chave);
	return P->elemento;
}

int inserir(t_lista *lista, t_elemento elemento){
	if(pesquisa_pos(lista, elemento.nome) == NULL){ //se o nao houver um elemento com a mesma chave
		t_apontador novo = (t_apontador) malloc(sizeof(t_no));
		if (novo == NULL){
			return MEMORIA_CHEIA;
		}

		novo->elemento = elemento;
		novo->proximo = lista->primeiro;
		lista->primeiro = novo;

		return SUCESSO;
	}else{
		return ELEMENTO_REPETIDO;
	}

}
int remover(t_lista *lista, t_chave *chave){
	t_apontador P = lista->primeiro;
	if(P==NULL){
		return ELEMENTO_NAO_ENCONTRADO;
	}
	
	if(strcmp(P->elemento.nome, chave) == 0){ //elemento a ser removido e' o primeiro da lista
		lista->primeiro = lista->primeiro->proximo;
		free(P);
		return SUCESSO;
	}

	while(P->proximo != NULL){
		if(strcmp(P->elemento.nome, chave) == 0){
			t_apontador auxiliar = P->proximo;
			P->proximo = P->proximo->proximo;
			free(auxiliar);
			return SUCESSO;
		}
		P = P->proximo;
	}

	return ELEMENTO_NAO_ENCONTRADO;
}

int alterar(t_lista *lista, t_chave *chave, t_telefone novo_telefone);
