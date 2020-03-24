#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct no {

    int dado;
    struct No *prox;

};

No *criar_no() {

    No *novo = (No*)malloc(sizeof(No));

    return novo;
}

No *inserir_na_pilha( No *pilha, int dado ) {

    No *novo_no = criar_no();
    novo_no->dado = dado;

    if( pilha == NULL ) {

        pilha = novo_no;
        novo_no->prox = NULL;
    
    }else{

        novo_no->prox = pilha;
        pilha = novo_no;
    }

    return pilha;
}

No *remover_da_pilha( No *pilha ) {

    if( pilha == NULL ) {

        return pilha;
    
    }else{

        No *aux = pilha;
        pilha = pilha->prox;
        free(aux);

        return pilha;
    }
}

void imprimir_pilha( No *pilha ) {

    if( pilha == NULL ) {

        printf("Pilha esta vazia...\n\n");
    
    }else{

        No *aux = pilha;

        while( aux != NULL ) {

            printf("%d\n", aux->dado );

            aux = aux->prox;
        }
    
        printf("\n");
    }
}

int tamanho_da_pilha( No *pilha ) {

    if( pilha == NULL ) {

        return 0;
    
    }else{

        No *aux = pilha;
        int cont = 0;

        while( aux != NULL ) {

            cont++;
            aux = aux->prox;
        }

        return cont;
    }
}