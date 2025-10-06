#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIVROS 50
#define TAM_STRINGS 100
#define MAX_EMPRESTIMOS 100

struct Livro {
    char nome[TAM_STRINGS];
    char autor[TAM_STRINGS];
    char editora[TAM_STRINGS];
    int edicao;
    int disponivel;
};

struct Emprestimo {
    int indiceLivro;
    char nomeUsuario[TAM_STRINGS];
};


//função para limpar o buffer de entrada
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


int main(){

    struct Livro *biblioteca;
    struct Emprestimo *emprestimos;
   
    biblioteca = (struct Livro *) calloc(MAX_LIVROS, sizeof(struct Livro));
    emprestimos = (struct Emprestimo *) malloc(MAX_EMPRESTIMOS * sizeof(struct Emprestimo));

//verificação: é crucial verificar se a alocação de memória deu certo
    if(biblioteca == NULL || emprestimos == NULL){
        printf("Erro: Falha ao alocar memória\n");
        return 1; // retorna 1 para indicar um erro
    }

    int totalLivros = 0;
    int totalEmprestimos = 0;
    int opcao;

    do{

        printf("================================\n");
        printf("   BIBLIOTECA - PARTE 1\n");
        printf("================================\n");
        printf("1 - Cadastrar novo livro\n");
        printf("2 - Listar todos os livros\n");
        printf("3 - Realizar empréstimo\n");
        printf("4 - Listar emprestimos\n");
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
                        printf("Status: %s\n", biblioteca[i].disponivel ? "Disponível" : "Emprestado");
                    }
                    printf("--------------------------------------\n");
                }
                
            printf("\nPressione Enter para continuar...");
            getchar();
            break;

        case 3:
            if(totalEmprestimos >= MAX_EMPRESTIMOS){
                printf("Limite de empréstimos atingido!\n");
            } else {
                printf("Livros disponíveis:\n");
                int disponiveis = 0;
                for(int i = 0; i < totalLivros; i++) {
                    if (biblioteca[i].disponivel) {
                        printf("%d - %s\n", i + 1, biblioteca[1].nome);
                        disponiveis++;
                    }
                }

                if (disponiveis == 0) {
                    printf("Nenhum livro disponével para empréstimo.\n");
                } else {
                    printf("\nDigiteo número do livro que deseja emprestar: ");
                    int numLivro;
                    scanf("%d", &numLivro);
                    limparBufferEntrada();

                    int indice = numLivro - 1;

                    if (indice >= 0 && indice < totalLivros && biblioteca[indice].disponivel){
                        printf("Digite o nome do usuário que está pegando o livro: ");
                        fgets(emprestimos[totalEmprestimos].nomeUsuario, TAM_STRINGS, stdin);
                        emprestimos[totalEmprestimos].nomeUsuario[strcspn(emprestimos[totalEmprestimos].nomeUsuario, "\n")] = '\0';

                        emprestimos[totalEmprestimos].indiceLivro = indice;

                        biblioteca[indice].disponivel = 0;

                        totalEmprestimos++;
                        printf("\nEmpréstimo realizado com sucesso!\n");
                    } else {
                        printf("\nNúmero de livro inválido ou livro indiponível.\n");
                    }
                }
            }
            printf("\nPressione Enter para continuar...");
            getchar();
            break;

        case 4:
            printf("--- Lista de Empréstimos ---\n\n");
            if (totalEmprestimos == 0) {
                print("Nenhum empréstimo realizado.\n");
            } else {
                for (int i = 0; i < totalEmprestimos; i++){
                    int indiceLivro = emprestimos[i].indiceLivro;
                    printf("----------------------------------\n");
                    printf("EMPRÉSTIMO %d\n", i + 1);
                    printf("Livro: %s\n", biblioteca[indiceLivro].nome);
                    printf("Usuário: %s\n", emprestimos[i].nomeUsuario);
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

    free(biblioteca);
    free(emprestimos);

    printf("Memória liberada com sucesso.\n");


    return 0;
}