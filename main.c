//Administrando contatinhos
//Rafael Scalon Peres Conti, nUSP: 11871181 - Giancarlo Malfate Caprino, nUSP: 12725025

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lista.h"

int main(){
    t_lista lista;
    criar(&lista);
    t_elemento elemento;
    t_elemento elemento_aux;
    t_elemento *elemento_x;
    //variavel para receber a operacao e um contador
    char op_entrada;
    int i = 0;
    char nome[10];
    unsigned int telefone;
    while(i < 109 && op_entrada != '0'){
        scanf(" %c", &op_entrada);
        scanf("%s", elemento.nome);
        switch (op_entrada){
            case 'I': //inserir novo contato
                scanf("%u", &elemento.telefone);
                if(inserir(&lista, elemento) == 0){
                    printf("Contatinho ja inserido\n");
                }
            break;

            case 'P': //pesquisar por um contato
                pesquisar(&lista, elemento.nome);
            break;

            case 'R': //remover um contato (busca por nome)
                if(remover(&lista, elemento.nome) == -2){
                    printf("Operacao invalida: contatinho nao encontrado\n");
                }
            break;

            case 'A': //alterar um telefone (busca por nome)
                scanf("%u", &elemento.telefone);
                if(alterar(&lista, elemento.nome, elemento.telefone) == -2){
                    printf("Operacao invalida: contatinho nao encontrado\n");
                }
            break;

            case '0': //sair do loop e finalizar o programa
            break;
        }
    }

    return 0;
}
