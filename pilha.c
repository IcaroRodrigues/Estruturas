#include <stdio.h>
#include <stdlib.h>

typedef struct {

    int dado;
    struct No *prox;

} No;

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

        printf("Pilha esta vazia...\n");
    
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



int main() {

    int opcao;

    do{


        printf("Registro de Pilha.\n\n");
        printf("(1) - Inserir na pilha.\n");
        printf("(2) - Remover da pilha.\n");
        printf("(3) - Imprimir pilha.\n\n");
        printf("(0) - Sair.\n\n");

        scanf("%d", &opcao );


    }while( opcao != 0 );





    return 0;
}