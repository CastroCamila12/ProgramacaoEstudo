#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(0));
int a, b, resultado, escolha;
int acertos = 0;

    printf(" *** Jogo de matemática ***\n");
    printf("\n");
    printf("Você fará 10 contas de matemática, se acertar pelo menos 8 delas, ganhará um PRÊMIO SURPRESA!\n");
    printf("\n");
    printf("Não vale usar calculadora!\n");
    printf("Vamos começar? Responda 1 se estiver pronto ou 2 se quiser desistir: ");
    scanf("%d", &escolha);
    printf("\n");

    switch (escolha){

    case 2:
        printf("Se prepare mais e volte depois!\n");
        printf("\n");

        break;

    case 1:

    a = rand() % 101;
    b = rand() % 101;

    printf("1) %d + %d = ", a, b);
    scanf("%d", &resultado);
        if (resultado == a + b){
            printf("Você acertou!\n");
            acertos++;
        }else {
            printf("Você errou! A resposta certa era: %d\n", a + b);
        }

    printf("\n");

    a = rand() % 101;
    b = rand() % 101;

    printf("2) %d + %d = ", a, b);
    scanf("%d", &resultado);
        if (resultado == a + b){
            printf("Você acertou!\n");
            acertos++;
        }else {
            printf("Você errou! A resposta certa era: %d\n", a + b);
        }

    printf("\n");

    a = rand() % 101;
    b = rand() % 101;

    printf("3) %d + %d = ", a, b);
    scanf("%d", &resultado);
        if (resultado == a + b){
            printf("Você acertou!\n");
            acertos++;
        }else {
            printf("Você errou! A resposta certa era: %d\n", a + b);
        }

    printf("\n");
    
    a = rand() % 101;
    b = rand() % 101;

    printf("4) %d + %d = ", a, b);
    scanf("%d", &resultado);
        if (resultado == a + b){
            printf("Você acertou!\n");
            acertos++;
        }else {
            printf("Você errou! A resposta certa era: %d\n", a + b);
        }

    printf("\n");

    a = rand() % 101;
    b = rand() % 101;

    printf("5) %d + %d = ", a, b);
    scanf("%d", &resultado);
        if (resultado == a + b){
            printf("Você acertou!\n");
            acertos++;
        }else {
            printf("Você errou!A resposta certa era: %d\n", a + b);
        }

    printf("\n");

    a = rand() % 101 + 50;
    b = rand() % 51;

    printf("6) %d - %d = ", a, b);
    scanf("%d", &resultado);
        if (resultado == a - b){
            printf("Você acertou!\n");
            acertos++;
        }else {
            printf("Você errou! A resposta certa era: %d\n", a - b);
        }

    printf("\n");

    a = rand() % 101 + 50;
    b = rand() % 51;

    printf("7) %d - %d = ", a, b);
    scanf("%d", &resultado);
        if (resultado == a - b){
            printf("Você acertou!\n");
            acertos++;
        }else {
            printf("Você errou! A resposta certa era: %d\n", a - b);
        }

    printf("\n");

    a = rand() % 101 + 50;
    b = rand() % 51;

    printf("8) %d - %d = ", a, b);
    scanf("%d", &resultado);
        if (resultado == a - b){
            printf("Você acertou!\n");
            acertos++;
        }else {
            printf("Você errou! A resposta certa era: %d\n", a - b);
        }

    printf("\n");

    a = rand() % 101 + 50;
    b = rand() % 51;

    printf("9) %d - %d = ", a, b);
    scanf("%d", &resultado);
        if (resultado == a - b){
            printf("Você acertou!\n");
            acertos++;
        }else {
            printf("Você errou! A resposta certa era: %d\n", a - b);
        }

    printf("\n");

    a = rand() % 101 + 50;
    b = rand() % 51;

    printf("10) %d - %d = ", a, b);
    scanf("%d", &resultado);
        if (resultado == a - b){
            printf("Você acertou!\n");
            acertos++;
        }else {
            printf("Você errou! A resposta certa era: %d\n", a - b);
        }

    printf("\n");

        break;
        
    default:
        printf("Opção inválida!\n");
        break;
    }

    printf(" ***  ***  ***  *** ");
    printf("\n");

    printf("Você acertou %d contas!\n", acertos);

        if(acertos >= 8){
            printf("Parabéns, você ganhou o prêmio!\n");
        } else {
            printf("Não foi dessa vez! Tente novamente\n");
        }
    
    printf("\n");

    return 0;
}