//Administrando contatinhos
//Rafael Scalon Peres Conti, nUSP: 11871181

#include<stdio.h>
#include<stdlib.h>
#include "lista.h"

int main(){
    //variavel para receber a operacao e um contador
    char op_entrada = -1; //inicializado com operacao invalida
    int i = 0;
    while(i < 109 && op_entrada != 0){
        scanf("%c", &op_entrada);
        switch (op_entrada){
            case 'I': //inserir novo contato
            
            break;

            case 'P': //pesquisar por um contato

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
