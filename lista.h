//Administrando contatinhos
//Rafael Scalon Peres Conti, nUSP: 11871181
#ifndef LISTA_H
#define LISTA_H
//MENSAGENS DE RETURN

typedef char t_chave;
typedef unsigned int t_telefone

typedef struct t_elemento {
	t_chave nome[10];
  t_telefone telefone;
} t_elemento;

typedef struct t_no *t_apontador;
typedef struct t_no {
	t_elemento elemento;
	t_apontador proximo;
} t_no;

typedef struct {
	t_apontador primeiro;
} t_lista;

int criar(t_lista *lista);
t_elemento pesquisar(t_lista *lista, t_chave chave);
int inserir(t_lista *lista, t_elemento elemento);
int remover(t_lista *lista, t_chave chave);
int alterar(t_lista *lista, t_telefone novo_telefone);

#endif
