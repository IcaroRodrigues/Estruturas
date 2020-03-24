#include <stdio.h>
#include <stdlib.h>
#include "pilha.c"

int main() {

    int opcao, valor;
    char resposta = 'n';
    No *pilha = NULL;

    do{
	// system() funciona no linux?
        system("clear");
        printf("Registro de Pilha.\n\n");
        printf("(1) - Inserir na pilha.\n");
        printf("(2) - Remover da pilha.\n");
        printf("(3) - Imprimir pilha.\n\n");
        printf("(0) - Sair.\n\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao );

        if( opcao == 1 ) {
            system("clear");
            printf("Digite um valor: ");
            scanf("%d", &valor );
            pilha = inserir_na_pilha( pilha, valor );
        
        }
        
        if( opcao == 2 ) {

            pilha = remover_da_pilha( pilha );
        }

        if( opcao == 3 ) {

            system("clear");

            do{ 
                int tam = tamanho_da_pilha( pilha );
                printf("Lista de valores na pilha.                Tamanho da pilha: %d\n\n", tam );
                imprimir_pilha( pilha );
                printf("Deseja retornar?\n");
                printf("(s) - (n): ");
                scanf(" %c", &resposta );
                
            }while( resposta != 's' );
        }

    }while( opcao != 0 );

    system("clear");

    return 0;
}
