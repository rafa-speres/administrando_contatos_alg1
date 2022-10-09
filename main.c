//Administrando contatinhos
//Rafael Scalon Peres Conti, nUSP: 11871181

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lista.h"

int main(){
    t_lista lista;
    criar(&lista);
    t_elemento elemento;
    t_elemento elemento_aux;
    t_apontador pointer;
    //variavel para receber a operacao e um contador
    char op_entrada;
    int i = 0;
    char nome[10];
    unsigned int telefone;
    while(i < 109 && op_entrada != '0'){
        scanf("%c", &op_entrada);
        scanf("%s", elemento.nome);
        switch (op_entrada){
            case 'I': //inserir novo contato
                scanf("%u", &elemento.telefone);
                elemento_aux = pesquisar(&lista, elemento.nome);
                printf("teste1");
                if(strcmp(elemento.nome, elemento_aux.nome)){
                    printf("Contatinho ja inserido\n");
                } else{
                    inserir(&lista, elemento);
                    printf("CONSEGUI INSERIR");
                }
            break;

            case 'P': //pesquisar por um contato
                elemento_aux = pesquisar(&lista, elemento.nome);
                if(pesquisa_ponteiro(&lista, elemento.nome) == NULL){
                    printf("Operacao invalida: contatinho nao encontrado\n");
                } else{
                    printf("Contatinho encontrado: telefone %d\n", elemento_aux.telefone);
                }

            break;

            case 'R': //remover um contato ( busca por nome)

            break;

            case 'A': //alterar um telefone (busca por nome)

            break;

            case '0': //sair do loop e finalizar o programa
            break;
        }
    }

    return 0;
}
