#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int a, b, resultado, resposta, escolha;
    int acertos = 0;

    printf(" *** Jogo de matemática ***\n\n");
    printf("Você fará 10 contas de matemática.\n");
    printf("Se acertar pelo menos 8 delas, ganhará um PRÊMIO SURPRESA!\n\n");
    printf("Vamos começar? Responda 1 para SIM ou 2 para NÃO: ");
    scanf("%d", &escolha);
    printf("\n");

    if (escolha == 2) {
        printf("Se prepare mais e volte depois!\n\n");
        return 0;
    } else if (escolha != 1) {
        printf("Opção inválida!\n");
        return 1;
    }

    for (int i = 1; i <= 10; i++) {
        // Alterna entre soma e subtração
        int operacao = (i <= 5) ? 1 : 2;

        if (operacao == 1) { // Soma
            a = rand() % 101;
            b = rand() % 101;
            printf("%d) %d + %d = ", i, a, b);
            scanf("%d", &resposta);
            resultado = a + b;
        } else { // Subtração
            a = rand() % 101 + 50;
            b = rand() % 51;
            printf("%d) %d - %d = ", i, a, b);
            scanf("%d", &resposta);
            resultado = a - b;
        }

        if (resposta == resultado) {
            printf("Você acertou!\n\n");
            acertos++;
        } else {
            printf("Você errou! A resposta certa era %d.\n\n", resultado);
        }
    }

    printf("Você acertou %d de 10 questões.\n", acertos);
    if (acertos >= 8) {
        printf("Parabéns! Você ganhou o PRÊMIO SURPRESA!\n");
    } else {
        printf("Não foi dessa vez. Tente novamente!\n");
    }

    return 0;
}