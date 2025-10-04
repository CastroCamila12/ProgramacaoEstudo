#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIVROS 50
#define TAM_STRINGS 100

struct Livro {
    char nome[TAM_STRINGS];
    char autor[TAM_STRINGS];
    char editora[TAM_STRINGS];
    int edicao;
};


//função para limpar o buffer de entrada
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


int main(){

    struct Livro biblioteca[MAX_LIVROS];
    int totalLivros = 0;
    int opcao;

    do{

        printf("================================\n");
        printf("   BIBLIOTECA - PARTE 1\n");
        printf("================================\n");
        printf("1 - Cadastrar novo livro\n");
        printf("2 - Listar todos os livros\n");
        printf("0 - Sair\n");
        printf("---------------------------------\n");
        printf("Escolha uma opção: ");

        scanf("%d", &opcao);
        limparBufferEntrada();

        switch (opcao){
            case 1:
                printf("--- Cdastro de novo livro ---\n\n");

                if (totalLivros < MAX_LIVROS){
                    printf("Digite o nome do livro: ");
                    fgets(biblioteca[totalLivros].nome, TAM_STRINGS, stdin);

                    printf("Digite o autor: ");
                    fgets(biblioteca[totalLivros].autor, TAM_STRINGS, stdin);

                    printf("Digite a editora: ");
                    fgets(biblioteca[totalLivros].editora, TAM_STRINGS, stdin);

                    biblioteca[totalLivros].nome[strcspn(biblioteca[totalLivros].nome, "\n")] = '\0';
                    biblioteca[totalLivros].autor[strcspn(biblioteca[totalLivros].autor, "\n")] = '\0';
                    biblioteca[totalLivros].editora[strcspn(biblioteca[totalLivros].editora, "\n")] = '\0';

                    printf("Digite a edição: ");
                    scanf("%d", &biblioteca[totalLivros].edicao);
                    limparBufferEntrada();

                    totalLivros++;

                    printf("\nLivro cadastrado com sucesso!\n");
                } else {
                    printf("Biblioteca cheia! Não é possível cadastrar mais livros.\n");
                }

                printf("\nPressione Enter para continuar...");
                getchar(); // Pausa para o usuário ler a mensagem antes de voltar ao menu
                break;
            
            case 2:
                printf("--- Lista de livros cadastrados ---\n\n");

                if (totalLivros == 0){
                    printf("Nenhum livro cadastrado ainda,\n");
                } else {
                    for (int i = 0; i < totalLivros; i++){
                        printf("---------------------------------\n");
                        printf("LIVRO %d\n", i + 1);
                        printf("Nome: %s\n", biblioteca[i].nome);
                        printf("Autor: %s\n", biblioteca[i].autor);
                        printf("Editora: %s\n", biblioteca[i].editora);
                        printf("Edição: %d\n", biblioteca[i].edicao);  
                    }
                    printf("--------------------------------------\n");
                }
                
            printf("\nPressione Enter para continuar...");
            getchar();
            break;

        case 0:
            printf("\nSaindo do sistema...\n");
            break;
        
        default:
            printf("\nOpção inválida! Tente novamente.\n");
            printf("\nPressione Enter para continuar...");
            getchar();
            break;
        }

    } while (opcao != 0);



    return 0;
}